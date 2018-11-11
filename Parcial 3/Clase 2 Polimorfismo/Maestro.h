#include "Persona.h"
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
