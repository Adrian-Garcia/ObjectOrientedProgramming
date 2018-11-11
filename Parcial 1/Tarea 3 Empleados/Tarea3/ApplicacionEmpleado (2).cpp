//ApplicacionEmpleado.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "Empleado.h"


using namespace std;

int main () {

	char cOpcion;		//Opcion del programa
	Empleados Arr[19];	//Arreglo de objetos de tipo Empleado
	ifstream ifArchivo;	//Archivo de entrada

	Empleados Empleado;	//Objeto empleado

	//Abrir archivo de entrada
	ifArchivo.open("Archivo.txt");
	
	//Contador de lineas del Archivo.txt
	int i=0;

	//Registramos los datos del archivo en el programa
	while (!ifArchivo.eof()) {

		int id, horas;
		double sueldofi, sueldohor;

		ifArchivo >> id;
		ifArchivo >> sueldofi;
		ifArchivo >> sueldohor;
		ifArchivo >> horas;

		Arr[i].setIdEmpleado(id);
		Arr[i].setSueldoFi(sueldofi);
		Arr[i].setSueldoHor(sueldohor);
		Arr[i].setHoras(horas);

		i++;
	}

	do {	//Menu que desplega las opciones a realizar
		cout << "Elige la opcion que deseas realizar: " << endl;
		cout << "A Modificar sueldo fijo" << endl;
		cout << "B Modificar sueldo por horas" << endl;
		cout << "C Registrar horas trabajadas" << endl;
		cout << "D Calcular pago de Empleado" << endl;
		cout << "E Ver lista empleados" << endl;
		cout << "F Terminar" << endl;
		
		//Pedir opcion
		cout << "Opcion: ";
		cin >> cOpcion;	
		cout << endl;
		
		int id;	//id del empleado

		//Si la opcion es A, se modifica el sueldo fijo
		if (cOpcion == 'A' || cOpcion == 'a') {

			//Para validar el usuario
			bool bValidacion = false;

			do { //Loop que pide usuario

				cout << "Inserta el ID del empleado: ";
				cin >> id;

				int j;	//Numero para el contador

				//Busca usuario
				for (j=0; j<20; j++) {

					//Si lo encuentra
					if (id == Arr[j].getIdEmpleado()) {

						//Validamos que el ID
						bValidacion = true;

						//Pedimos nuevo sueldo fijo
						double dNuevoSueldoFi;
						cout << "Inserta el sueldo fijo: ";
						cin >> dNuevoSueldoFi;

						//Lo seleccionamos como el nuevo sueldo
						Arr[j].setSueldoFi(dNuevoSueldoFi);
					}
				}
				//Si el iD es incorrecto, desplega este mensaje
				if (j>=19 && bValidacion == false) {
					cout << "Usuario incorrecto" << endl;
				}
			//Repetir si el usuario no es encontrado
			} while (bValidacion == false);
		}

		//Si la opcion es B, se modifica el sueldo por horas
		if (cOpcion == 'B' || cOpcion == 'b') {

			//Para validar el usuario
			bool bValidacion = false;

			do { //Loop que pide usuario
				cout << "Inserta el ID del empleado: ";
				cin >> id;

				int j;	//Numero para el contador

				//Busca usuario
				for (j=0; j<20; j++) {

					//Si lo encuentra
					if (id == Arr[j].getIdEmpleado()) {

						//Validamos el ID
						bValidacion = true;

						//Pedimos nuevo sueldo por horas
						double dNuevoSueldoHor;
						cout << "Inserta el sueldo por hora: ";
						cin >> dNuevoSueldoHor;

						//Lo selecionamos como el nuervo sueldo por hora
						Arr[j].setSueldoHor(dNuevoSueldoHor);
					}
				}

				//Si el iD es incorrecto, desplega este mensaje
				if (j>=19 && bValidacion == false) {
					cout << "Usuario incorrecto" << endl;
				}
			//Repetir si el usuario no es encontrado
			} while (bValidacion == false);
		}

		//Si la opcion es C, se registran las horas trabajadas
		if (cOpcion == 'C' || cOpcion == 'c') {

			//Para validar el usuario
			bool bValidacion = false;

			do { //Loop que pide usuario

				cout << "Inserta el ID del empleado: ";
				cin >> id;

				int j;	//Numero para el contador

				//Busca usuario
				for (j=0; j<20; j++) {

					//Si lo encuentra
					if (id == Arr[j].getIdEmpleado()) {

						//Validamos que el ID
						bValidacion = true;

						//Pedimos nuevo registro de horas trabajadas
						double dNuevoHoras;
						cout << "Inserta el registro de horas: ";
						cin >> dNuevoHoras;

						//Lo seleccionamos como el nuevo registro de horas trabajadas
						Arr[j].RegistroHoras(dNuevoHoras);
					}
				}
				//Si el iD es incorrecto, desplega este mensaje
				if (j>=19 && bValidacion == false) {
					cout << "Usuario incorrecto" << endl;
				}
			//Repetir si el usuario no es encontrado
			} while (bValidacion == false);
		}

		//Si la opcion es D, se Calcula el pago del empleado
		if (cOpcion == 'D' || cOpcion == 'd') {

			//Para validar el usuario
			bool bValidacion = false;

			do { //Loop que pide usuario

				cout << "Inserta el ID del empleado: ";
				cin >> id;

				int j;	//Numero para el contador

				//Busca usuario
				for (j=0; j<20; j++) {

					//Si lo encuentra
					if (id == Arr[j].getIdEmpleado()) {

						//Validamos que el ID
						bValidacion = true;

						//Calculamos el pago requerido y lo mostramos en pantalla
						cout << "El pago del empleado es de $" << Arr[j].CalcPago();
						cout << endl;
					}
				}
				//Si el iD es incorrecto, desplega este mensaje
				if (j>=19 && bValidacion == false) {
					cout << "Usuario incorrecto" << endl;
				}
			//Repetir si el usuario no es encontrado
			} while (bValidacion == false);
		}

		//Si la opcion es E, se muestra la lista de empleados
		if (cOpcion == 'E' || cOpcion == 'e') {

			cout << "ID   SueldoFijo    SueldoPorHora      Horas     Pago" << endl;

			//Loop de todos los empleados del arreglo
			for (int a=0; a<20; a++){
				
				//Imprimir datos
				cout << Arr[a].getIdEmpleado() << "\t";
				cout << Arr[a].getSueldoFi() << "\t \t";
				cout << Arr[a].getSueldoHor() << "\t \t";
				cout << Arr[a].getHoras() << "\t";
				cout << Arr[a].CalcPago() << endl;
			}
		}

		//Si la opcion es F, el programa termina
		if (cOpcion == 'F' || cOpcion == 'f') {
			ifArchivo.close();
			return 0;
		}

		cout << endl; //Terminamos linea por cuestion estetica
		
	} while (cOpcion != 'F' || cOpcion != 'f');

	//Cerramos archivo
	ifArchivo.close();

	//Terminar programa
	return 0;
}
