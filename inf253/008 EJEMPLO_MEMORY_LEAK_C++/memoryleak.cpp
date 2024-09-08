#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void ejemplo_memory_leak()
{
    int* ptr = new int(100);
    //Aqui se "pidio memoria"
    return;
    //Me voy sin liberarla
}

int *funcion_puntero() {
    int r[80];//variable local, vive dentro de la función
    for(int i = 0; i < 10; i++)
        r[i]=2*i;
    return r; // Esta memoria a la que apuntaremos se va a liberar
}

int main(int argc, char** argv)
{
    ejemplo_memory_leak();
    int *p = funcion_puntero();
    cout << p[0] << endl;
    return 0;
}