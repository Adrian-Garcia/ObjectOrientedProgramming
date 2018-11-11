#include <string>
#include "Hora.h"

using namespace std;

//Clase Funcion de la pelicula
class Funcion {

	//Atributos
	private:
		string sCveFuncion;
		int iNumPeli;
		Hora hora;
		int iSala;

	//Metodos
	public:

		//Constructor default y con parametros
		Funcion();
		Funcion(string sCveFuncion, int iNumPeli, Hora hora, int iSala);

		//Metodos de obtencion
		string getCveFuncion();
		int getNumPeli();
		Hora getHora();
		int getSala();

		//Metodos de modificacion
		void setCveFuncion(string sKey);
		void setNumPeli(int iNumMov);
		void setHora(Hora hour);
		void setSala(int iSalon);

		//Metodo muestra
		void Muestra();
};

//Contructor Default con valores = 0
Funcion::Funcion() {
	sCveFuncion = "0";
	iNumPeli = 0;
	hora;
	iSala = 0;
}

//Contructor con parametros
Funcion::Funcion(string sCveFuncion, int iNumPeli, Hora hora, int iSala){
	this->sCveFuncion = sCveFuncion;
	this->iNumPeli = iNumPeli;
	this->hora = hora;
	this->iSala = iSala;
}

//Metodo que obtiene la clave de funcion
string Funcion::getCveFuncion() {
	return sCveFuncion;
}

//Metodo que obtiene el numero de funcion
int Funcion::getNumPeli() {
	return iNumPeli;
}

//Metodo que obtiene la hora de la funcion
Hora Funcion::getHora() {
	return hora;
}

//Metodo que obtiene la sala de la funcion
int Funcion::getSala() {
	return iSala;
}

//Metodo que modifica la sala de la funcion
void Funcion::setCveFuncion(string sKey) {
	sCveFuncion = sKey;
}

//Metodo que modifica el numero de la funcion
void Funcion::setNumPeli(int iNumMov) {
	iNumPeli = iNumMov;
}

//Metodo que modifica la hora de la funcion
void Funcion::setHora(Hora hour) {
	hora = hour;
}

//Metodo que modifica la sala de la funcion
void Funcion::setSala(int iSalon) {
	iSala = iSalon;
}

//Metodo que muestra los resultados
void Funcion::Muestra() {
	//Desplegamos datos
	cout << "Clave: " << sCveFuncion << endl;
	cout << "Numero: " << iNumPeli << endl;
	cout << "Hora: "; hora.Muestra(); cout << endl;
	cout << "Sala: " << iSala << endl;
}
