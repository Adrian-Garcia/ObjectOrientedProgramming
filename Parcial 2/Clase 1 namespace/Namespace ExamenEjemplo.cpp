#include <iostream>

using namespace std;

int Var1 = 10;
int Var2 = 20;

namespace Example {
	int Var1 = 40;
	int Var2;

	void muestraVar() {
		cout << Var1 << " " << Var2 << endl;
	} 

	void setVar2(int newVar) {
		Var2 = newVar;
	}
}

int main () {

	cout << "Variable 1 en main = " << Var1 << endl;

	cout << "Variable 2 en main = " << Var2 << endl;

	int nuevaVar;
	cout << "Inserta un valor para la Variable 2: ";
	cin >> nuevaVar;

	Example::setVar2(nuevaVar);

	cout << "Variables 1 y 2 en namespace: ";
	Example::muestraVar();

	return 0;
}
