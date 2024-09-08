#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int factorial(int N){
    if (N == 0) 
        return 1;
    return N*factorial(N-1);
}

//Para dos números enteros, el máximo comun divisor MCD:
//a y b, donde a>b, el MCD de a y b es igual al MCD de b y a mod b.
int metodo_euclidiano(int a, int b)
{
    if (b == 0)
        return a;
    return metodo_euclidiano(b, a % b);
}

int main(int argc, char** argv)
{
    cout << factorial(4) << endl;
    cout << metodo_euclidiano(252,105) <<endl;
    return 0;
}


