from random import randint as r
total_rondas = int(input("Indique el número de rondas a jugar: "))
i = 0 #contador de rondas
puntaje = 0
while i < total_rondas:
    usuario = int(input("Ingrese valor: "))
    aleatorio = r(0,10)
    if usuario >= 0 and usuario <=10:
        i += 1
        if usuario >= aleatorio:
            puntaje += 1
        else:
            puntaje -= 1        
        print("Numero: ", usuario, " Aleatorio: ", aleatorio, " Ronda: ", i, " Puntaje: ", puntaje)
