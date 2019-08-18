#include <iostream>
using namespace std;

int main( ){

	double precio= 78.7;
	

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);

	cout << precio << endl;
}

//FUNCION, sin embargo en el double precio faltaba el = 