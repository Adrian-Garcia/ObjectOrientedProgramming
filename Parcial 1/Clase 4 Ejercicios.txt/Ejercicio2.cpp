#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
		
		ifstream ifNumerosEntrada;	//Numeros para leer
		int iCodigo;				//Numero para el codigo
		int iCantidad;				//Cantidad de producto comprado
		int dPrecio;				//Precio del articulo
		double dTotal=0;			//Variable para almacenar el precio total
		
		//Encabezado
		cout << "Clave	" << "Precio Unitario	" << "Precio" << endl;
		
		//Abrimos el archivo
		ifNumerosEntrada.open("Archivo.txt");	
		
		//Mientras no sea el fin del archivo
		while (! ifNumerosEntrada.eof()) {	//.eof() fin del archivo
			
			//Ingresa los datos
			ifNumerosEntrada >> iCodigo >> iCantidad >> dPrecio; 
		
			//Mostramos resultados
			cout << iCodigo << "\t" << dPrecio << "\t" << dPrecio*iCantidad << endl;
		
			//Anadimos valores al valor total
			dTotal+=dPrecio*iCantidad;
		}
		
		//Desplegamos el valor total
		cout << "			Total	" << dTotal;
		
		//Cierra el archivo
		ifNumerosEntrada.close();
		
		//Termina el programa
	return 0;
}
