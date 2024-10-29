;operaciones sobre listas
'(1 2 3 4)

(car '(1 2 3 4))
(cdr '(1 2 3 4))
(car '(1))
(cdr '(1))

;diferencias cons
(cons '(a b c) '(1 2))
(cons '(a b c) '())
(cons '() '(1 2))
(cons 'a '(b c d))

;diferencias list
(list '(a b c) '(1 2))
(list '(a b c) '())
(list '() '(1 2))
(list 'a '(b c d))
(list 'a 'b 'c 'd)
(list)

;diferencias append
(append '(a b c) '(1 2))
(append '(a b c) '())
(append '() '(1 2))

;tipos de listas 
(cdr '(a b)) ;notar salida
(cdr '(b))

;impuras
(cdr '(a . b)) ;notar resultado

(cons 'a '(b))
(cons 'a 'b) ;recordar que segundo argumento es un lista

'(a b . ()) ;¿como queda?
