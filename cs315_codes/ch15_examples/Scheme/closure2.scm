(define (closureMaker par)
  (let ((local-var 7))
    (lambda (x) (+ par local-var x))))

(define c3 (closureMaker 3))

(define c5 (closureMaker 5))

(set! closureMaker #f)

(display (c3 22))
(newline)

(display (c5 44))
(newline)
