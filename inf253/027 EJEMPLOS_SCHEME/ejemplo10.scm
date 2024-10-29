;ejemplos
(eq? '(a b c) '(a b c . ()))
(eqv? '(a b c) '(a b c . ()))
(equal? '(a b c) '(a b c . ()))

;listas asociativas
(define l '((1 a) (2 b) (3 c) (4 5) (a z)))
(assq 1 l)
(assv 'a l)	
(assoc 4 l)
(assq 9 l)

;apply
(apply + '(5 -1 3 5))
(+ 5 -1 3 5)

(apply min '(5 -1 3 5))
(min 5 -1 3 5)

;map
(map (lambda (x y z) (+ y x z))
	'(1 2 -1)
    '(0 2 -1)
    '(0 2 -1)
)
(map (lambda (x) (* 2 x))
	'(4 5 6)
)
(map (lambda (x y) (sqrt (+(* x x) (* y y))))
	'(3 5)
	'(4 12)
)

(map (lambda (x y) (sqrt (+(* x x) (* y y))))
	'(3 5 1)
	'(4 12 1)
)

;filter
(filter odd? '(1 -2 3 4 -5 6))
(filter even? '(1 -2 3 4 -5 6))
(filter positive? '(1 -2 3 4 -5 6))
(filter negative? '(1 -2 3 4 -5 6))

(define (esNegativo n)
    (    
        if (negative? n) 
        #t 
        #f
    )
)

(filter esnegativo '(0 -1 2 3 0 9 -11))

;evaluacion perezosa
(define (plus1 n)
        (delay (+ 1 n) ))

(define prom1 (plus1 1))

(define prom2 (plus1 -1))

(display prom1)
(display prom2)

(force prom1)
(force prom2)

;uso do
(define (sumatoria1_n n)
  (do ((i 1 (+ i 1))     ;a i se le asigna 1, y se indica como cambia       
       (s 0 (+ s i))     ;a sum se le asigna 0 y se incrementa en i
      )   
       ((> i n) s))    ;mientras i sea mayor a n retorna s
)

;lo mismo usando recursion de cola
(define sumatoria1_n2
	(lambda (n) 
		(let sumar ((i 0) (a 0))
		   (if (> i n)
			a
			(sumar (+ i 1) (+ a i))) 
        )
	)
)

(define factorial
   (lambda (n)
	(do ((i n (- i 1))			;; variable i
	       (a 1 (* a i)))			;; variable a
	       ((zero? i) a))))		;; test
