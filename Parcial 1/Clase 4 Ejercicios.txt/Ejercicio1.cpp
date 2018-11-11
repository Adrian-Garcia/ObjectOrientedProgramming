#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Copia lo de un archivo en otro
int main () {
	
	ifstream ifArchivoEntrada; //Leer archivo
	ofstream ofArchivoSalida; //Escribir archivo
	
	ifArchivoEntrada.open("nombreArchivo.txt");
	ofArchivoSalida.open("salida.txt");
	
	string sTexto;
	
	//Logica leer
	getline (ifArchivoEntrada, sTexto);
	ifArchivoEntrada >> sTexto;
	
	//Logica escribir
	ofArchivoSalida << sTexto;
	
	ifArchivoEntrada.close();
	ofArchivoSalida.close();
	return 0;
}
