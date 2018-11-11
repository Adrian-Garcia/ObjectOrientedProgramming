#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

	ofstream ofArchivo;		//Archivo de escritura
	ifstream ifArchivo;		//Archivo de lectura
	string sLine;			//Linea de donde se sacarán los numeros
	
	//Abrimos el archivo lectura y escritura
	ifArchivo.open("Comas.txt");
	ofArchivo.open("NumerosConComas.txt");
	
	//Mientras no sea el fin del archivo
	while (! ifArchivo.eof()) {
		
		//Leemos linea
		ifArchivo >> sLine;
		
		//Si la linea tiene mas de 3 caracteres
		if (sLine.length() >= 3) {
			
			//Iniciamos el loop que pone comas
			for (int i=sLine.length()-3; i>0; i-=3) {
				sLine.insert(i, ","); //Insertamos comas
			}
		}
		
		//Desplegar linea con comas
		ofArchivo << sLine << endl;
	}
	
	//Cerrar archivos de lectura y escritura
	ofArchivo.close();
	ifArchivo.close();
	
	//Termina programa
	return 0;
}
