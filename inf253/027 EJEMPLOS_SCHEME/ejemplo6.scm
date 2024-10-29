; ejemplo 1
(define (length ls)
	    (if (null? ls)
            0
            (+ 1 (length (cdr ls)))
        )
)

(length '())
(length '(1 2))
;(length '(1 . 2)) ;¿?

;ejemplo 2: corta según x
(define (cortar x ls)
	(
    cond ((null? ls) ())
	     ((eqv? x (car ls)) (cdr ls))
	     (else (cortar x (cdr ls)))
    )
)

(cortar 0 '(1 2 3 0 4 5 6))

;ejemplo 3 eliminador
(define (eliminador x ls)
	    (
            cond 
             ((null? ls) '())
	         ((eqv? x (car ls)) (eliminador x (cdr ls)))
	         (else (cons (car ls) (eliminador x (cdr ls))))
        )
)

(eliminador 'c '(a b c d e c r e d ))

