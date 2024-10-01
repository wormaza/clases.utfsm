#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

class Recta
{
	protected:
		int x1,y1,x2,y2;
		string name;
	public:
		Recta(int a, int b, int c, int d):x1(a),y1(b),x2(c),y2(d){};
		void SetName(string s){
			this->name = s;
		}
		string GetName(){
			return this->name;
		}
		~Recta();
		float m();
        float b();
		void Modp1(int a, int b);
		void Modp2(int a, int b);
};

#pragma region DEFINICIONES

Recta::~Recta(){
	cout <<"Se ha eliminado la recta "<<this->name<<endl;
}

float Recta::m(){
	if ((x1 == x2))
		return 0;
	return ((float)y1-(float)y2)/((float)x1-(float)x2);
}

float Recta::b(){
	return y1-(this->m()*(float)x1);
}

void Recta::Modp1(int a, int b){
	if (not(a==x2 && b==y2)){
		this->x1 = a;
		this->y1 = b;
	}
}

void Recta::Modp2(int a, int b){
	if (not(a==x1 && b==y1)){
		this->x2 = a;
		this->y2 = b;
	}
}

#pragma endregion

#pragma region VERSION STRUCT

struct RectaStruct
{
    // Los miembros son públicos por defecto en un struct
    int x1, y1, x2, y2;
	string name;
    
	RectaStruct(int a, int b, int c, int d) : x1(a), y1(b), x2(c), y2(d) {};

    ~RectaStruct() {
        cout << "Se ha eliminado la recta-struct " << this->name << endl;
    }

    float m() {
		if ((x1 == x2))
			return 0;
        return ((float)y2 - (float)y1) / ((float)x2 - (float)x1);
    }

    float b() {
        return y1 - (this->m() * x1);
    }

    void Modp1(int a, int b) {
        if (!(a == x2 && b == y2)) {
            x1 = a;
            y1 = b;
        }
    }

    void Modp2(int a, int b) {
        if (!(a == x1 && b == y1)) {
            x2 = a;
            y2 = b;
        }
    }
};

#pragma endregion

#pragma region PARAMATRIZADO

template <class T>
class EjemploNumerico{
	protected:
		T x;
	public:
		EjemploNumerico(T z):x(z){};
		bool EsMayor(T y){
			return this->x > y;
		}
		void Modificar(T y){
			this->x = this->x + y;
		}
		void PrintValor(){
			cout << "Valor: " << this->x << endl;
		}
};

#pragma endregion


int main(int argc, char** argv)
{
	Recta L1(0,0,1,1);
	Recta* L2 = new Recta(0,0,1,1);
	L1.SetName("L1");
	L2->SetName("L2");
	cout << L1.GetName() <<": m="<< L1.m() <<", b= "<< L1.b() << endl;
	cout << L2->GetName() <<": m="<< L2->m() <<", b= "<< L2->b() << endl;
	delete L2;

	#pragma region EJEMPLO 2
	struct RectaStruct L3(1,2,3,4);
	struct RectaStruct* L4 = new RectaStruct(1,2,3,4);
	L3.name = "L3";
	L4->name = "L4";
	cout << L3.name <<": m="<< L3.m() <<", b= "<< L3.b() << endl;
	cout << L4->name <<": m="<< L4->m() <<", b= "<< L4->b() << endl;
	delete L4;
	#pragma endregion

	EjemploNumerico<int> e1(0.5);
	EjemploNumerico<int>* e2 = new EjemploNumerico<int>(0.5);
	EjemploNumerico<float> e3(0.5);

	e1.Modificar(1.5);
	e2->Modificar(1.5);
	e3.Modificar(1.5);
	cout<<e1.EsMayor(1)<<endl;
	cout<<e2->EsMayor(1)<<endl;
	cout<<e3.EsMayor(1)<<endl;

	return 0;
}