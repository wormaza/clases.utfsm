#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, char** argv)
{
    int arreglo1[2];
    arreglo1[0] = 1;
    arreglo1[1] = 2;
    cout << "arreglo1[0]: " << arreglo1[0] << endl;
	cout << "arreglo1[1]: " << arreglo1[1] << endl;
    //notar los valores
    cout << "arreglo1: " << arreglo1 << endl;
    cout << "&arreglo1[0]: " << &(arreglo1[0]) << endl;
    cout << "&arreglo1[1]: " << &(arreglo1[1]) << endl;
    //consecuencia de lo anterior
    cout << "*arreglo1: " << *arreglo1 << endl;
	cout << "*(arreglo1+1): " << *(arreglo1+1) << endl; //aritmetica de punteros
    
    int n;
    cin >> n;
    int arreglo2[n];
    cout << "arreglo2: " << arreglo2 << endl;
    cout << "&arreglo2[0]: " << &(arreglo2[0]) << endl;

    for(int i = 0; i < n; i++){
        *(arreglo2+i) = 1 + i;
        cout << "arreglo2["<<i<<"]: " << arreglo2[i] << endl;
        cout << "*(arreglo2+"<<i<<"): " << *(arreglo2+i) << endl;
    }
	
    cout << "*arreglo2: " << *arreglo2 << endl;
	cout << "*(arreglo2+1): " << *(arreglo2+1) << endl;

    short int *px1 = new short int[2];
	px1[0] = 10;
	px1[1] = 20;
	cout << "px1[0]: " << px1[0] << endl;
	cout << "px1[1]: " << px1[1] << endl;
    cout << "px1: " << px1 << endl;
    cout << "*px1: " << *px1 << endl;
	cout << "*(px1+1): " << *(px1+1) << endl;
	*(px1) = 30;
	*(px1 + 1) = 40;
    cout << "px1[0]: " << px1[0] << endl;
	cout << "px1[1]: " << px1[1] << endl;
    cout << "*px1: " << *px1 << endl;
	cout << "*(px1+1): " << *(px1+1) << endl;
	delete[] px1;
	
	short int *px2 = (short int*) malloc(sizeof(short int) * 2);
	*(px2) = 10;
	*(px2 + 1) = 20;
    cout << "px2: " << px2 << endl;
	cout << "px2[0]: " << *(px2) << endl;
	cout << "px2[1]: " << *(px2 + 1) << endl;
    cout << "px2[0]: " << px2[0] << endl;
	cout << "px2[1]: " << px2[1] << endl;
	free(px2);

    string str = "Hola";
    str += " Chao"; 
    cout << str << endl; 

}
