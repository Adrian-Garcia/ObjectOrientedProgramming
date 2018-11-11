#include <iostream>
#include <string>

using namespace std;

class Cena {
	private:
		string sComida, sBebida;
		int iHora;
	
	public:
		
		Platillo();
		
		string getComida();
		string getBebida();
		int getHora();
		
		void setComida(string sFood);
		void setBebida(string sDrink);
		void setHora(int sHour);
};

Cena::Platillo() {
	sComida = "Cereal";
	sBebida = "Leche";
	iHora = 8;
}
	
string Cena::getComida() {
	return sComida;
}

string Cena::getBebida() {
	return sBebida;
}

int Cena::getHora() {
	return iHora;
}

void Cena::setComida(string sFood) {
	sComida = sFood;
}

void Cena::setBebida(string sDrink) {
	sBebida = sDrink;
}

void Cena::setHora(int iHour) {
	iHora = iHour;
}
