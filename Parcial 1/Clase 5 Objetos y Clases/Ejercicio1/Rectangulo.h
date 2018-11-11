	//Clase de tipos de rectangulos
	class Rectangulo {		
		
		//Atributos de la clase
		private: 
			double dLargo, dAncho; 
		
		//Metodos de la clase	
		public:
			double dCalculaArea(); 
			void setLargo(double dL);
			void setAncho(double dA);
			double getLargo();
			double getAncho();
		
		//Constructor	
		//Rectangulo(double dAn, double dLa);
	};  //Notese el punto y coma de la clase
	
	/*Constructor 
	Rectangulo::Rectangulo(double dAn, double dLa) {
		dLargo = dLa;
		dAncho = dAn;
	} */
	
//  |Tipo||NombreClase|   |Metodo|	  |Parametros|
	double Rectangulo::dCalculaArea(/*!Parametros*/) {
		double dArea;
		dArea = dLargo*dAncho;
		return dArea; 
	}
	
	//Le damos un valor al largo del rectangulo
	void Rectangulo::setLargo(double dL) {
		dLargo = dL;
	}
	
	//Le damos un valor al ancho del rectangulo
	void Rectangulo::setAncho (double dA) {
		dAncho = dA;
	}
