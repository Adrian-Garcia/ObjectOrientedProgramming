#include <string>
// #include "Funcion.h"
#include <iostream>

using namespace std;

class Pelicula {
	private:
		//Atributos
		int iNumPeli, iAnio, iDuracion, iCantidad;
		int iLista[10];
		string sTitulo, sGenero;

	public:
		//Constructor default y con parametros
		Pelicula();
		Pelicula(int iNumPeli, int iAnio, int iDuracion, int iCantidad, int *iLista, string sTitulo, string sGenero);

		//Metodos de obencion 
		int getNumPeli();
		int getAnio();
		int getDuracion();
		int getCantidad();
		string getTitulo();
		string getGenero();

		int getLista(int iPosicion);
		void nuevoActor(int iNewID);

		//Metodos de modificacion
		void setNumPeli(int iNumMov);
		void setAnio(int iYear);
		void setDuracion(int iDuration);
		void setCantidad(int iQuantity);
//		void setLista(int *iList);
		void setTitulo(string sTitle);
		void setGenero(string sGender);

		//Metodo muestra
		void Muestra();
};

//Constructor Default 
Pelicula::Pelicula() {
	iNumPeli = 0;
	iAnio = 0;
	iDuracion = 0;
	iCantidad = 0;
	sTitulo = "Titulo";
	sGenero = "Genero";

}

//COnstructor con parametros 
Pelicula::Pelicula(int iNumPeli, int iAno, int iDuracion, int iCantidad, int *iLista, string sTitulo, string sGenero){
	this->iNumPeli = iNumPeli;
	this->iAnio = iAnio;
	this->iDuracion = iDuracion;
	this->iCantidad = iCantidad;
	this->sTitulo = sTitulo;
	this->sGenero = sGenero;
}

//Metodo que obtiene el numero de la pelicula
int Pelicula::getNumPeli() {
	return iNumPeli;
}

//Metodo que obtiene el anio de la pelicula
int Pelicula::getAnio() {
	return iAnio;
}

//Metodo que obtiene la duracion de la pelicula
int Pelicula::getDuracion() {
	return iDuracion;
}

//Metodo que obtiene la cantidad de actores de la pelicula
int Pelicula::getCantidad() {
	return iCantidad;
}

//Metodo que obtiene la lista de actores de la pelicula
int Pelicula::getLista(int iPosicion) {
	return iLista[iPosicion];
}

//Metodo que obtiene el titulo de la pelicula
string Pelicula::getTitulo() {
	return sTitulo;
}

//Metodo que obtiene el genero de la pelicula
string Pelicula::getGenero() {
	return sGenero;
}

//Metodo que modifica el Numero de la pelicula
void Pelicula::setNumPeli(int iNumMov) {
	iNumPeli = iNumMov;
}

//Metodo que modifica el de la pelicula
void Pelicula::setAnio(int iYear) {
	iAnio = iYear;
}

//Metodo que modifica el de la pelicula
void Pelicula::setDuracion(int iDuration) {
	iDuracion = iDuration;
}

//Metodo que modifica el de la pelicula
void Pelicula::setCantidad(int iQuantity) {
	iCantidad = iQuantity;
}

//Metodo que modifica el de la pelicula
void Pelicula::setTitulo(string sTitle) {
	sTitulo = sTitle;
}

//Metodo que modifica el de la pelicula
void Pelicula::setGenero(string sGender) {
	sGenero = sGender;
}

void Pelicula::nuevoActor(int iNewID) {	
	iCantidad++;
	iLista[iCantidad] == iNewID;
}

//Metodo de muestra
void Pelicula::Muestra() {
	cout << sTitulo << " ";
	cout << iAnio << " ";
	cout << iDuracion << " ";
	cout << sGenero << " ";
	cout << iCantidad << " ";
	for (int i=0; i<iCantidad; i++) {
		cout << iLista[i] << " ";;
	}
	cout << endl << endl;
}
