#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>	//Aprende esto

using namespace std;

int main() {

	char cTexto1[20] = "Adrian Puto Amo";
	char cTexto2[20] = "Fer Manzanita";

	for (int iX; cTexto1[iX] != '\0'; iX++) {
		cout << cTexto1[iX];
	}

	//|Imprime tamanio del string|
	cout << " " << strlen(cTexto1) << endl << endl;

	//|Cambia del texto 1 al 2| 
	strcpy(cTexto1,  cTexto2, 2);
	cout << cTexto1 << "\n" << cTexto2 << endl << endl;
	
	//Inicializamos nuevo string
	char cTexto3[20] = "Fer Manzanita";

	//|Concatena|
	strcat(cTexto3, cTexto2);
	cout << cTexto3 << "\n" << cTexto2 << endl << endl;
	
	/*|Compara dos strings|
		-1 		Son diferentes
		0		Son iguales */
	cout << strcmp(cTexto2, cTexto1);

	return 0;
}
