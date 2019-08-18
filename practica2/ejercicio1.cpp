#include <iostream>
using namespace std;

int main( ) {
	const double PI = 3.1415926;
	double radio = 0.0;
	double area = 0.0;
	cout << "Calcular el área de un círculo\n";
	cout << "Radio >> ";
	cin >> radio;
	//PI = 3.1416;
	area = PI * radio * radio;
	cout << "El área del círculo es " << area << endl;
	return 0;
}

/*
si se intenta modificar el valor de la constante el compilador marca el siguiente error: "asignación de variable de solo lectura 'PI'
*/
