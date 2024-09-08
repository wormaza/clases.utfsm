#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#pragma region GLOBAL A
int a = 2;

int f1() { 
    return a++;
};

int f2 (int i) { 
    return (--a * i);
};
#pragma endregion

#pragma region LOCAL A
int f1(int a) { 
    return a++;
};

int f2 (int i, int a) { 
    return (--a * i);
};
#pragma endregion

#pragma region EJEMPLO 2
int aux = 10;
int c = 0;
float funcion_divide(int i){
    return (float)(i*(++c))/(float)aux;
}
float funcion_dividev2(int i){
    c = 0;
    return (float)(i*(++c))/(float)aux;
}
#pragma endregion

int main(int argc, char** argv)
{
    int i = 10;
    int a = 2;
    #pragma region Explicacion 1
    //GLOBAL
    //f1 retorna: 2
    //luego a -> 3 (a++ sube el valor luego de utilizarse en el retorno) 
    //f2 retorna: 20 (--a -> 2 antes de utilizarse en la operacion)
    //2*20 = 40
    #pragma endregion
    printf("%i\n", f1()*f2(i));
    #pragma region  Explicacion 2
    //LOCAL
    //f1 retorna: 2
    //luego a se destruye, por lo que no surte efecto el cambio a++ 
    //f2 retorna: 10 (--a -> 1 antes de utilizarse en la operacion)
    //2*10 = 20
    #pragma endregion
    printf("%i\n", f1(a)*f2(i,a));


    //Ejemplo 2 efectos laterales
    float b = 10;
    float c = 1;
    float res1 = (funcion_divide(a) + b) / (funcion_divide(a) - c);
    float temp = funcion_divide(a);
    float res2 = (temp + b) / (temp - c);
    cout <<"res1: "<< res1 <<" v/s " << "res2: "<< res2 <<endl;
    res1 = (funcion_dividev2(a) + b) / (funcion_dividev2(a) - c);
    temp = funcion_dividev2(a);
    res2 = (temp + b) / (temp - c);
    cout <<"res1: "<< res1 <<" v/s " << "res2: "<< res2 <<endl;
    cout << "" << endl;

    return 0;
}
