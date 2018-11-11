#include <iostream>

//Se puede incluir como libreria, mas no es libreria
#include "Rectangulo.h" //Clase creada

using namespace std;

/*

|Objetos|
Todo objeto que comparta caracteristicas con otros objetos 
sera considerado como clase


|Clases|
Terminacion clase.h
Representa un conjunto de caracteristicas
Palabra reservada "class" 
 

|Metodos| 
"." Es un metodo
Ejemplo string.lenght();
Todo lo que se calcula


|Private|
Caracteristica de un atributo que solo se utiliza en una
clase 


|Public|
Caracteristica de un atributo que se puede usar fuera de la 
clase


|Instancia|
Tiene propiedades de una clase
Dos objetos diferentes


|Constructor|
Objeto con paramtetros
Inicializar los atributos
Debe llamarse igual que la clase 
La diferencia es que se ponen parametros entre parentesis

*/

int main () {
	
	//Area del rectangulo
	double dResultado;
	
	//Instancias
	//Rectangulo Rectangulo (10,20);	//Rectangulo constructor
	Rectangulo rectangulo;				//Primer rectangulo
	Rectangulo rectangulo2;				//Segundo rectangulo
	
	rectangulo.setLargo(20);	//Le damos valores al largo
	rectangulo.setAncho(40);	//Le damos valores al ancho
	
	//Le damos el valor del resultado al rectangulo
	dResultado = rectangulo.dCalculaArea();
	
	//Desplegamos el resutlado
	cout << "El resultado es: " << dResultado;
	
	//dResultado = CstrRectangulo.dCalcularArea();
	
	//cout << "El resultado es: " << dResultado;  
	
	//Terminar programa
	return 0;
}
