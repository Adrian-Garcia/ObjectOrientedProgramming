/*
Se lanzan 2 dados 200 veces y se registran los resultados 
obtenidos (2 a 12). Despues se menciona cual valor tiene 
mas probabilidades de salir y cual menos
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	
	ofstream ofArchivo; 			//Archivo de Escritura
	ofArchivo.open("Dados.txt");	//Abrimos archivo
	
	srand(time(0));					//Generar valor semilla
	
	//Arreglo para guardar los resultados de los dados
	int iArr[13];
	
	//Loop que pone en valor de 0 todos los datos
	for (int i=0; i<13; i++) {
		iArr[i] = 0;
	}
	
	//Loop que lanza dados 200 veces
	for (int i=0; i<200; i++) {
		
		//Valores de dados individuales
		int iDado1 = 1 + rand() % 6;
		int iDado2 = 1 + rand() % 6;	
		
		//Suma de ambos dados
		int iDadosTotal = iDado1 + iDado2;
		
		//Si el valor de iDadosTotal es igual a 2
		if (iDadosTotal == 2) {
			iArr[2]++;	//Anadir 1 al valor de iArr[2]
		} 
		
		//Si el valor de iDadosTotal es igual a 3
		else if (iDadosTotal == 3) {
			iArr[3]++;	//Anadir 1 al valor de iArr[3]
		} 
		
		//Si el valor de iDadosTotal es igual a 4
		else if (iDadosTotal == 4) {
			iArr[4]++;	//Anadir 1 al valor de iArr[4]
		}

		//Si el valor de iDadosTotal es igual a 5
		else if (iDadosTotal == 5) {
			iArr[5]++;	//Anadir 1 al valor de iArr[5]
		} 
		
		//Si el valor de iDadosTotal es igual a 6
		else if (iDadosTotal == 6) {
			iArr[6]++;	//Anadir 1 al valor de iArr[6]
		} 
		
		//Si el valor de iDadosTotal es igual a 7
		else if (iDadosTotal == 7) {
			iArr[7]++;	//Anadir 1 al valor de iArr[7]
		} 
		
		//Si el valor de iDadosTotal es igual a 8
		else if (iDadosTotal == 8) {
			iArr[8]++;	//Anadir 1 al valor de iArr[8]
		} 
		
		//Si el valor de iDadosTotal es igual a 9
		else if (iDadosTotal == 9) {
			iArr[9]++;	//Anadir 1 al valor de iArr[9]
		}
		
		//Si el valor de iDadosTotal es igual a 10
		else if (iDadosTotal == 10) {
			iArr[10]++;	//Anadir 1 al valor de iArr[10]
		}
		
		//Si el valor de iDadosTotal es igual a 11
		else if (iDadosTotal == 11) {
			iArr[11]++;	//Anadir 1 al valor de iArr[11]
		}
		
		//Si el valor de iDadosTotal es igual a 12
		else if (iDadosTotal == 12) {
			iArr[12]++;	//Anadir 1 al valor de iArr[12]
		} 				 		
	}
	
	//Muestra resultados
	for (int j=2; j<13; j++) {
		
		ofArchivo  << j << ":	";
		
		for (int k=0; k<iArr[j]; k++) {
			
			ofArchivo << "*";
		}		
		
		ofArchivo << endl;
	}

	int iMaximo = -200;	//Valor maximo
	int iMinimo = 200;	//Valor minimo
	int iResMax;
	int iResMin;
	
	//Loop para buscar valor maximo y valor minimo
	for (int a=2; a<13; a++) {
		
		//Si iMaximo es mas chico que el valor del arreglo
		if (iMaximo < iArr[a]) {
			iMaximo = iArr[a];	//Hacer de a el valor mas grande
			iResMax = a;
		}
		
		//Si iMinimo es mas grande que el valor del arreglo
		if (iMinimo > iArr[a]) {
			iMinimo = iArr[a];	//Hacer de a el valor mas chico
			iResMin = a;
		}
	}
	
	//Desplegar valor mas grande y maximo y minimo
	ofArchivo << "El valor que tiene mas probabilidad de salir es: " << iResMax << endl;
	ofArchivo << "El valor que tiene menos probabilidades de salir es: " << iResMin << endl;
	
	//Terminar programa
	return 0;
}
