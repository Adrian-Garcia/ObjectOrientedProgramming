/*
|Metodos en linea|
Ayuda al compilador con menos trabajo  haciendo los programas 
mas rapidos

*/


class Coordenada {
	
	public:
		//Declaramos el metodo y sus funciones
		static int getCoordX() {
			//Aqui se realiza el metodo
			return coordX;
		}
		
		//Metodo de modificacion
		void setCoordX(int iX) {
			coordX = iX;
		}
		
		//Aqui no se necesita constructor por que es static
		static int coordX = 1;
	
		
	private: 
		int coordX;	//Variable de cordenada
};

/* Esta es la manera standar de declarar el metodo
int Coordenada::getCoordX() {
	return coordX;
} */


#include <iostream>

using namespace std;

int main () {
	
	//Variable para cordenada
	int iCord;
	
	//Desplegamos cordX 
	cout << Coordenada::coordX;
	
	//Desplegamos el metodo getCordX
	cout << Coordenada::getCoordX();
	
	return 0;
}
