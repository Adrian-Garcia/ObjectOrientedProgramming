//Heroes Appicacion

#include <iostream>
#include <string>
//#include "HeroesStats.h"

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

int main () {
	
	Heroes Jugador1;
	Heroes Jugador2;
	
	string sNombre1, sNombre2;
	int iHealth1, iHealth2;
	int iMana1, iMana2;
	int iDefensa1, iDefensa2;
	int iAtaque1, iAtaque2;
	
	//Header chido
	cout << "------------SUPER HEROES------------ \n \n";
	cout << "--------------Jugador 1------------- \n \n";
	
	//Nombre del heroe del primer jugador
	cout << "Inserta el Nombre de tu heroe: ";
	cin >> sNombre1;
	
	//Instrucciones
	cout << "Ahora vas a insertar las stats de tu  \n";
	cout << "heroe. Tienes que repartir 100 puntos \n"; 
	cout << "de stats en Salud, Mana, Defensa y \n";
	cout << "Ataque. Elige sabiamente. \n \n";
	
	//Puntos de mana+
	int iPuntos = 100;
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta la Salud de tu heroe: ";
	cin >> iHealth1;
	iPuntos -= iHealth1;
	Jugador1.setHealth(iHealth1);
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta el mana de tu heroe: ";
	cin >> iMana1;
	iPuntos -= iMana1;
	Jugador1.setMana(iMana1);
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta la Defensa de tu heroe: ";
	cin >> iDefensa1;
	iPuntos -= iDefensa1;
	Jugador1.setDefensa(iDefensa1);
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta el Ataque de tu heroe: ";
	cin >> iAtaque1;
	iPuntos -= iAtaque1;
	Jugador1.setAtaque(iAtaque1);
	
	//HEader chido
	cout << endl << endl;
	cout << "--------------Jugador 2------------- \n \n";
	
	//Nombre del heroe del primer jugador
	cout << "Inserta el Nombre de tu heroe: ";
	cin >> sNombre2;
	
	//Puntos de mana
	iPuntos = 100;
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta la Salud de tu heroe: ";
	cin >> iHealth2;
	iPuntos -= iHealth2;
	Jugador2.setHealth(iHealth2);
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta el mana de tu heroe: ";
	cin >> iMana2;
	iPuntos -= iMana2;
	Jugador2.setMana(iMana2);
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta la Defensa de tu heroe: ";
	cin >> iDefensa2;
	iPuntos -= iDefensa2;
	Jugador2.setDefensa(iDefensa2);
	
	cout << "Puntos disponibles: " << iPuntos;
	cout << "Inserta el Ataque de tu heroe: ";
	cin >> iAtaque2;
	iPuntos -= iAtaque2;
	Jugador2.setAtaque(iAtaque2);
	
	
	do {
		char cMovimiento1, cMovimiento2;
		cout << "1 Atacar \n 2 Defender(Recupera mana) \n \n";
		cout << "Movimiento de Jugador 1: ";
		cin >> cMovimiento1; 
		
		
		cout << "Movimiento de Jugador 2: ";
		cin >> cMovimiento2; 
		
		switch (cMovimiento1) {
			case '1' {
				
				break;
			}
			
			case '2' {
				int NuevoMana = Jugador1.getMana() + 
				break;
			}
		}
		
		switch (cMovimiento2) {
			case '1' {
				
				break;
			}
			
			case '2' {
				
				break;
			}
		}
		
	} while (Jugador1.getHealth >= 0 && Jugador2.getHealth >= 0);
	
	
	return 0;
}
