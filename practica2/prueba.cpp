#include <iostream>
using namespace std;



int main(){
	const int numero1 = 5;
	const int numero2 = 4;
	float division;

	division = numero1/numero2;

	cout << "res.   " << division;



}

// Cuando la variable es entero, la división lo que hace es solo tomar el entero e ignorar el valor flotante, sin importar que el resultado 
//sea de tipo double
//Sin embargo cuando se pone un entero y flotante, si lo hará ya que los dos tipos de datos se quedarían en float 
//será la forma en que se haríoa, si una variable tiene tipo float o double se convertirá en ese tipo.