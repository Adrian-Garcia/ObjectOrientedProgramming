/*

|Sobecarga de operadores|
	Es posible decirle a la clase que cuando se sumen 2 objetos haga algo
	Esto se logra sobrecargando un operador
	
	Ejemplos de operadores
		"<<, >>, ++, --" son operadores
	
	Caracteristicas
		Todos los operadores tienen un valor de retorno

*/

class Clase {
	public:
		
	
	private:
		
		
};

//Sintaxis de opeadores 
clase Clase::operator+(Clase c1, Clase c2) {
	Clase c3;
	c3.setX(c1.getX()+c2.getX());
	
	return c3;
}

#include <iostream>

using namespace std;

int main (){
	
	Clase cA, cB, cD;
	
	cB.setX(4);
	cD.setX(10);
	cA = cB + cD;
	
	
	return 0;
}
