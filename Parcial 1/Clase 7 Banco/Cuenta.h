/*
clase Cuenta

Attributos 					
	-Numero de cuenta		
	-Saldo					
	-Nombre 

Constructor 
	-Numero de cuenta 
	-SaldoInicial
	-Nombre
	
Metodos 
	-Acceso (Getters)
	-Modificacion (Setters)
	-Deposito (cantidad numerica):void
	-Retiro (Cantidad numerica):string
		-Validar Cantidad a retirar
	-IncentivoBancario():double
		-Taza 0.05 

*/
#include <iostream>
#include <string>

class Cuenta {
	public:
		
		//Constructor													
		Cuenta(int iNumCuenta, double dSaldo, string sNombre);	
		
		//Metodos
		void Deposito (double dSaldo); 	//Deposita a la cuenta
		string Retiro (double dSaldo);	//Retira de la cuenta
		double IncentivoBancario(); 	//Incentivo Bancario		
		
		//Metodos Getters
		int getNumCuenta();			
		double getSaldo();
		string getNombre();
		
		//Metodos Setters
		void setNumCuenta(int iNumCuenta);
		void setSaldo(double dSaldo);
		void setNombre(string sNombre);
	
	private: 
		int iNumCuenta;
		double dSaldo;
		string sNombre;	
};	

//Constructor
Cuenta::Cuenta(int iNumCuenta, double dSaldo, string sNombre) {
	this->iNumCuenta = iNumCuenta;
	this->dSaldo = dSaldo;
	this->sNombre = sNombre;
} 

//Metodo de deposito
void Cuenta::Deposito(double dSaldo) {
	this->dSaldo += dSaldo; //El this-> No es necesario
}

//Metodo de retiro
string Cuenta::retiro (double dSaldo) {
	
	//Validamos que el dinero en la cuenta exista
	
	//Si existe
	if (this->dSaldo > dSaldo) {
		
		//Retiramos el saldo
		this->dSaldo -= dSaldo;
		return "Retiro exitoso"; 
	}
	
	//Si no existe
	else {
		//No retirar el saldo
		return "Saldo insuficiente";
	}
}

//Metodo de incentivo bancario
double Cuenta::incentivoBancario() {
	dSaldo *= 1.05;
	return dSaldo;
}

//Getters
int Cuenta::getNumCuenta() { 
	return iNumCuenta;
}

double Cuenta::getSaldo() {
	return dSaldo;
}

string Cuenta::getNombre() {
	return sNombre;
}

//Setters
void Cuenta::setNumCuenta(int iNumCuenta) {
	this->iNumCuenta = iNumCuenta; 
}

void Cuenta::setSaldo(double dSaldo) {
	this->dSaldo = dSaldo; 
}

void Cuenta::setNombre(string sNombre) {
	this->dNombre = sNombre; 
}
