class Fraccion {
	private:
		int iNum, iDen;

	public:
		Fraccion() {
			iNum = 0;
			iDen = 0;
		}

		Fraccion(int iNum, int iDen1) {
			this->iNum = iNum;
			this->iDen = iDen;
		}

		int getNum() {
			return iNum;
		}	

		int getDen() {
			return iDen;
		}

		void setNum(int iNumb) {
			iNum = iNumb;
		}

		void setDen(int iDeno) {
			iDen = iDeno;
		}

		friend Fraccion operator*(Fraccion F1, Fraccion F2) {
			Fraccion NuevaFracc;

			NuevaFracc.setNum(F1.getNum()*F2.getNum());
			NuevaFracc.setDen(F1.getDen()*F2.getDen());
		
			return NuevaFracc;
		}
};

#include <iostream>

using namespace std;

int main () {
	Fraccion Fracc1;
	Fraccion Fracc2;

	Fracc1.setNum(1);
	Fracc1.setDen(4);

	Fracc2.setNum(2);
	Fracc2.setDen(1);

	Fraccion Fracc3 = Fracc2 * Fracc1;
	
	cout << Fracc3.getNum() << "/" << Fracc3.getDen();

}
