#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

#pragma region DEFINICIONES STRUCT 
struct Persona{
    int edad;
    string nombre;
};

struct Humano{
    int edad;
    string nombre;
};

typedef Persona Elemento;

#pragma endregion

int main(int argc, char** argv)
{
    struct Humano h;
    struct Persona p;
    Elemento e;
    h.nombre = p.nombre = e.nombre = "Pepito";
    h.edad = p.edad = e.edad = 18;

    //h = p;//No compatible
    //h = e;//No compatible
    p = e;

    return 0;
}
