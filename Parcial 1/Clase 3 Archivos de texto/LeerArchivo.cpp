/*
Lee una secuencia de numeros en un archivo de tipo .txt el cual 
se llama "Secuencia.txt" 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	string sNum, sFrase;		//Numeros del archivo .txt
	int iNum, iNum2;
	ifstream ifArchivoEntrada;	//Archivo.txt
	
	ifArchivoEntrada.open("Secuencia.txt");	//Abrimos el archivo
	
	cout << "Inserta algo: ";
	cin >> sNum;
	
	//Leemos el contenido y desplegamos los datos
	//Mientras tenga contenido para pasar a iNum
	while (ifArchivoEntrada >> iNum) {	
		
		//Ingresa datos de iNum
		cout << iNum << " "; 
		
		//Leemos iNum2
		ifArchivoEntrada >> iNum2;

		//Leemos frase
		getline(ifArchivoEntrada, sFrase);
		
		//Desplegamos iNum2 y Frase
		cout << iNum2 << " ";
		cout << sFrase << endl;
	}
	
	/*
	Leemos el contenido en getline
	while (getline(ifArchivoEntrada, sNum)) {
		cout << sNum << " ";
	}*/
	
	//Cerramos el archivo
	ifArchivoEntrada.close();
	
	return 0;
	
}