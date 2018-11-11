//Esfera.h
#include <math.h>
class Esfera {
	
	public:
		Esfera();					//Esfera cuyo radio es 1
		Esfera(double dRadio);		//Esfera cuyo radio cambia
		
		double getRadio();				//Get de radio
		void setRadio(double dRadio);	//Set de radio
		
		double calcArea();	//Metodo que calcula el area
		double calcVolum();	//Metodo que calcula el volumen
		
		Esfera menor(Esfera esfera);
	
	private:
		double dRadio;	

};

//Esfera cuyo radio es igual a 1
Esfera::Esfera() {
	dRadio = 1;
}

//Esfera cuyo radio cambia dependiendo del usuario 
Esfera::Esfera(double dRadio) {
	this->dRadio = dRadio;
} 

//Metodo que calcula el area de la esfera
double Esfera::calcArea() {
	return 4*(3.1416)*(pow(dRadio,2));
}

//Metodo que calcula el volumen de la esfera
double Esfera::calcVolum() {
	return (4*(3.1416)*(pow(dRadio, 3)))/3;
}

//Esfera Esfera::menor(Esfera esfera)

double Esfera:: getRadio() {
	return dRadio;
}

void Esfera:: setRadio(double dRadio) {
	this->dRadio = dRadio;
}


Esfera Esfera::menor(Esfera esfera) {
	
	//Variable para el radio mas chico
	double dRadioMenor;
	
	//Si el radio es menor que el radio de la esfera 1
	if (dRadio < esfera.getRadio()) {
		
		//Definir dRadio menor como el menor radio
		dRadioMenor = dRadio; 
	}
	
	//Si no...,
	else{
		
		//Definir como radio menor el radio de 1
		dRadioMenor = esfera.getRadio();
	}
	
	//Asignamos una nueva instancia con el radio menor
	Esfera esfera3(dRadioMenor);
	
	//Regresamos el valor de esfera3
	return esfera3;
}

