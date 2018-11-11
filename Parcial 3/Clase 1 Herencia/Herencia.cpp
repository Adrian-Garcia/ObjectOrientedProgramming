/* Herencia  ___________
			|Persona	|
			|___________|
			|//Atributos|
			|___________|
			|//Metodos  |
			|___________|
				  ^		<----- Se heredan los atributos a 2 subclases
				 /_\	<----- Herencia se representa con un triangulo
		__________|__________
	   |			     	 |
    ___|__                ___|___
   |Alumno|			     |Maestro|	
   |______|				 |_______|
*/

#include "Alumno.h"

int main () {
	
	Alumno aJuan("Juan", 19, "ITC");
	Alumno aLaura;

	Persona pSofia("Sofia", 21);

	aJuan.Muestra();
	cout << endl;
	
	aLaura.Muestra();
	cout << endl;
	
	pSofia.mostrarPersona();

	return 0;
}
