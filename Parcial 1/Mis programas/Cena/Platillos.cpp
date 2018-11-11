#include <iostream>
#include "Cena.h"

using namespace std;

int main () {
	
	Cena Arreglo[2];
	
	for (int i=0; i<2; i++) {
		string sComida;
		string sBebida;
		int iHora;
		
		cout << "Inserta la comida de la cena: ";
		cin >> sComida;
		
		cout << "Inserta la bebida de la cena: ";
		cin >> sBebida;
		
		cout << "Inserta la hora de la cena: ";
		cin >> iHora;
		
		Arreglo[i].setComida(sComida);
		Arreglo[i].setBebida(sBebida);
		Arreglo[i].setHora(iHora);
	}
	
	for (int i=0; i<2; i++) {
		cout << "La cena de la persona 1 es: " << endl;
		cout << Arreglo[i].getComida() << endl;
		cout << Arreglo[i].getBebida() << endl;
		cout << Arreglo[i].getHora() << endl;  
		
		cout << endl << endl;
	}
	
	return 0;	
}
