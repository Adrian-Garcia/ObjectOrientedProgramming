class Empleados { 
	
	//Atributos
	private: 
		int iIdEmpleado;	//ID del empleado
		int iHoras;			//Horas trabajadas
		double dSueldoFi;	//Sueldo fijo
		double dSueldoHor;	//Sueldo por hora
	
	//Metodos	
	public:
		Empleado();	//Constructor empleado
		
		void setIdEmpleado(int ID);				//Id de empleado
		void setHoras(int Horas);				//Horas trabajadas
		void setSueldoFi(double SueldoFi);		//Sueldo fijo
		void setSueldoHor(double SueldoHor);	//Sueldo por hora
		
		int getIdEmpleado();	//Modificar Id
		int getHoras();			//Modificar Horas
		double getSueldoFi();	//Modificar Sueldo Fijo
		double getSueldoHor();	//Modificar Sueldo por horas
		
		double CalcPago();	//Metodo de calculo de pago
		
		void RegistroHoras(int MasHoras);	//Registro de horas trabajadas 
};

//Constructor default
Empleados::Empleado() {
	//Los valores definidos son iguales a 0
	iIdEmpleado = 0;
	iHoras = 0;
	dSueldoFi = 0;
	dSueldoHor = 0;
}

//Valor asignado al ID del Empleado
void Empleados::setIdEmpleado(int ID) {
	iIdEmpleado = ID;
}

//Valor asignado a las horas trabajadas
void Empleados::setHoras(int Horas) {
	iHoras = Horas;
}

//Valor asignado a sueldo fijo
void Empleados::setSueldoFi (double SueldoFi) {
	dSueldoFi = SueldoFi;
}

//Valor asignado al sueldo por hora
void Empleados::setSueldoHor(double SueldoHor) {
	dSueldoHor = SueldoHor;
}

//Metodo de modificacion del ID de empleado
int Empleados::getIdEmpleado() {
	return iIdEmpleado;
}

//Metodo de modificacion de las horas 
int Empleados::getHoras() {
	return iHoras;
}

//Metodo de modificacion del sueldo fijo
double Empleados::getSueldoFi() {
	return dSueldoFi;
}

//Metodo de modificacion del Sueldo por Hora
double Empleados::getSueldoHor() {
	return dSueldoHor;
}

//Metodo para calcular el ago final al empleado
double Empleados::CalcPago() {
	return dSueldoFi + iHoras*dSueldoHor;
}

void Empleados::RegistroHoras(int MasHoras) {
	iHoras = iHoras+MasHoras;
}
