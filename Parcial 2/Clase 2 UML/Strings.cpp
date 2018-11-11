/*
|Cadena de caracteres|
	El ultimo caracter es nul 
*/

#include <iostream>

using namespace std;

int main () {
	
	//Cadena de caracteres compuestas por varios caracteres
	char cTexto[20];

	//Loop para desplegar valores
	for (int iX; cTexto[iX] != '\0'; iX++) {
		
		//Desplegamos valor del caracter actial
		cout << cTexto;
		
		//Es mejor usar getline con strings
		//getline(cin, cTexto);		
	}
	
	
	int strlen(char *cTexto) {
		
	}
	
	//Tamanio
	strlen(cTexto);
	
	//Se cambia el texto 1 al texto 2
	strcpy(cTexto2, cTexto);

	//Concatena caracteres
	strcpy(cTexto2, cTexto, 2);	
	
	// Se cambia el texto 2 al texto 1
	strcpy(cTecto, cTexto2);
	
	//
	strcat(cTexto, cTexto2);
	
	//
	strcat(cTecto, cTexto2, 2);
	
	//
	strcmp(cTexto, cTexto2);
	
	
	
	return 0;
}
