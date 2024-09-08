#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdarg>

using namespace std;

//Definicion de las funciones
void imprimidor (float(*)(float),float);
float CtoF(float);
float FtoC(float);

void imprimidor(float(*f)(float),float operando)
{
    cout << "Operación da como resultado: " << f(operando) <<endl;
}

float CtoF(float input){
    return input*((float)9/((float)5))*32;
}

float FtoC(float input){
    return (input - 32)*((float)5/((float)9));
}

template <typename T> void imprimidorT(T input) //notar que T representa al tipo de dato
{
    cout << "Operación da como resultado: " << input <<endl; 
}

template <typename T> T Maximo(T a, T b) //notar que T representa al tipo de dato
{
    return a > b ? a : b;
}

void imprimeSuma(int a, double b){
    cout << "Suma: "<< (double)a + b <<endl;
}

//uso de elipsis
void imprimeMultipleSuma(int a,...)
{
    va_list argumentos;
    va_start(argumentos, a); 
    int v,r;
    r = a;
    while ((v = va_arg(argumentos, int)) != -1) {
        r = r + v;
    }
    cout << "Resultado: " << r << endl;
    va_end(argumentos);
}

int main(int argc, char** argv)
{
    //funciones y punteros
    float (*f1)(float) = FtoC;
    float (*f2)(float) = CtoF;
    imprimidor(f1,100);
    imprimidor(f2,100);
    imprimidor(FtoC,100);
    imprimidor(CtoF,100);

    //template
    imprimidorT(f1(100));
    imprimidorT(f2(100));
    imprimidorT(Maximo(1,2));
    imprimidorT(Maximo('a','A'));
    imprimidorT(Maximo(0.4,9.1));

    //coercion
    int a = 1;
    double b = 0.5;
    imprimeSuma(b,a);

    imprimeMultipleSuma(1,2,3,-1);
    imprimeMultipleSuma(1,-1);
    imprimeMultipleSuma(1,'A',"AAA",-1);
    return 0;
}


