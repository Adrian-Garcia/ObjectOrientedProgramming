#include <iostream>

using namespace std;

//Clase Hora
class Hora {
	//Atributos
	private:
		int iHH, iMM;

	//Metodos
	public:
		Hora();
		Hora(int iHH, int iMM);

		int getHH();
		int getMM();

		void setHH(int iHour);
		void setMM(int iMinute);

		void Muestra();
};

//Constructor default con valores = 0
Hora::Hora() {
	iHH = 0;
	iMM = 0;
}

//Constructor con parametros 
Hora::Hora(int iMM, int iHH) {
	this->iHH = iHH;
	this->iMM = iMM;
}

//Metodo de obtencion de la hora de la hora
int Hora::getHH() {
	return iHH;
}

//Metodo de obtencion de los minutos de la hora
int Hora::getMM() {
	return iMM;
}

//Metodo de modificacion de la hora de la hora
void Hora::setHH(int iHour) {
	iHH = iHour;
}

//Metodo de modificacion de los minutos de la hora
void Hora::setMM(int iMinute) {
	iMM = iMinute;
}

//Metodo de muestra de la hora
void Hora::Muestra() {
	cout << iHH << ":" << iMM;
}
