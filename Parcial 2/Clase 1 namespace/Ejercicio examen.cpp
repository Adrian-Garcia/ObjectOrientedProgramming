#include <iostream>
#include <string>

using namespace std;

class Robots{
	private:
		double dTamanio;
		string sNombre;

	public: 
		Robots(){
			dTamanio = 0;
			sNombre = "Nombre";
		}

		Robots(double dTamanio, string sNombre){
			this->dTamanio = dTamanio;
			this->sNombre = sNombre;
		}


		double getTamanio() {
			return dTamanio;
		}

		string getNombre() {
			return sNombre;
		}


		void setTamanio(int iSize) {
			dTamanio = iSize;
		}

		void setNombre(string sName) {
			sNombre = sName;
		}

};

int main () {

	Robots Robot1, Robot2;

	double dTamanio;
	string sNombre;

	cout << "Inserta en tamanio del Robot 1: ";
	cin >> dTamanio;
	cout << "Inserta el nombre del Robot 1: ";
	cin >> sNombre;

	Robot1.setTamanio(dTamanio);
	Robot1.setNombre(sNombre);

	cout << "Inserta en tamanio del Robot 1: ";
	cin >> dTamanio;
	cout << "Inserta el nombre del Robot 1: "; 
	cin >> sNombre;

	Robot2.setTamanio(dTamanio);
	Robot2.setNombre(sNombre);


	cout << "Robot 1 " << Robot1.getNombre() << " " << Robot1.getTamanio() << endl;
	cout << "Robot 2 " << Robot2.getNombre() << " " << Robot2.getTamanio() << endl;
	return 0;
}
