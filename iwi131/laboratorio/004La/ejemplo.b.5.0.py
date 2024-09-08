from random import randint as r
total_rondas = int(input("Indique el número de rondas a jugar: "))
puntaje_objetivo = int(input("Puntaje objetivo: "))
i = 0 #contador de rondas
puntaje = 0
flag_puntaje = True
while i < total_rondas and flag_puntaje == True: #equivale a flag_puntaje solo tmb.
    usuario = int(input("Ingrese valor: "))
    aleatorio = r(0,10)
    if usuario >= 0 and usuario <=10:
        i += 1
        if usuario >= aleatorio:
            puntaje += 1
        else:
            puntaje -= 1 
        
        if puntaje >= puntaje_objetivo:
            flag_puntaje = False       
        
        if usuario == aleatorio:
            print("Es su día de suerte, ha ganado!")
            flag_puntaje = False
        
        print("Numero: ", usuario, " Aleatorio: ", aleatorio, " Ronda: ", i, " Puntaje: ", puntaje)
