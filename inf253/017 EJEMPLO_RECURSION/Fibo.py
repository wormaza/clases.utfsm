def funcion_Fibonacci(n):
    if n < 0:
        return
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return funcion_Fibonacci(n-1) + funcion_Fibonacci(n-2)

orden = int(input('Ingrese el valor: '))
resultado = funcion_Fibonacci(orden)
print(resultado)
