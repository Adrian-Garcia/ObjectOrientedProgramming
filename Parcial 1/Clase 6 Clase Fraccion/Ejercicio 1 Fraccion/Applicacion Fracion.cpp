#include <iostream>
#include "Fraccion.h"

using namespace std;

int main () {
	
	int num1, num2, den1, den2;
	
	cout << "Dame dos numeros para la Fraccion 2: " << endl;
	cin >> num1 >> den1 >> num2 >> den2;
	
	Fraccion Fraccion1;
	Fraccion Fraccion2(num1, den1, num2, den2); 
	
	cout <<"Operaciones Fraccionales 1" << endl;
	
	cout << "Suma Fraccional 1: " << Fraccion1.dSuma() << endl;
	cout << "Resta Fracciona1 l: " << Fraccion1.dResta() << endl;
	cout << "Multiplicacion Fraccional 1: " << Fraccion1.dMult() << endl;
	cout << "Division Fraccional 1: " << Fraccion1.dDiv() << endl;
	
	cout << endl << "Operaciones Fraccionales 2" << endl;
	
	cout << "Suma Fraccional 2: " << Fraccion1.dSuma() << endl;
	cout << "Resta Fraccional 2: " << Fraccion2.dResta() << endl;
	cout << "Multiplicacion Fraccional 2: " << Fraccion2.dMult() << endl;
	cout << "Division Fraccional 2: " << Fraccion2.dDiv() << endl;
	
	cout << "Vuelve a introducir los datos de la fraccion 1: ";
	cin >> num1 >> den1 >> num2 >> den2;
	
	Fraccion1.setNum1(num1);
	Fraccion1.setDen1(den1);
	Fraccion1.setNum2(num2);
	Fraccion1.setDen2(den2);
	
	cout << "Suma Fraccional 1: " << Fraccion1.dSuma() << endl;
	cout << "Resta Fracciona1 l: " << Fraccion1.dResta() << endl;
	cout << "Multiplicacion Fraccional 1: " << Fraccion1.dMult() << endl;
	cout << "Division Fraccional 1: " << Fraccion1.dDiv() << endl;
	
	return 0;
}

