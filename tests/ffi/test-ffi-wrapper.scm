;;; -*-Scheme-*-

(C-include "ffi-test")

(define (assert-equal value expected . properties)
  (if (not (equal? value expected))
      (error "Assert-equal failed:" value expected properties)))

(define (assert-= value expected . properties)
  (if (not (equal? value expected))
      (error "Assert-= failed:" value expected properties)))

(define (test-ffi)
  (let* ((struct (malloc (c-sizeof "TestStruct") '|TestStruct|))
	 (bytevector (string->utf8 "input string"))
	 (pi (* 4 (atan 1 1)))
	 (chars (malloc (1+ (* (c-sizeof "char")
			       (bytevector-length bytevector)))
			'(* char)))
	 (callback-id (C-callback (lambda (d)
				    (outf-error "Callback flip "(gc-flip)"\n")
				    (* d pi)))))
    (C->= struct "TestStruct first" (char->integer #\A))
    (C->= struct "TestStruct second" pi)
    (C->= struct "TestStruct third" (char->integer #\C))
    (c-poke-string chars bytevector)
    (C->= struct "TestStruct fourth" chars)
    (C-call "test_register_double"
	    (C-callback "test_double_callback")
	    callback-id)
    (let ((d (C-call "test_double" pi struct)))
      (assert-equal (* pi pi pi) d))
    (de-register-c-callback callback-id)
    (assert-equal (number->string (* 2 (bytevector-length bytevector)))
		  (let* ((alien (make-alien-to-free
				 '(* char)
				 (lambda (retval)
				   (C-call "test_string" retval
					   bytevector struct))))
			 (new (c-peek-cstring alien)))
		    (free alien)
		    (if (string? new)
			new
			(utf8->string new))))
    (let ((a (C-call "test_struct" struct struct)))
      (assert-equal a struct)
      (assert-equal (C-> a "TestStruct second")
		    (+ pi (bytevector-length bytevector))))
    (let ((union (begin
		   (set-alien/ctype! struct '|TestUnion|)
		   struct)))
      (C->= union "TestUnion d" pi)
      (let ((a (C-call "test_union" union union)))
	(assert-equal a union)
	(assert-equal (C-> a "TestUnion d")
		      (+ pi 1.0))))
    (let ((ffi (->environment '(runtime ffi))))
      (gc-flip)
      (assert-= (car ((access registered-callback-count ffi)))
		0 'EXPRESSION '(REGISTERED-CALLBACK-COUNT))
      (assert-= (length (access malloced-aliens ffi))
		0 'EXPRESSION '(LENGTH MALLOCED-ALIENS)))))