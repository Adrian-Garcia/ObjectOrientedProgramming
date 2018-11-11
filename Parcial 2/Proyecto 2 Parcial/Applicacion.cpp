#include <iostream>
#include <fstream>
#include "Actor.h"
#include "Pelicula.h"
#include "Funcion.h"

using namespace std;

int main () {

//Variables
	//Arreglos de objetos
	Actor		Actores[20];
	Funcion		Funciones[20];
	Pelicula	Peliculas[20];
	Hora 		Horas[20];

	//Archivos de entrada
	ifstream ifArchivoEntrada1;
	ifstream ifArchivoEntrada2;

	//Nombres de los archivos de entrada
	string sNombreEntrada1;
	string sNombreEntrada2; 	


	//Datos de clase Pelicula
	int numPeli, Anio, Duracion, Cantidad;
	string Titulo, Genero; 

	//Datos de la clase Actor
	int ID;
	string Nombre;

	//Datos de la clase Funcion
	int CantiFun, iNumPeli, iSala;
	string sClaveFun;

	//Datos de la clase Hora
	int iHora, iMinuto;

	//Contadores 
	int i;
	int j;

	//Pedimos nombres de archivos de entrada
	cout << "Inserta el nombre del arcivo de entrada de los Actores: ";
	cin >> sNombreEntrada1;

	cout << "Inserta el nombre del arcivo de entrada de las Peliculas: ";
	cin >> sNombreEntrada2;

	//Abrimos archivo de entrada
	ifArchivoEntrada1.open(sNombreEntrada1.c_str());
	ifArchivoEntrada2.open(sNombreEntrada2.c_str());
	
	//Definimos a i a 0 para poner el contador de actores
	i=0;

	//Recogemos los datos de los actores
	while (ifArchivoEntrada1 >> ID) {

		//Ibtenemos nombre
		getline(ifArchivoEntrada1, Nombre);
		
		//Ponemos datos en los objetos
		Actores[i].setID(ID);
		Actores[i].setNombre(Nombre);

		//Le sumamos 1 a i 
		i++;
	}

	//Reiniciamos i para poner otro contador
	i=0;

	//Recogemos los datos de la pelicula
	while (ifArchivoEntrada2 >> numPeli) {

		//Obtenemos los datos del archivo
		ifArchivoEntrada2 >> Anio;
		ifArchivoEntrada2 >> Duracion;
		ifArchivoEntrada2 >> Genero;
		ifArchivoEntrada2 >> Cantidad;

		//Obtenemos la lista de ID de actores
		int Lista[Cantidad];
		for (j=0; j<Cantidad; j++) {
			ifArchivoEntrada2 >> Lista[j];
		}

		//Obtenemos titulo de la pelicula
		getline(ifArchivoEntrada2, Titulo);

		Peliculas[i].setTitulo(Titulo);
		Peliculas[i].setNumPeli(numPeli);
		Peliculas[i].setAnio(Anio);
		Peliculas[i].setDuracion(Duracion);
		Peliculas[i].setCantidad(Cantidad);
		Peliculas[i].setGenero(Genero);

		//Modificamos la lista de actores
		for (j=0; j<Peliculas[i].getCantidad(); j++) {
			Peliculas[j].nuevoActor(Lista[j]);
		}
		
		i++;
	}

	//Pedimos cantidad de funciones
	cout << "Inserta el numero de funciones que hay: ";
	cin >> CantiFun;
	cout << endl;

	for (i=0; i<CantiFun; i++) {		
		//Pedimos datos de funciones
		cout << "Inserta la clave de la funcion " << i+1 << ": ";
		cin >> sClaveFun;
		cout << "Inserta el numero de funcion " << i+1 << ": ";
		cin >> iNumPeli;
		cout << "Inserta la sala de la funcion " << i+1 << ": ";
		cin >> iSala;
		
		do {
			cout << "Inserta la hora de la funcion " << i+1 << ": ";
			cin >> iHora;
			
			if (iHora > 23 || iHora < 0) {
				cout << "Inserta una hora correcta" << endl;
			}
		} while (iHora > 23 || iHora < 0);

		do {
			cout << "Inserta los minutos de la funcion " << i+1 << ": ";
			cin >> iMinuto;
			if (iMinuto > 60 || iMinuto < 0) {
				cout << "Inserta minutos correctos" << endl;
			}
		} while (iMinuto > 60 || iMinuto < 0);

		cout << endl;

		//Modificamos datos de los objetos
		Funciones[i].setCveFuncion(sClaveFun);
		Funciones[i].setNumPeli(iNumPeli);
		Funciones[i].setSala(iSala);
		Horas[i].setHH(iHora);
		Horas[i].setMM(iMinuto);
		Funciones[i].setHora(Horas[i]);
	}

	//Opcion del Usuario 
	char cOpcion;
	
	do {

		//Menu para que el usuario pueda insertar sus datos
		cout << "|Inserta la opcion que deseas realizar| \n";
		cout << "a) Consulta de todos los actores que estan en la lista \n";
		cout << "b) Consulta de todos las peliculas que estan en la lista \n";
		cout << "c) Consulta de todas las funciones disponibles \n";
		cout << "d) Consulta de funciones por hora \n";
		cout << "e) Consulta por clave de funcion \n";
		cout << "f) Consulta la lista de peliculas en las que participa un actor \n";
		cout << "g) Terminar \n";
		cout << "Opcion: ";
		cin >> cOpcion;
		cout << endl;

		//Opciones para que el usuario pueda poner datos 
		if (cOpcion == 'a'){
			cout << "Actores en la lista:" << endl;
			for (i=0; i<20; i++) {
				if (Actores[i].getID() != 0) {
					Actores[i].Muestra();					
				}
			}
	 	}

		else if (cOpcion == 'b'){
			cout << "Peliculas disponibles: " << endl;
			for (i=0; i<20; i++) {
				if (Peliculas[i].getTitulo() != "Titulo") {
					Peliculas[i].Muestra();
				}
			}
		}
			
		else if (cOpcion == 'c'){
			cout << "Funciones Disponibles: " << endl;
			for (i=0; i<20; i++) {

				//Validamos que exista una funcion en la casilla
				if (Funciones[i].getCveFuncion()!= "0") {
					Funciones[i].Muestra();
				}
			}
		}
			
		else if (cOpcion == 'd'){ 
			//Para validar horas y minutos
			bool bValida = true;

			do {
					
				//Pedimos hora y minutos
				cout << "Inserta la Hora: ";
				cin >> iHora;
				cout << "Inserta los iMinutos: ";
				cin >> iMinuto;

				if ((iHora > 23 || iHora < 0) || (iMinuto > 59 || iMinuto < 0)) {
					bValida = false;
					cout << "Inserta una hora correcta" << endl;
				}
			} while (bValida == false);

			bValida = false;

			for (i=0; i<20; i++) {

				Hora horaActual = Funciones[i].getHora();
				int iHoraActual = horaActual.getHH();
				int iMinutoActual = horaActual.getMM();
					
				if (iHoraActual == iHora && iMinutoActual == iMinuto) {
					bValida = true;
					Funciones[i].Muestra();
					cout << endl;
				}
			}

			if (bValida == false) {
				cout << "Hora no encontrada" << endl;
			}			
		}
			
		else if (cOpcion == 'e'){
			string sClave;				//Clave del usuario
			bool bValidacion = false;	//Validacion de la clave
			int iKeys[20];				//Posicion de clave en string
				
			do {
				//Pedimos la clave de la funcion
				cout << "Inserta la clave de funcion: ";
				cin >> sClave;

				//Validamos que exista
				for (i=0; i<20; i++) {
						
					string sClaveActual = Funciones[i].getCveFuncion();		//Creo que esta en string
						
					//Si existe,
					if (sClave == sClaveActual) {
						bValidacion = true;
					}//bValidacion es verdadero y se guarda la posicion de la clave
				}

				//Si no existe, volvemos a pedirla
				if (bValidacion == false) {
					cout << "Clave no encontrada" << endl;
				}

			} while (bValidacion == false);

			for (i=0; i<20; i++) {
				if (sClave == Funciones[i].getCveFuncion()) {
					Funciones[i].Muestra();
				}
			}
		}

		else if (cOpcion == 'f') {
				
			int iD;
			bool bValidacion = false;
			
			do {	
				
				//Pedimos la clave del actor
				cout << "Inserta el ID del actor: ";
				cin >> iD;
					
				//Validamos que esa clave exista
				for (i=0; i<20; i++) {
					if (iD == Actores[i].getID()) {
						bValidacion = true;
					}
				}

				//Si no encuentra el ID, pedimos otro
				if (bValidacion == false) { 
					cout << "Inserta un ID correcto" << endl;
				}
			} while (bValidacion == false);

			for (i=0; i<20; i++) {
				for (j=0; j<20; j++) {
					if (Peliculas[i].getLista(j) == iD) {
						Peliculas[i].Muestra();
					}
				}
			}
		}
			
		else if (cOpcion == 'g'){
			
			cout << "Adios, que la fuerza te acompanie";

			//Cerramos archivos
			ifArchivoEntrada1.close();
			ifArchivoEntrada2.close();
				
			//Terminamos programa
			return 0;
		} 

		else {
			cout << "Opcion no valida" << endl;
		}

	} while (cOpcion != 'g');

	//Cerramos archivos
	ifArchivoEntrada1.close();
	ifArchivoEntrada2.close();

	//Terminamos programa
	return 0;
}
