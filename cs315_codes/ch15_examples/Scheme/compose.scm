(define (compose . fs)
  (if (null? fs) (lambda (x) x) 
    ; if no argument is given, evaluates to the identity function
      (lambda (x) 
              ((car fs) 
               ((apply compose (cdr fs)) x)))))

(display ((compose sqrt - square) 5))
(newline)

(define foo (compose sqrt - square))

(display (foo 7))
(newline)
