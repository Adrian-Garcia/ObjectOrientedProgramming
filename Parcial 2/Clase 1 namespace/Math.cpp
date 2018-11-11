class Math {
	
	public:
		
		//Metodo que eleva a la potencia
		static double pow(double dNumero, int iExponente) {
			
			double dResultado = 1.0;
			
			for (int i=0; i<iExponente; i++) {
				dResultado *= dNumero;
			}
				
			//Regresamos el valor final
			return dResultado;	
		}
		
		//Metodo que regresa el valor absoluto de un numero
		static double abs(double dNumero) {
			

			//Si el numero es menor que 0
			if (dNumero < 0) {
				//Lo multiplicamos por -1
				dNumero *= -1;
			}
			
			//Regresamos valor
			return dNumero;
		}
			
		//Metodo techo
		static int ceil (double dNumero) {
			
			//Numero en entero
			int iNumero = dNumero;
			
			//Si la resta de los numeros es diferente de 0
			if (dNumero - iNumero != 0) {
				iNumero++; //Agregamos 1 al valor de numero
			}
			
			return iNumero;
		}
		
		//Metodo piso
		static int floor (double dNumero) {
			int iNumero = dNumero;
			
			return iNumero;
		}
	
};


