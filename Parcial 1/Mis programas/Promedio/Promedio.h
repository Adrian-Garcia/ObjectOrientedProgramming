#include <iostream>
#include <string>

using namespace std;

class Promedio {
	
	//Atributos
	private:
		//Nombre
		string sNombre;
		
		//Porcentajes de la nota
		int	iPorcentajeTareas;
		int iPorcentajeQuizes;
		int	iPorcentajeExamen;
		
		//Calificaciones finales	
		int	iTareas;
		int	iQuizes;
		int	iExamen;
		
	//Metodos y objetos	
	public:
		
		//Objeto alumno
		Alumno();
		
		//Getters
		string getNombre();
		int getPorcentajeTareas();
		int getPorcentajeQuizes();
		int getPorcentajeExamen();
		int getTareas();
		int getQuizes();
		int getExamen();
		
		//Setters
		void setNombre(string Nombre);
		void setPorcentajeTareas(int PorcentajeTareas);
		void setPorcentajeQuizes(int PorcentajeQuizes);
		void setPorcentajeExamen(int PorcentajeExamen);
		void setTareas(int Tareas);
		void setQuizes(int Quizes);
		void setExamen(int Examen);	
		
		//Calcula el promedio general
		double PromedioGeneral();
};

//Constructor de alumnos con datos en valor 0 por default
Promedio::Alumno () {
	sNombre = "Adrian";
	iPorcentajeTareas = 0;
	iPorcentajeQuizes = 0;
	iPorcentajeExamen = 0;
	iTareas = 0;
	iQuizes = 0;
	iExamen = 0;
}

/*Objeto Alumno
Promedio::Alumno(string sNombre, int iPorcentajeTareas, int iPorcenjareQuizes,
				 int iPorcentajeExamen, int iTareas, int iQuizes, int iExamen) {
	this->iPorcentajeTareas = iPorcentajeTareas;
	this->iPorcentajeQuizes = iPorcentajeQuizes;
	this->iPorcentajeExamen - iPorcentajeExamen;
	
	this->iTareas = iTareas;
	this->iQuizes = iQuizes;
	this->iExamen = iExamen;
}*/

//Obtener nombre
string Promedio::getNombre() {
	return sNombre;
}

//Obtener Promedio de Tareas
int Promedio::getPorcentajeTareas() {
	return iPorcentajeTareas;
}

//Obtener Promedio de  Quizes
int Promedio::getPorcentajeQuizes() {
	return iPorcentajeQuizes;
}

//Obtener Promedio de Examen
int Promedio::getPorcentajeExamen() {
	return iPorcentajeExamen;
}

//Obtener Tareas
int Promedio::getTareas() {
	return iTareas;
}

//Obtener Quizes
int Promedio::getQuizes() {
	return iQuizes;
}

//Obtener Examen
int Promedio::getExamen() {
	return iExamen;
}

//Modificar Nombre
void Promedio::setNombre(string Nombre) {
	sNombre = Nombre;
}

//Modificar Porcentaje de Tareas
void Promedio::setPorcentajeTareas(int PorcentajeTareas) {
	iPorcentajeTareas = PorcentajeTareas;
}

//Modificar Porcentaje de Quizes
void Promedio::setPorcentajeQuizes(int PorcentajeQuizes) {
	iPorcentajeQuizes = PorcentajeQuizes;
}

//Modificar Porcentaje de Examen
void Promedio::setPorcentajeExamen(int PorcentajeExamen) {
	iPorcentajeExamen = PorcentajeExamen;
}

//Modificar la nota de Tareas
void Promedio::setTareas(int Tareas) {
	iTareas = Tareas;
}

//Modificar la nota de Quizes 
void Promedio::setQuizes(int Quizes) {
	iQuizes = Quizes;
}

//Modificar la nota de Examen
void Promedio::setExamen(int Examen) {
	iExamen = Examen;
}

//Calcula el promedio general del alumno
double Promedio::PromedioGeneral(){
	double dResultado;	
	dResultado += (1.0)*iTareas*iPorcentajeTareas/100;
	dResultado += (1.0)*iQuizes*iPorcentajeQuizes/100;
	dResultado += (1.0)*iExamen*iPorcentajeExamen/100;
	
	return dResultado;
}

