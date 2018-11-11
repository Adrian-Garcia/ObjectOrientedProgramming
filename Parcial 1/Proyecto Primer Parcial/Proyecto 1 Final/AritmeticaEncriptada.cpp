//App Proyecto Parcial 1

/*

Dudas 
--El resultado debe de estar en double?
--Como pedir el nombre de archivo de entrada?
--Por que no jala?

*/

#include <iostream>
#include <fstream>
#include <string>
#include <limits.h>
#include <math.h>
#include <limits.h>

using namespace std; 

int main () {
	
	ifstream ifArchivoEntrada;	//Archivo de entrada
	ofstream ofArchivoSalida;	//Archivo de salida
	
	string sNombreEntrada;	//Nombre de archivo de entrada
	string sNombreSalida;	//Nombre de archivo de salida
	
	//Linea en la que se encuentra el programa
	string sLineaActual;
	
	//Arreglo de caracteres encriptados
	char Arr[1][14];	
	
	/*	Por el momento esto no funciona
	//Pedimos nombres de archivos de entrada
	cout << "Inserta el nombre del arcivo de entrada: ";
	cin >> sNombreEntrada;
	
	//Pedimos nombres de archivos de entrada
	cout << "Inserta el nombre del arcivo de salida: ";
	cin >> sNombreSalida; 
	*/
	
	//Abrimos archivos de entrada y salida
	ifArchivoEntrada.open("Entrada.txt");
	ofArchivoSalida.open("sNombreSalida.txt");
		
	//Definimos orden de los caracteres
	Arr[0][0] = '0';
	Arr[0][1] = '1';
	Arr[0][2] = '2';
	Arr[0][3] = '3';
	Arr[0][4] = '4';
	Arr[0][5] = '5';
	Arr[0][6] = '6';
	Arr[0][7] = '7';
	Arr[0][8] = '8';
	Arr[0][9] = '9';
	Arr[0][10] = '+';
	Arr[0][11] = '-';
	Arr[0][12] = '*';
	Arr[0][13] = '/';
		
	//Contador que determina la linea actual
	bool bPrimeraLinea = true;
	
	//Mientras no sea el fin del archivo
	while (!ifArchivoEntrada.eof()) {
		
		//Obtenemos el string de la linea actual
		getline(ifArchivoEntrada, sLineaActual);
		
		//Si es la primer linea
		if (bPrimeraLinea == true) {	
			//Definimos los valores encriptados
			for (int i=0; i<14; i++) {
				ifArchivoEntrada >> Arr[1][i];
			}
			//Definimos que no es la primera linea
			bPrimeraLinea = false;
		}
		
		else {	//Si no es la primera linea
			
			//Operador de la operacion (+-*/)
			char cOperador; 
			
			//Longitud de numeros
			int iLongitud1 = 0;
			int iLongitud2 = 0;
			
			//Hacemos arreglos que contienen los numeros en cada cifra
			char cArrNumero1[INT_MAX];	
			char cArrNumero2[INT_MAX];
			
			//Este dato indica si es la cifra  1 o la 2
			bool bCifra1 = true;
			
			//Contador del segundo numero
			int k=0;
			
			//Loop que lee la linea actual
			for (int j=0; j<sLineaActual.length(); j++) {
				
				//Loop que cuenta la longitud de 
				if (sLineaActual.at(j) != ' ' && bCifra1 == true) {
					//Agregamos 1 a la longitud de la cifra
					iLongitud1++;
					
					//Agregamos el caracter al arreglo de caracteres 1
					cArrNumero1[j] = sLineaActual.at(j);		
				}
				
				else {	//Si no es la cifra 1
					//Definimos que no es la cifra 1 a bCifra1
					bCifra1 = false;	
				}
				
				//Aun no funciona bien
				if (sLineaActual.at(j) != ' ' && bCifra1 == false) {
					//Agregamos 1 a la longitud de la cifra
					iLongitud2++;
					
					//Agregamos el caracter al arreglo de caracteres 2
					cArrNumero2[k] = sLineaActual.at(j);
					
					//Agregamos 1 al contador del arreglo de caracteres 2
					k++;
				}
				
				//Si el operador es +
				if (sLineaActual.at(j) == Arr[0][10]) {
					//Definimos cOperador como +
					cOperador = Arr[0][10];
				}
				
				//Si el operador es -
				if (sLineaActual.at(j) == Arr[0][11]) {
					//Definimos cOperador como -
					cOperador = Arr[0][11];
				}
				
				//Si el operador es x
				if (sLineaActual.at(j) == Arr[0][12]) {
					//Definimos cOperador como x
					cOperador = Arr[0][12];
				}
				
				//Si el operador es /
				if (sLineaActual.at(j) == Arr[0][13]) {
					//Definimos cOperador como /
					cOperador = Arr[0][13];
				}	
			}	
			
			//Valores para ambos numeros
			int iNumero1 = 0;
			int iNumero2 = 0;
			
			//Loop que saca la primer cifra
			for (int L1=0; L1<iLongitud1; L1++) {
				//Loop que desencripta el caracter
				for (int b=0; b<10; b++) {
					if (cArrNumero1[L1] == Arr[1][b]) {
						
						//Transformamos a entero el caracter
						int iNumeroActual (Arr[0][b]-48);
						
						//Sumamos el nuevo numero 
						iNumero1 += (iNumeroActual * (pow(10, L1)));
					}	
				}			
			}
			
			//Loop que saca la segunda cifra
			for (int L2=0; L2<iLongitud2; L2++) {
				//Loop que desencripta el caracter
				for (int b=0; b<10; b++) {
					if (cArrNumero2[L2] == Arr[1][b]) {
						
						//Transformamos a entero el caracter
						int iNumeroActual2 (Arr[0][b]-48);
						
						//Sumaos el nuevo numero
						iNumero2 += (iNumeroActual2 * (pow(10, L2)));
					}	
				}			
			}
			
			//Resultado final de la operacion
			double dResultado;
			
			//Funcion switch que determina el resultado de la operacion
			switch (cOperador) {
				case '+':	//Si el operador es suma
					dResultado = iNumero1 + iNumero2;
					break;	//Se suman ambos numeros
				
				case '-':	//Si el operador es resta
					dResultado = iNumero1 - iNumero2;
					break;	//Se restan ambos numeros
					
				case '*':	//Si el operador es multiplicacion
					dResultado = iNumero1 * iNumero2;
					break;	//Se multiplican ambos numeros
					
				case '/':	//Si el operador es division
					dResultado = iNumero1 / iNumero2;
					break;	//Se dividen ambos numeros
			}
			
			//Desplegamos el resultado
			ofArchivoSalida << iNumero1 << " " << cOperador << 
			" " << iNumero2 << " = " << dResultado << endl;
		}
	}
	
	//Terminamos el programa
	return 0;
}
