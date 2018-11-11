//Clase Fraccion
//Suma, resta, multiplica y divide dos fracciones
class Fraccion {
	
	//Atributos
	private:
		int num1, den1, num2, den2;
		
	//Metodos
	public:
		Fraccion(); 
		Fraccion(int num1, int den1, int num2, int den2);
		
		double dSuma();			//Metodo de suma
		double dMult();			//Metodo de multiplicacion
		double dResta();		//Metodo de resta
		double dDiv();			//Metodo de division
		void setNum1(int n1);	//Dar numero a Num1
		void setDen1(int d1);	//Dar numero a Den1
		void setNum2(int n2);	//Dar numero a Num2
		void setDen2(int d2);	//Dar numero a Den2
		int getNum1();			//Tomar Num1
		int getDen1();			//Tomat Den1
		int getNum2();			//Tomar Num2
		int getDen2();			//Tomar Den2
			
};

//Fraccion sin parametros establecidos	
Fraccion::Fraccion () {
	num1 = 1;
	den1 = 2;
	num2 = 1;
	den2 = 2;
}

//Fraccion con parametros dados por el usuario
Fraccion::Fraccion (int num1, int den1, int num2, int den2) {
	
	/*
	Para no confundir al compilador usamos this-> para usar
	esta variable 
	*/
	
	this->num1 = num1;
	this->den1 = den1;
	this->num2 = num2;
	this->den2 = den2;
}

	
//Damos valor a Num1
void Fraccion::setNum1 (int n1) {
	num1 = n1;
}
	
//Damos valor a Den1
void Fraccion::setDen1 (int d1) {
	den1 = d1;
}
	
//Damos valor a Num2
void Fraccion::setNum2 (int n2) {
	num2 = n2;
}
	
//Damos valor a Den2
void Fraccion::setDen2 (int d2) {
	num1 = d2;
}

	
//Obtenemos Num1
int Fraccion::getNum1() {
	return num1;
}
	
//Obtenemos Den2
int Fraccion::getDen1() {
	return den1;
}
	
//Obtenemos Num2
int Fraccion::getNum2() {
	return num2;
}
	
//Obtenemos Den2
int Fraccion::getDen2() {
	return den2;
}

//Metodos de logica

//Suma de fracciones
double Fraccion::dSuma() {
	return (1.0 * num1 / den1) + (1.0 * num2 / den2 ) ;
}
	
//Resta de freacciones
double Fraccion::dResta () {
	return (1.0 * num1 / den1) - (1.0 * num2 / den2 ) ;
}
	
//Multiplicacion de fracciones
double Fraccion::dMult () {
    return (1.0 * num1 / den1) * (1.0 * num2 / den2 ) ;
}
	
//Division de fracciones
double Fraccion::dDiv () {
    return (1.0 * num1 / den1) / (1.0 * num2 / den2 ) ;
}

