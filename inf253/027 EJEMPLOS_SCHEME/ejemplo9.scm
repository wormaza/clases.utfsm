;alcance de las asignaciones
;caso 1:
(let ((x 1) (y 2)); x=1, y=2
	 (let ((x y) (y x)); no existe dependencia entre ellas a nivel de la misma asignacion
		  (list x y)
     )
)
;caso 2: se va a "forzar" un orden de izq. a derch. por lo que se pierde esa independencia
(let ((x 1) (y 2))
	 (let* ((x y) (y x)) ;la segunda asignacion, es dependiente de la anterior
		   (list x y)
     )
)

;caso 3: recursividad

;letrec permite que el procedimiento se define en base a si mismo (suma)
(letrec ((suma (lambda (ls)
		         (if (null? ls)
		          0
		          (+ (car ls) (suma (cdr ls)))
		         )
	           )
        ))
     (suma '(1 2 3 4 5 6))
)

;let define a suma, pero el mismo procedimiento necesita de suma (y no esta definido para el)
;en consecuencia: suma no esta definida y fallará
(let ((suma (lambda (ls)
		         (if (null? ls)
		          0
		          (+ (car ls) (suma (cdr ls)))
		         )
	        )
        ))
     (suma '(1 2 3 4 5 6))
)

;se debe hacer la definicion dentro del ambito del procedimiento
;el procedimiento llama a suma que se define en su ambito
((lambda (ls)
        (let suma ((l ls))
	        (if (null? l)
		        0
		        (+ (car l) (suma (cdr l)))
	        )
        )
   )
   '(1 2 3 4 5 6)
)

(letrec ((suma (lambda (x)
	             (if (zero? x)
	  	            0
		            (+ x (suma (- x 1)))
                 )
                )
         )
        )
(suma 10))

;otro ejemplo
(letrec ((f (lambda () (+ x 2)));las expresiones lambda NO necesitan de todas las definiciones previamente
	     (x 1)
        )
 (f)
)

;aqui no se puede - muy similar a lo que nos pasaba antes
(letrec ((y (+ x 2)) ;si se necesita de x
	     (x 1)
        )
y)

;ejemplo ppt
(letrec
   (
     (par? (lambda (x)
		    (or (= x 0)(impar? (- x 1)))
           )
     )
     (impar? (lambda (x)
		      (and (not (= x 0))(par? (- x 1)))
             )
     )
   )
   (list (par? 20) (impar? 20))
)
