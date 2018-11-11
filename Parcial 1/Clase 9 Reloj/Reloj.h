/* 
|Composicion|
Enviar datos a un constructor
*/

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

//Clase reloj
class Reloj {
	
	//Atriburos
	private:
		int iHoras, iMinutos, iSegundos;
	
	public:
		
		//Objetos
		Reloj();	//Default en 0
		Reloj(int iH, int iM, int iS);
		
		//Metodos de obtencion de datos
		int getHoras();
		int getMinutos();
		int getSegundos();
		
		//Metodos de modificacion
		void setHoras(int iH);
		void setMinutos(int iM);
		void setSegundos(int iS);
		
		//Regresa la hora en estado correcto
		string obtenHoraCompleta();	//HH:MM:SS
		
};

//Reloj con atributos en 0 por default
Reloj::Reloj() {
	iHoras = 0;		//0 Horas
	iMinutos = 0;	//0 Minutos
	iSegundos = 0;	//0 Segundos
}

//Objeto con atributos especificos 
Reloj::Reloj(int iHoras, int iMinutos, int iSegundos) {
	
	//Obtenemos valores
	this->iHoras = iHoras;		
	this->iMinutos = iMinutos;
	this->iSegundos = iSegundos;
}

//Metodo que obtiene las horas
int Reloj::getHoras() {
	return iHoras;
}

//Metodo que obtiene los minutos
int Reloj::getMinutos() {
	return iMinutos;
}

//Metodo que obtiene los segundos
int Reloj::getSegundos() {
	return iSegundos;
}

//Metodo de modificacion de las horas
void Reloj::setHoras(int iH) {
	iHoras = iH;
}

//Metodode modificacion de los minutos
void Reloj::setMinutos(int iM) {
	iMinutos = iM;
} 

//Metodo de modificacion de los segundos
void Reloj::setSegundos(int iS) {
	iSegundos = iS;
}  

//Regresa el resultado de la hora completa
string Reloj::obtenHoraCompleta() {
	ostringstream str1, str2, str3;
	
	str1 << iHoras;
	str2 << iMinutos;
	str3 << iSegundos;
	
	return str1.str() + ":" + str2.str() + ":" + str3.str();
}
