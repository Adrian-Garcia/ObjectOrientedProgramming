//Applicacion Evento.cpp
#include "Evento.h"

int main () {
	
	//Nombre del evento
	string sEvento;
	
	//Variables para hora, minutos y segundos
	int iH, iM, iS, iD;
	
	//Pedimos hora
	cout << "Inserta la hora: ";
	cin >> iH;
	
	//Pedimos minutos
	cout << "Inserta los minutos: ";
	cin >> iM;
	
	//Pedimos segundos
	cout << "Inserta los segundos: ";
	cin >> iS;
	
	//Definimos  un reloj con las variables de hora, minuto y segundo
	Reloj reloj(iH, iM, iS);
	
	cout << "Inserta el nombre del evento: ";
	cin.ignore();	//Para ignorar los cin
	getline(cin, sEvento);
	
	//Pide duracion del evento
	cout << "Inserta la duracion del evento: ";
	cin >> iD;
	
	//Objeto tipo evento con las variables 
	Evento evento(reloj, iD, sEvento);
	
	cout << "El evento " << evento.getNombre();
	cout << " Comienza a las "; evento.getHoraInicio();
	cout << " Y dura " << evento.getDuracionEvento() << " Horas";
	
	
	return 0;
}
