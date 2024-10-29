;Ejemplos lambda

(
    (lambda (x y) (+ x y))
    2 3
)

(
    (lambda (x) (* 2 x))
    2
)

((lambda (a b) (* a b))2 3)


;ejemplo equivalencia entre expresiones
(let ((x 1) (y 2)) (+ x y))

((lambda (x y) (+ x y)) 1 2)

; lambda + let
(
    let (
            (duplicador (lambda (x) (* 2 x)))
        )
    (duplicador 2)
)

;lambda + let + list
(
    let (
            (duplicador (lambda (x) (* 2 x)))
        )
    (list   (duplicador 2)
            (duplicador 3)
            (duplicador 4))
)

;el comportamiento depende de los parámetros con lo que se defina el procedmiento
((lambda (x y) (list x y)) 1 2)
((lambda (x y) (list x y)) 1 2 3)

((lambda (x . y) (list x y)) 1 2)
((lambda (x . y) (list x y)) 1 2 3)

((lambda x (list x)) 1 2)
((lambda x (list x)) 1 2 3)

;ejemplo
(
    define duplicador (lambda (x) (* 2 x))
)

(
    define dos 2
)

(
    define suma +
)

;forma simplificada
(
    define (duplicador x) (* 2 x)
)

(
    define (duplicador_sumador x y) (* 2 (+ x y))
)