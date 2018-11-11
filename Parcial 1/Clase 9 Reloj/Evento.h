//A esta clase le incluimos la clase reloj
#include "Reloj.h"

//Clase evento
class Evento {
	//Atributos 
	private: 
		Reloj horaInicio;	//Hora de inicio
		int duracionEvento;	//Duracion del evento
		string nombre;		//Nombre del evento
	
	//Metodos	
	public:
		
		//Objetos de evento
		Evento();
		Evento(Reloj reloj, int iDuracion, string sN);
		
		//Getters
		Reloj getHoraInicio();
		int getDuracionEvento();
		string getNombre();
		
		//Setters
		void setHoraInicio(Reloj r);
		void setDuracionEvento (int iD);
		void setNombre(string sN);
};

//Evento con atributos predefinidos
Evento::Evento() {
	horaInicio = Reloj();
	duracionEvento = 60;
	nombre = "Evento general0";
}

//Evento con atributos especificos
Evento::Evento(Reloj reloj, int iDuracion, string sN) {
	horaInicio = reloj;
	duracionEvento = iDuracion;
	nombre = sN;
}

//Metodo de obtencion de ora de inicio
Reloj Evento:: getHoraInicio () {
	return horaInicio;
}

//Metodo de obtencion de la duracion del evento
int Evento::getDuracionEvento() {
	return duracionEvento;
}

//Metodo de obtencion del nombre del evento
string Evento::getNombre() {
	return nombre;
}

void Evento::setHoraInicio(Reloj r) {
	horaInicio = r;
}

void Evento::setDuracionEvento (int iD) {
	duracionEvento = iD;
}

void Evento::setNombre (string sN) {
	nombre = sN;
} 
