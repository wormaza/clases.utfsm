(define factorial
   (lambda (n)
	    (let fact ((i n))
		          (if (= i 0)
			       1
			       (* i (fact (- i 1)));notar que la ejecución queda pendiente
                   )
        )
    )
)

(define factorial2
   (lambda (n)
	    (let fact ((i n) (a 1))
		   (if (= i 0)
			a
			(fact (- i 1) (* a i))) ;notar que no queda pendiente
        )
    )
)

;ejemplo 2 ppt

(define fibonacci
   (lambda (n)
	    (let fib ((i n))
	         (cond  ((= i 0) 0)
		      	    ((= i 1) 1)
            		(else (+ (fib (- i 1)) (fib (- i 2)))) ;notar que con el "+" sabemos que algo queda pendiente
			 )
		)

	)
)

(define fibonacci2
   (lambda (n)
   	    (if (= n 0)
		     0
		    (let fib ((i n) (a1 1) (a0 0))
			  	(if (= i 1)
			     a1
			     (fib (- i 1) (+ a1 a0) a1))
			)
		)
	)
)

