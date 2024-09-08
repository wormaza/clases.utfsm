#include "header.h"

using namespace std;

int x;
int y = 100;
extern int z;

void funcionzplus(){
	z++;
}

void funcionaplus()
{
	a++;
}

void funcionmemoria(){
	static int i = 0;
	i++;
	cout << "<funcionmemoria> i: " << i << endl;
}


int main(int argc, char** argv)
{
	cout << "*** EJEMPLO 1 ***" <<endl;
	funcionmemoria();
	funcionmemoria();
	funcionmemoria();

	cout << "*** EJEMPLO 2 ***" <<endl;
	funcionaplus();
	cout << "a: " << a <<endl;
	a++;
	cout << "a: " << a <<endl;
	funcionaplus2();
	cout << "a: " << a <<endl;
	a++;
	cout << "a: " << a <<endl;
	funcionaplus2();
	cout << "a: " << a <<endl;

	cout << "*** EJEMPLO 2 ***" <<endl;
	cout << "x: " << x <<endl;
	cout << "y: " << y <<endl;
	cout << "z: " << z <<endl;

	x = 10;
	y = 10;
	z = 10;

	cout << "x: " << x <<endl;
	cout << "y: " << y <<endl;
	cout << "z: " << z <<endl;

	funcionzplus();	
	cout << "z: " << z <<endl;
	z++;
	funcionzplus();	
	cout << "z: " << z <<endl;
	funcionzplus2();	
	cout << "z: " << z <<endl;
	

}