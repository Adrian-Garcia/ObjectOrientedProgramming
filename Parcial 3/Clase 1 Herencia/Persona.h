#include <iostream>
#include <string>

#ifndef Persona_h
#define Persona_h

using namespace std;

class Persona {
	private:
		string sNombre;
		int iEdad;

	public:
		Persona() {
			sNombre = "NA";
			iEdad = 0;
		}

		Persona(string sNombre, int iEdad) {
			this->sNombre = sNombre;
			this->iEdad = iEdad;
		}
		
		int getEdad() {
			return iEdad;
		}

		string getNombre() {
			return sNombre;
		}

		void setEdad(int iAge) {
			iEdad = iAge;
		}

		void setNombre(string sName) {
			sNombre = sName;
		}

		void mostrarPersona() {
			cout << "Nombre: " << sNombre << endl;
			cout << "Edad: " << iEdad << endl;
		}
};

#endif