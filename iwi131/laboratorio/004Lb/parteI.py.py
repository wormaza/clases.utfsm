import random

# p => q equivale   a  no p o q
# p: la diferencia de los numeros es menor al numero aleatorio
# q: la suma de los numeros tiene la misma paridad que el numero aletorio

#Modo 1: numero de vidas definido
#Modo 2: Se hace hasta alcanzar un numero determinado de puntos

flag = True
while flag:
    modo = int(input("Ingrese el tipo de modo de juego (1) vidad (2) puntaje: "))
    if modo == 1 or modo == 2:
        flag = False

meta = 0
if modo == 1:
    meta = int(input("Ingrese la cantidad de vidas: "))
else:
    meta = int(input("Ingrese puntaje a alcanzar: "))

puntaje = 0



if modo == 1:
    while meta > 0:
        meta-=1
        #ingreso de x e y
        x = y = -1
        while x < 0:
            x = float(input("Ingrese el primer valor numérico: "))

        while y < 0:
            y = float(input("Ingrese el segundo valor numérico: "))

        #Transformar valores en base a las reglas
        r = x - int(x)
        x = int(x)
        if r >= .5:
            x+=1
                
        r = y - int(y)
        y = int(y)
        if r >= .5:
            y+=1

        v = random.randint(0,10)

        #realizar la evaluación logica de los valores
        p = (x - y) < v
        q = ((x + y)%2 == 0 and v%2 == 0) or ((x + y)%2 != 0 and v%2 != 0)
        
        if (not p) or q:
            puntaje += 1

        print("Valor 1: ",x,
              "Valor 2: ",y,
              "Valor: ",v,
              "Puntaje: ",puntaje)
elif modo == 2:
    flag = True
    while flag:
        if puntaje == meta:
            flag = False;
        #ingreso de x e y
        x = y = -1
        while x < 0:
            x = float(input("Ingrese el primer valor numérico: "))

        while y < 0:
            y = float(input("Ingrese el segundo valor numérico: "))

        #Transformar valores en base a las reglas
        r = x - int(x)
        x = int(x)
        if r >= .5:
            x+=1
                
        r = y - int(y)
        y = int(y)
        if r >= .5:
            y+=1

        v = random.randint(0,10)

        #realizar la evaluación logica de los valores
        p = (x - y) < v
        q = ((x + y)%2 == 0 and v%2 == 0) or ((x + y)%2 != 0 and v%2 != 0)
        
        if (not p) or q:
            puntaje += 1

        print("Valor 1: ",x,
              "Valor 2: ",y,
              "Valor: ",v,
              "Puntaje: ",puntaje)

input()
