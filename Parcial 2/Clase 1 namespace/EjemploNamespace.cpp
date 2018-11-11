/*
|Namespace|
Es para hacer referencia una variable de una libreria
	namespace "Nombre del namespace" {
		int 	iVariable = 10; (Se pueden asignar valores)
		double 	dVariable;
	}
*/
#include <iostream>

//Otro namespace que siempre usamos
using namespace std;

//Variable global en el main
int iX = 20;

//Namespace de ejemplo
namespace Ejemplo {
	
	int iX = 10;
	double dY;
	
	//Definimos metodo
	void muestraIX();
}

//Metodo de namespace
void Ejemplo::muestraIX() {
	cout << "ix = " << iX << endl;
}

int main () {
	
	//Desplegamos valor en main
	cout << "Valor de iX en main = " << iX << endl;
	
	//Desplegamos valor en namespace 
	cout << "Valor de iX en namespace = " << Ejemplo::iX << endl;
	
	// Tambien se puede hacer asi  
	cout << "Valor de iX en namespace con funcion "; 
	Ejemplo::muestraIX(); //Llamamos funcion void
	
	//Terminamos programa
	return 0;

}
