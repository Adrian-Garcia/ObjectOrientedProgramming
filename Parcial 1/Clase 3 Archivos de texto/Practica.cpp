#include <iostream>
#include <string>
#include <fstream>
#include <limits.h>
#include <stdlib.h>

/*
Si ponemos un cin y despues queremos poner un getline
necesitamos poner un cin.ignore();

Ejemplo
cin >> dParcial1;
cin.ignore();
getline(cin, sNombre);
*/

using namespace std;

void DatosAlumnos (int &iN, string iMat[20][4]) {

	cout << "Inserta el numero de alumnos que hay: ";
	cin >> iN;
	
	int a=0;
	
	for (int i=0; i<iN; i++){
		
		cout << "Inserta el nombre del alumno " << a+1 <<  ": ";
		cin.ignore();
		getline(cin, iMat[i][a]);
		a++;
		
		for (int j=1; j<4; j++) {
			cout << "Inserta la calificacion obtenida en el parcial " << j << ": ";
			cin >> iMat[i][j];
		}
	}
}

void EscribirTxt (int &iN, string iMat[20][4]) {
	
	ofstream ofArchivoTexto;
	ofArchivoTexto.open("Kardex.txt");
	
	int a=0;
	for (int i=0; i<iN; i++) {
		
		ofArchivoTexto << iMat[i][a] << "	";
		a++;
		
		double Promedio = 0;
		
		for (int j=1; j<4; j++) {
			
			string sParcial = iMat[i][j];
			
			Promedio += sParcial - '0';
		}
		
		ofArchivoTexto << Promedio/3.0 << endl;
		
	}
	
	ofArchivoTexto.close();
}

int main () {
	
	string iMat[20][4];
	int Alumnos;
	
	DatosAlumnos(Alumnos, iMat);
	EscribirTxt(Alumnos, iMat);
	
	return 0;
}
