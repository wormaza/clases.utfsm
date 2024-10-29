;ejemplos uso de let

(* (+ 3 3) (+ 3 3))

(let
    ((a 3))
    (* (+ a a) (+ a a))
)

(let
    ((a (+ 3 3)))
    (* a a)
)

(let
    ((a 1)(b 2))
    (+ (* a b) (/ a b))
)

(let
    ((suma +))
    (suma 1 1)
)

(let
    ((- +))
    (- 1 1)
)