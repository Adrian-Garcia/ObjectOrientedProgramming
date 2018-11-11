//SuperHeroes.h

#include <iostream>
#include <string>

using namespace std;

class SuperHeroes {
	
	//Atributos
	private: 
		
		//Nombre del heroe
		string sNombre;	
		
		//Salud y Mana
		int iHealth, iMana;
		
		//Defensa y Ataque
		int iDefensa, iAtaque; 
		
	public:
		
		Heroes();
		
		//Metodods de obtencion de datos
		string getNombre();	
		int getHealth();
		int getMana();
		int getDefensa();
		int getAtaque();
		
		//Metodos de modificacion de datos
		void setNombre(string Nombre);
		void setHealth(int Health);
		void setMana(int Mana);
		void setDefensa(int Defensa);
		void setAtaque(int Ataque);
};

//Heroes con datos definidos por default
SuperHeroes :: Heroes () {
	sNombre = "Nombre del Heroe";
	iHealth = 0;
	iMana = 0;
	iDefensa = 0;
	iAtaque = 0;	
}

//Obtenemos Nombre del Heroe
string SuperHeroes::getNombre () {
	return sNombre;
}

//Obtenemos Vida del Heroe
int SuperHeroes::getHealth() {
	return iHealth;
}
 
//Obtenemos Mana del Heroe
int SuperHeroes::getMana() {
	return iMana;
}

//Obtenemos Defensa del Heroe
int SuperHeroes::getDefensa () {
	return iDefensa;
}

//Obtenemos Ataque del Heroe
int SuperHeroes::getAtaque () {
	return iAtaque;
}


//Modificamos Nombre del Heroe
void SuperHeroes::setNombre(string Nombre) {
	sNombre = Nombre;
}

//Modificamos Vida del Heroe
void SuperHeroes::setHealth (int Health) {
	iHealth = Health;
}

//Modificamos Mana del Heroe
void SuperHeroes::setMana(int Mana) {
	iMana = Mana;
}

//Modificamos Defensa del Heroe
void SuperHeroes::setDefensa (int Defensa) {
	iDefensa = Defensa;
}

//Modificamos Ataque del Heroe
void SuperHeroes::setAtaque (int Ataque) {
	iAtaque = Ataque;
}
