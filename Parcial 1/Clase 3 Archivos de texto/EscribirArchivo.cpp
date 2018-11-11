/*
Escribe una secuencia de numeros en un archivo de tipo .txt el
cual se llama "Secuencia.txt" que es creado por el compilador
*/

#include <iostream>	//Libreria para recibir datos del usuario
#include <fstream>	//Libreria para trabahar con Archivos .txt
using namespace std;

int main () {
	
	int iLimite;				//Definimos el limite 
	int iX;						//Contador del ciclo for
	ofstream ofArchivoTexto;	//Archivo .txt
	
	ofArchivoTexto.open("Secuencia.txt");	//Abrimos archivo
	
	//Pedimos el limite
	cout << "Define el limite: ";	
	cin >> iLimite;					
	
	//Ponemos numeros en el .txt
	for (iX=1; iX<=iLimite; iX++) {		
		ofArchivoTexto << iX << endl;
	}
	
	//Cerramos archivo
	ofArchivoTexto.close();
	
	//Terminamos programa
	return 0;
}
