(define a 5)
(+ a a)
(set! a 6)
(+ a a)

(define lista '(a b c d e))
(set! lista (cdr lista))

;ligado
(+ x x)
(define x 10)
(+ x x)

;ligado 2
(define duplicador_2 (lambda (x) (duplicador x))) ;notar que no hay problema
(duplicador_2 2); que pasa?
(define duplicador (lambda (x) (* 2 x)))
(duplicador_2 2); que pasa?

(define duplicador_n (lambda (x) (* n x)))
n
(+ n n)
(duplicador_n 10)
(define n 10)
n
(+ n n)
(duplicador_n 10)

;otro ejemplo
(set! duplicador_n (lambda (x) (* m x)))
(define m 1)
(set! m 1/2)