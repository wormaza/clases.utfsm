#Necesario para el uso de algunas funciones
import random #para generar números aleatorio
import math #para algunas funciones matemáticas

#Tendremos las siguientes variables disponibles
lado1 = 0
lado2 = 0
lado3 = 0
lado4 = 0
#¿se puede nombrar como 1lado? (recuerde las reglas para nombrar variables)
#¿se puede crear una variable llamada Lado1? (recuerde las reglas para nombrar variables)

tipofigura = input("¿Qué figura va a trabajar?: ") #será texto (str)
generacion = int(input("¿De forma aleatoria (si:1 no:2): ")) #será entero (int). Recuerde el concepto de casteo o conversión


#if anidados, ponga atención en la identación
if generacion == 1:
    if tipofigura == "TRIANGULO":
        lado1 = random.randint(1,10)
        lado2 = random.randint(1,10)
        lado3 = random.randint(1,10)
    elif tipofigura == "CUADRADO":
        lado1 = lado2 = lado3 = lado4 = random.randint(1,10)
    else:
        lado1 = lado2 = random.randint(1,10)
        lado3 = lado4 = random.randint(1,10)
else:    
    if tipofigura == "TRIANGULO":
        lado1 = float(input('Longitud lado 1: '))
        lado2 = float(input('Longitud lado 2: '))
        lado3 = float(input('Longitud lado 3: '))
    elif tipofigura == "CUADRADO":
        lado1 = lado2 = lado3 = lado4 = float(input('Longitud lado: '))
    else:
        lado1 = lado2 = float(input('Longitud ancho: '))
        lado3 = lado4 = float(input('Longitud alto: '))    

area = 0
perimetro = 0

#if - elif - else, ponga atención en la identación
if tipofigura == "TRIANGULO":
    s = (lado1 + lado2 + lado3)/2
    area = math.sqrt(s*(s-lado1)*(s-lado2)*(s-lado3))
    perimetro = lado1+lado2+lado3
elif tipofigura == "CUADRADO":
    area = lado1**2
    perimetro = lado1*4
else:
    area = lado1*lado2
    perimetro = lado1*2+lado3*2


opcion = input("¿Qué quiere conocer?: AREA o PERIMETRO: ")

#if - elif - else, ponga atención en la identación
if tipofigura == "TRIANGULO" and opcion == "AREA":
    print("El área del triangulo es: "+str(round(area,4)))
elif tipofigura == "TRIANGULO" and opcion == "PERIMETRO":
    print("El perímetro del triangulo es: "+str(round(perimetro,4)))
elif tipofigura == "CUADRADO" and opcion == "AREA":
    print("El área del cuadrado es: "+str(round(area,4)))
elif tipofigura == "CUADRADO" and opcion == "PERIMETRO":
    print("El perímetro del cuadrado es: "+str(round(perimetro,4)))
elif opcion == "PERIMETRO":
    print("El perímetro del rectangulo es: "+str(round(perimetro,4)))
else:
    print("El área del rectangulo es: "+str(round(area,4)))