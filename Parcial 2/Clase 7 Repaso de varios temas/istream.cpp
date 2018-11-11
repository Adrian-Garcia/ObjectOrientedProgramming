/*
|Ostream e istream|
	Perteneciente a sobrecarga de operadores, realiza metodos de entrada
	y de salida para los valores seleccionados del objeto
*/

#include <iostream>

using namespace std;

class Complejo {

	private:
		int iReal, iImaginario;

	public:
		
		//Constructores
		Complejo();
		Complejo(int iReal, int iImaginario);
		
		//Metodos Getters
		int getReal();
		int getImaginario();
		
		//Metodos Setters
		void setReal(int NuevoReal);
		void setImaginario(int NuevoImaginario);
		
		/*
		|Obtiene datos|
		Asi se pone en la applicacion
			cin >> Complejo;
		*/
		friend istream& operator >> (istream &is, Complejo &dato){
			is >> dato.iReal;
			is >> dato.iImaginario;

			return is;
		}

		/* 
		|Desplega datos|
		Asi se pone en la applicacion
			cout << Complejo;
		*/
		friend ostream& operator << (ostream &os, Complejo &dato) {
			os << "Real = " << dato.iReal << endl;
			os << "Imginario = " << dato.iImaginario;

			return os;
		}
};

//Constructor default
Complejo::Complejo() {
	iReal = 0;
	iImaginario = 0;
}

//Constructor especifico
Complejo::Complejo(int iR, int iI) {
	this->iReal = iReal;
	this->iImaginario = iImaginario;
}

//Obtenemos real
int Complejo::getReal() {
	return iReal;
}

//Obtenemos imaginario
int Complejo::getImaginario() {
	return iImaginario;
}

//Modificamos real
void Complejo::setReal(int iNuevoReal) {
	iReal = iNuevoReal;
}

//Modificamos Imaginario
void Complejo::setImaginario(int iNuevoImaginario) {
	iImaginario = iNuevoImaginario;
}

int main () {
	
	Complejo Numero;
	cin >> Complejo;
	cout << Complejo;
	
	return 0;
}
