//Clase complejo que puede sumar y restar entre numero complejos
class Complejo {
	
	private:
		//Real e imaginario
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
		
		/*  Antes se usaba la palabra friend para usar 2 objetos
		friend Complejo operator+(Complejo C1, Complejo C2);
		
		Para escribir en un metodo en linea se necesira poner
		inline "Metodo" */
		
		//Suma 2 numeros complejos
		friend Complejo operator+(Complejo C1, Complejo C2) {
			
			//Declaramos un nuevo objeto
			Complejo c3;
			
			//Sumamos reales e imaginarios
			c3.setReal(C1.getReal()+C2.getReal());
			c3.setImaginario(C1.getImaginario()+C2.getImaginario());
			
			//Regresamos el objeto nuevo
			return c3;
		}
		
		//Resta 2 numeros complejos
		friend Complejo operator-(Complejo C1, Complejo C2) {
			
			//Declaramos un nuevo objeto
			Complejo c3;
			
			//Restamos reales e imaginarios
			c3.setReal(C1.getReal()-C2.getReal());
			c3.setImaginario(C1.getImaginario()-C2.getImaginario());
			
			//Regresamos el objeto nuevo
			return c3;			
		}
		
		//Suma y resta a atributos iReal e iImaginrio
		void operator++();
		void operator--();
		
		//Ver si ambos numeros complejos son iguales
		friend bool operator==(Complejo C1, Complejo C2) {
			
			//Regresamos verdadero si los numeros complejos son iguales
			if (C1.getReal() == C2.getReal() && C1.getImaginario() == C2.getImaginario()) {
				return true;
			} 	
			
			//Regresamos falso si no
			else {
				return false;
			}
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

//Operador que suma 1 a real e imaginario
void Complejo::operator++ (){
	iReal++;
	iImaginario++;
}

/*Otra forma de sumar 1 a real e imaginario
friend void operator++ (Complejo &dato, int) {
	dato.iReal++;
	dato.iImaginario++;
}*/

//Operador que resta 1 a real e imaginario
void Complejo::operator-- () {
	iReal--;
	iImaginario--;
}

#include <iostream>

using namespace std;

int main () {
	
	cout << "Numeros Complejos" << endl;
	
	Complejo Numero1;
	Complejo Numero2;
	
	
	Numero1.setReal(1);
	Numero1.setImaginario(2);

	Numero2.setReal(3);
	Numero2.setImaginario(2);
	
	cout << Numero1.getReal();
	return 0;
}

