from random import randint as r
total_rondas = int(input("Indique el número de rondas a jugar: "))
i = 0 #contador de rondas
while i < total_rondas:
    usuario = int(input("Ingrese valor: "))
    aleatorio = r(0,10)
    if usuario >= 0 and usuario <=10:
        i += 1
        print("Numero: ", usuario, " Aleatorio: ", aleatorio, " Ronda: ", i)
