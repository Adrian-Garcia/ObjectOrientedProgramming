#include "Persona.h"
class Alumno : public Persona {
	private:
		string sCarrera;

	public:	
		Alumno():Persona() {
			sCarrera = "NA";
		}

		// Esto se hace si no se ponen los parametros en el constructor
		Alumno(string sNombre, int iEdad, string sCarrera):Persona(sNombre,iEdad) {
		 	this->sCarrera = sCarrera;
		}  

		string getCarrera() {
			return sCarrera;
		}

		void setCarrera(string sCareer) {
			sCarrera = sCareer;
		}

		void Muestra () {
			cout << "Nombre: " << getNombre() << endl;
			cout << "Edad: " << getEdad() << endl;

			/* O tambien
			Muestra();
			*/

			cout << "Carrera: " << sCarrera << endl;
		}
};

class Maestro : public Persona {
	private:
		string sDepartamento;

	public:	
		Maestro():Persona(){
			sDepartamento = "NA";
		}

		Maestro(string sNombre, int iEdad, string sDepartamento):Persona(sNombre,iEdad) {
			this->sDepartamento = sDepartamento;
		}

		string getDepartamento() {
			return sDepartamento;
		}

		void setDepartamento(string sDepartament) {
			sDepartamento = sDepartament;
		}

		void Muestra () {
			cout << "Nombre: " << getNombre() << endl;
			cout << "Edad: " << getEdad() << endl;
			cout << "Departametno: " << sDepartamento << endl;
		}
};

