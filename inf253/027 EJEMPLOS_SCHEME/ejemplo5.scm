;operadores relacionales
(= 1 1)
(<= 1 1)
(>= 1 1)
(< 1 2)
(> 1 2)

;operadores logicos
(and (or #t #t) (or (not #t) (not #t)))

(
    define (xor a b)
           (and (or a b) (or (not a) (not b)))
)

;condicionales
(if (= 0 0) "si" "no")

(
    if (= (modulo 3 2) 0) 
    "Par" 
    "Impar"
)

(
    define (Paridad n)
    (    
        if (= (modulo n 2) 0) 
        "Par" 
        "Impar"
    )
)

(
    define (abs n)
    (    if (or (= n 0) (> n 0)) 
         n 
         (- 0 n)
    )
)


; varias condiciones

(
    cond  ((= 1 0) "Iguales") 
	      ((< 1 0) "Menor" )
	      (else "Mayor")
)

(
    define (EsCero a)
    (    cond  ((= a 0) "Es cero") 
	           ((< a 0) "Es menor a cero" )
	           (else "Es mayor a cero")
    )
)

;otras funciones
(null? '())
(null? '(1 2 3))
(eqv? '1 '1) ;no pasa lo mismo con las listas
(eqv? '(1 2 3) '(1 2 3))
(pair? '())
(pair? '(1 2 3))
(pair? '(1 . 2))
(pair? '(1 2 . ()))
(number? 1)
(number? '1)
(number? "1")
(string? 1)
(string? "1")