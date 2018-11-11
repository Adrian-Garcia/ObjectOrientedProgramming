#include <iostream>

using namespace std;


int main () {

	int iNumero, *iDirNum;
	
	iNumero = 20;
	iDirNum = &iNumero;
	
	/*
	cout << "Numero: " << iNumero << endl;						//Numero literal que se le asigna a la variable
	cout << "Direccion de Numero: " << &iNumero << endl;		//Direccion de memoria en la que la variable se encuentra 
	*/

	//Desplegamos datos con punteros
	cout << "Numero: " << *iDirNum << endl;						//Numero literal que se le asigna a la variable
	cout << "Direccion de Numero: " << iDirNum << endl;			//Direccion de memoria en la que la variable se encuentra 

	return 0;
}
