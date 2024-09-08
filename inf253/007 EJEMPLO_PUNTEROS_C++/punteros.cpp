#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

typedef struct Ejemplo{
    int a;
    double b;
} StructEjemplo;

void funcion(int *x)
{
	*x = 40;
}

#pragma region PUNTEROS VOID APROX 1
void*** funcion2(int n){
    void** matriz;//puntero a punteros
    matriz = new void*[n];//un arreglo de punteros 
    for(int i=0;i<n;i++){
        matriz[i] = new int[n];//cada puntero de un tamaño determinado
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ((int**)matriz)[i][j]=++count*2;
            //equivale a:
            //*((((int*)matriz)+i)+j)=++count*2;
        }
    }

    for(int i=0;i<n;i++){
        cout<<"(";
        for(int j=0;j<n;j++){
            cout<<"["<<((int**)matriz)[i][j]<<"]";
            //equivale a:
            //cout<<*((((int*)matriz)+i)+j)<<endl;
        }
        cout<<")"<<endl;
    }

    void*** r;
    r = (void***)&matriz;
    int** m = (int**)*r;
    for(int i=0;i<n;i++){
        cout<<"(";
        for(int j=0;j<n;j++){
            cout << "[" <<((int**)(*r))[i][j] << "]";
            //equivalente a:
            //cout<<*((((int*)*r)+i)+j)<<endl;
            //equivalente a:
            //cout<<*((((int*)m)+i)+j)<<endl;
        }
        cout<<")"<<endl;
    }
    
    return r;
}

void funcion3(void*** r,int n){
    int** m = (int**)*r;
    for(int i=0;i<n;i++){
        cout<<"->(";
        for(int j=0;j<n;j++){
            cout << "[" <<((int**)(*r))[i][j] << "]";
        }
        cout<<")"<<endl;
    }
}
#pragma endregion

#pragma region PUNTEROS VOID APROX 2
void*** rglobal;
int nglobal=4;
void funcion2(){
    rglobal = new void**;
    *rglobal = new void*[nglobal];//un arreglo de punteros 
    for(int i=0;i<nglobal;i++){
        ((void**)*rglobal)[i] = new int[nglobal];//cada puntero de un tamaño determinado
    }

    int count = 0;
    for(int i=0;i<nglobal;i++){
        for(int j=0;j<nglobal;j++){
            ((int**)*rglobal)[i][j]=++count*2;
        }
    }

    for(int i=0;i<nglobal;i++){
        cout<<"(";
        for(int j=0;j<nglobal;j++){
            cout<< "[" <<((int**)*rglobal)[i][j]<<"]";
        }
        cout<<")"<<endl;
    }
}

void funcion3(){
    for(int i=0;i<nglobal;i++){
        cout <<"(";
        for(int j=0;j<nglobal;j++){
            cout << "[" <<((int**)(*rglobal))[i][j] << "]";
        }
        cout<<")"<<endl;
    }
}
#pragma endregion

int main(int argc, char** argv)
{
	#pragma region FORMA TRADICIONAL
    int x = 10;
	int* px;
	px = &x;
	cout << "*** CAMBIANDO VALOR DE X ***" << endl;
	x = 20;
	cout << "Valor x: " << x << endl;
    cout << "Direccion x: " << &x << endl;
    cout << "Valor *px: " << *px << endl;
    cout << "Valor px: " << px << endl;
    cout << "Direccion px: " << &px << endl;
    
    cout << "*** CAMBIANDO VALOR DE *PX ***" << endl;
	*px = 30;
	cout << "Valor x: " << x << endl;
    cout << "Direccion x: " << &x << endl;
    cout << "Valor *px: " << *px << endl;
    cout << "Valor px: " << px << endl;
    cout << "Direccion px: " << &px << endl;
	
    cout << "*** CAMBIANDO VALOR POR MEDIO DE FUNCION y px***" << endl;
	funcion(px);
    cout << "Valor x: " << x << endl;
    cout << "Direccion x: " << &x << endl;
    cout << "Valor *px: " << *px << endl;
    cout << "Valor px: " << px << endl;
    cout << "Direccion px: " << &px << endl;

    cout << "*** CAMBIANDO VALOR POR MEDIO DE FUNCION y &x***" << endl;
	funcion(&x);
    cout << "Valor x: " << x << endl;
    cout << "Direccion x: " << &x << endl;
    cout << "Valor *px: " << *px << endl;
    cout << "Valor px: " << px << endl;
    cout << "Direccion px: " << &px << endl;
    #pragma endregion

    #pragma region  PUNTEROS VOID 1
    void* pv1;
    void* pv2;
    int v1 = 100;
    char v2 = 'W';
    pv1 = &v1;
    pv2 = &v2;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "*pv1: " << *((int*)pv1) << endl;
    cout << "*pv2: " << *((char*)pv2) << endl;
    cout << "*pv1: " << *((char*)pv1) << endl;
    cout << "*pv2: " << *((int*)pv2) << endl;
    StructEjemplo se;
    se.a = 100;
    se.b = 0.5;
    void* pse;
    pse = &se;
    cout << "pse->a: " << ((StructEjemplo*)pse)->a << endl;
    cout << "pse->b: " << ((StructEjemplo*)pse)->b << endl;
    #pragma endregion

    #pragma region MATRIZ ARITMETICA PUNTEROS
    int n = 4;
    int** matriz;//puntero a punteros
    matriz = new int*[n];//un arreglo de punteros 
    for(int i=0;i<n;i++){
        matriz[i] = new int[n];//cada puntero de un tamaño determinado
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matriz[i][j]=++count;
        }
    }

    for(int i=0;i<n;i++){
        cout<<"(";
        for(int j=0;j<n;j++){
            cout<<"["<< *(*(matriz+i))+j <<"]";//Aritmetica de punteros
        }
        cout<<");"<<endl;
    }
    #pragma endregion

    
    #pragma region MATRIZ VOID CON FUNCIONES 1
    cout <<"PRIMER ENFOQUE"<<endl;
    void*** r = funcion2(3);
    funcion3(r,3);
    #pragma endregion

    #pragma region MATRIZ VOID CON FUNCIONES 2
    nglobal = 4;
    funcion2();
    funcion3();
    #pragma endregion

    return 0;
}


