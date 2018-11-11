// Examen Parcial 2
// -----------------------Problema 1----------------------- 
#include <string>

class Empleado {
	private:
		string sNombre;
		double dSalario;
		int iNomina;

	public:
		inline Empleado (string sN, int iN, double dS) {
			sNombre = sN;
			dSalario = dS;
			iNomina = iN;
		}

		inline int getiNomina() {
			return iNomina;
		}

		inline double getdSalario() {
			return dSalario;
		}

		inline string getsNombre() {
			return sNombre;
		}

		void setiNomina(int iN) {
			iNomina = iN;
		}

		void setdSalario(double dS) {
			dSalario = dS;
		}

		void setsNombre(string sN) {
			sNombre = sN;
		}
}

class Departamento {	
	private:
		string sClave, sNombre;
		int iCantidadEmpleados;
		Empleado listaEmpleados[50];

	public:
		inline Departamento (string sC, string sN) {
			iCantidadEmpleados = 0;
			sClave = sC;
			sNombre = sN;
		}

		inline Empleado* getLista() {
			return listaEmpleados;
		}

		inline bool agregaEmpleado(Empleado e) {
			
			bool dResp = true;

			for (int i=0; i<50; i++) {
				if (e.getiNomina() == listaEmpleados[i]) {
					return false;	//dResp = false;
				}
			}
			
			if (dResp == true) {
				iCantidadEmpleados++;
				return true;
			}
		}
}


// -----------------------Problema 2-----------------------

friend bool operator && (Triangulo t1, Triangulo t2) {
	if (t1.getArea() == t2.getArea()) {
		return true;
	}

	else {
		return false;
	}
}


// -----------------------Problema 3-----------------------

#include "Hello.h"

int main () {
	Hello::hello();
	Hello::goodbye();

	return 0;
}

/*Consola
Hello World!
Goodbye World!
*/

class Hello {
	public:
		//OJO al static
		inline static void hello () {
			cout << "Hello Wordl!";
		}

		inline static void goodbye () {
			cout << "Goodbye World";
		}
}

// -----------------------Problema 4-----------------------
/* Consola
12 23 
23 23
NULL	j1h23
23 23
*/