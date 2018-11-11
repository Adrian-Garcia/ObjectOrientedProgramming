/*
Crear una cuenta en la que el usuario 
proporciona sus datos 

	-Hacer un deposito
	-Mostrar la cantidad nueva
	-Hacer unr etiro
	-Mostrar la cantidad nueva
	-Incentivo bancario
	-Mostrar saldo final

*/

#include <iostream>
#include <string>
#include "Cuenta.h"


using namespace std;

int main () {
	
	int iNumCuenta;
	double dSaldo, dDeposito, dRetiro, dIncentivo;
	string sNombre, sMsg;
	
	cout << "Ingresa numero Cuenta: "; 
	cin >> iNumCuenta;
	
	cout << "Ingresa tu saldo: ";
	cin >> dSaldo;
	
	cout << "Ingresa tu nombre: ";
	cin.ignore();
	getline (cin, sNombre);
	
	Cuenta cuenta1(iNumCuenta, dSaldo, sNombre);
	
	cout << "Ingresa cuanto quieres depositcar";
	cin >> dDeposito;
	cuenta.deposito(dDeposito);
	
	cout << "Tu saldo actual es: " << cuenta1.getSaldo() << "/n";
	
	cout << "Ingresa cuanto quieres retirar: "
	cin >> dRetiro;
	
	msg = cuenta1.Retiro(dRetiro);
	cout << msg;
	
	cout << "Tu saldo actual es: " << cuenta1.getSaldo() << "/n";
	
	dIncentico = cuenta1.IncentivoBancario();
	
	cout << "Tu saldo actual + Incentivo Bancari: " << cuenta1.getSaldo() << "/n"
	
	return 0;	
}
