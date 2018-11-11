#include <iostream>

using namespace std;

class Cosa {
	private:
		int iNum;

	public:
		Cosa() {
			iNum = 0;
		}

		Cosa(int iNum) {
			this->iNum = iNum;
		}

		int getNum() {
			return iNum;
		}

		void setNum(int nuevoNum) {
			iNum = nuevoNum;
		}

		friend istream& operator >> (istream &is, Cosa &dato) {
			is >> dato.iNum; 
		}

		friend ostream& operator << (ostream &os, Cosa &dato) {
			os << dato.iNum;
		}
		
		~Cosa () {};
};

int main () {

	Cosa cosa;

	cout << "Inserta un numero para cosa: ";
	cin >> cosa;
	cout << cosa;	
	
	int iNum = cosa.getNum();

	cout << ((iNum >= 50)?" Es mayor que 50":" No es mayor que 50");

	return 0;
}
