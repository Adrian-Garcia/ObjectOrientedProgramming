#include <iostream>
#include <string>

using namespace std;

int main () {
	
	string sTexto = "Esto es una cadena de caracteres";
	//getline (cin, sTexto); Es mejor que un cin
	
	cout << "Cadena original: " << sTexto << endl;
	cout << "Tamano de string: " << sTexto.length() << endl; 
	cout << "Caracteres del 0 al 10 : " << sTexto.substr(0,10) << endl;
	cout << "Primera pocision de a: " << sTexto.find("z") << endl;
	cout << "Borra caracteres: " << sTexto.erase(10, 3) << endl;
	cout << "Inserta una palabra: " << sTexto.insert(12, " pequenia");
	cout << "Primera letra: " << sTexto[0];
	
	return 0;
}
