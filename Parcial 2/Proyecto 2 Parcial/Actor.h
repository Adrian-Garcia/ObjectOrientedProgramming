#include <string>
#include <iostream>

using namespace std;

//Clase Actor
class Actor {
	
	//Atributos
	private:
		int iID;
		string sNombre;

	//Metodos	
	public:
		//Constrocutor Actor
		Actor();
		Actor(int iID, string sNombre);

		//Metodos de obtencion
		int getID();
		string getNombre();

		//Metodos de modificacion
		void setID(int iIdentification);
		void setNombre(string sName);

		//Metodo muestra
		void Muestra();
};

//Constrctor default
Actor::Actor() {
	iID = 0;
	sNombre = "Nombre";
}

//Constructor con parametros
Actor::Actor(int iID, string sNombre) {
	this->iID = iID;
	this->sNombre = sNombre;
}

//Metodo que obtiene el ID del Actor
int Actor::getID() {
	return iID;
}

//Metodo que obtiene el Nombre del Actor
string Actor::getNombre() {
	return sNombre;
}

//Metodo que modifica el ID del Actor
void Actor::setID(int iIdentification) {
	iID = iIdentification;
}

//Metodo que modifica el Nombre del Actor
void Actor::setNombre(string sName) {
	sNombre = sName;
}

//Metodo que muestra los datos
void Actor::Muestra() {
	cout << iID << " ";
	cout << sNombre << endl;
}
