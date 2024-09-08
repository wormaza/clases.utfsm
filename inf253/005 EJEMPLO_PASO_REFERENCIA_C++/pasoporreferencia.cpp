#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

//Modifica valores referenciados
void cambia(double &r, double &s) {
    r = 100;
    s = 200;
    cout << "<cambia>&r: " << &r << endl;
    cout << "<cambia>&s: " << &s << endl;
}

//retorna una referencia a una variable
double &mayor(double &r, double &s) {
    cout << "<mayor>&r: " << &r << endl;
    cout << "<mayor>&s: " << &s << endl;
    if (r > s)
        return r;
    else
        return s;
}

int main(int argc, char** argv)
{
    cout << "*** REFERENCIACION DE VARIABLES ***" << endl;
    int a = 1;
	int &b = a; // b queda enlazada a 'a'
	cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    b = 10;
	cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    a = 15;
	cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;


    cout << "*** REFERENCIAS Y FUNCIONES 1 ***" << endl;
    double k = 3, m = 4;
    cout << "k: " << k << endl;
    cout << "m: " << m << endl;
    cout << "&k: " << &k << endl;
    cout << "&m: " << &m << endl;
    cambia(k, m);
    cout << "k: " << k << endl;
    cout << "m: " << m << endl;
    cout << "&k: " << &k << endl;
    cout << "&m: " << &m << endl;
    
    cout << "*** REFERENCIAS Y FUNCIONES 2 ***" << endl;
    mayor(k, m) = 10;
    cout << "k: " << k << endl;
    cout << "m: " << m << endl;

    mayor(k, m)++;
    cout << "k: " << k << endl;
    cout << "m: " << m << endl;



    return 0;
}


