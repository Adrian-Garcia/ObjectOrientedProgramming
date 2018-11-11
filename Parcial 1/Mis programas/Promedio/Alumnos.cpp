#include <iostream>
#include <fstream>
#include "Promedio.h"

using namespace std;

int main () {
	
	//Declaramos un archivo de entrada y otro de salida
	ifstream ifEntrada; 
	ofstream ofSalida;
	
	//Nombres de entrada y de salida
	string sNombreEntrada;
	string sNombreSalida;
	
	//Pedimos nombre del Archivo de Entrada
	cout << "Inserta el Nombre del Archivo de Entrada: ";
	cin >> sNombreEntrada;	//Insertar nombre de Entrada
	
	//Pedimos nombre del Archivo de Salida
	cout << "Inserta el Nombre del Archivo de Salida: ";
	cin >> sNombreSalida;	//Insertar nombre de Salida
	
	//Abrimos los archivos de entrada y de salida
	ifEntrada.open(sNombreEntrada.c_str());
	ofSalida.open(sNombreSalida.c_str());
	
	//Objeto del primer alumno 
	Promedio Alumno1;

	//Pedimos nombre del alumno 1
	string sNombre1;
	cout << "Inserta el Nombre del Alumno 1: ";
	cin >> sNombre1;
	Alumno1.setNombre(sNombre1);
	
	//Variables para las notas del alumno 1 y 2
	int iPromTareas, iPromQuizes, iPromExamen;
	int iHWs, iQzs, iExm;
	
	//Tomamos datos del archivo .txt
	ifEntrada >> iPromTareas;
	ifEntrada >> iHWs;
	ifEntrada >> iPromQuizes;
	ifEntrada >> iQzs;
	ifEntrada >> iPromExamen;
	ifEntrada >> iExm;
	
	//ASignamos variables al objeto
	Alumno1.setPorcentajeTareas(iPromTareas);
	Alumno1.setTareas(iHWs);
	Alumno1.setPorcentajeQuizes(iPromQuizes);
	Alumno1.setQuizes(iQzs);
	Alumno1.setPorcentajeExamen(iPromExamen);
	Alumno1.setExamen(iExm);
	
	//Pedimos nombre del alumno 
	string sNombre2;
	cout << "Inserta el Nombre del Alumno 2: ";
	cin >> sNombre2;
	
	int iPromTareas2, iPromQuizes2, iPromExamen2;
	int iHWs2, iQzs2, iExm2;
	
	//Tomamos datos del archivo .txt
	ifEntrada >> iPromTareas2;
	ifEntrada >> iHWs2;
	ifEntrada >> iPromQuizes2;
	ifEntrada >> iQzs2;
	ifEntrada >> iPromExamen2;
	ifEntrada >> iExm2;
	
	//Creamos objeto Alumno 2 con sus variables
	Promedio Alumno2;
	
	//Asignamos variables al objeto
	Alumno2.setPorcentajeTareas(iPromTareas2);
	Alumno2.setTareas(iHWs2);
	Alumno2.setPorcentajeQuizes(iPromQuizes2);
	Alumno2.setQuizes(iQzs2);
	Alumno2.setPorcentajeExamen(iPromExamen2);
	Alumno2.setExamen(iExm2);
	
	//Ponemos datos en el archivo .txt
	ofSalida << Alumno1.getNombre() << endl;
	ofSalida << "Porcentaje		Calificacion \n";
	ofSalida << Alumno1.getPorcentajeTareas() << "\t\t\t";
	ofSalida << Alumno1.getTareas() << "\n";
	ofSalida << Alumno1.getPorcentajeQuizes() << "\t\t\t";
	ofSalida << Alumno1.getQuizes() << "\n"; 
	ofSalida << Alumno1.getPorcentajeExamen() << "\t\t\t";
	ofSalida << Alumno1.getExamen() << "\n";
	ofSalida << "\t\t Nota: " << Alumno1.PromedioGeneral();
	
	ofSalida << "\n\n";
	ofSalida << Alumno2.getNombre() << endl;
	ofSalida << "Porcentaje		Calificacion \n";
	ofSalida << Alumno2.getPorcentajeTareas() << "\t\t\t";
	ofSalida << Alumno2.getTareas() << "\n";
	ofSalida << Alumno2.getPorcentajeQuizes() << "\t\t\t";
	ofSalida << Alumno2.getQuizes() << "\n"; 
	ofSalida << Alumno2.getPorcentajeExamen() << "\t\t\t";
	ofSalida << Alumno2.getExamen() << "\n";
	ofSalida << "\t\t Nota: " << Alumno2.PromedioGeneral();
	
	//Cerramos ambos archivos
	ifEntrada.close();
	ofSalida.close();	
	
	return 0;	
}
