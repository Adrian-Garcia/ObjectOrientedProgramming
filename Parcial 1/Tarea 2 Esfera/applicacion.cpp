//applicacion.cpp
#include <iostream>
#include <string>
#include "Esfera.h"

using namespace std;

int main () {
	
	Esfera Esfera1;	//Esfera con radio 1
	
	double dRadio;	//Radio de la esfera
	
	//Pedimos radio al usuario
	cout << "Inserta el radio de la esfera: ";
	cin >> dRadio;
	
	//Esfera con parametros del usuario
	Esfera Esfera2(dRadio);	
	
	//Datos de radio, area y volumen de la Esfera 1
	cout << endl << "Esfera 1" << endl;
	cout << "El radio de la esfera 1 es: " << Esfera1.getRadio() << endl;
	cout << "El area de la esfera 1 es: " << Esfera1.calcArea() << endl;
	cout << "El volumen de la esfera 1 es: " << Esfera1.calcVolum() << endl;
	
	//Datos de radio, area y volumen de la Esfera 2
	cout << endl << "Esfera 2" << endl;
	cout << "El radio de la esfera 2 es: " << Esfera2.getRadio() << endl;
	cout << "El area de la esfera 2 es: " << Esfera2.calcArea() << endl;
	cout << "El volumen de la esfera 2 es: " << Esfera2.calcVolum() << endl;
	
	//Desplegamos el radio menor
	Esfera Esfera3 = Esfera1.menor(Esfera2); //Nueva esfera con radio mas chico
	cout << endl << "La esfera mas pequena tiene un radio de: " << Esfera3.getRadio(); 
	
	//Terminamos programa	
	return 0;
}
