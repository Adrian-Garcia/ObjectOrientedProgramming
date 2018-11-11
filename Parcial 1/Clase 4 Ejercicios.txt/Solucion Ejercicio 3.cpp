#include <iostream>

#include <fstream>



using namespace std;



int main()

{

    ifstream ifArchivoEntrada;

    ofstream ofArchivoSalida;

    int iClave, iCantidad;

    double dPrecio, dTotalUnitario, dTotalFinal;

    
	//ofArchivoSalida.open("FacturaGenerada.txt", ofstream::app);
    ofArchivoSalida.open("FacturaGenerada.txt");

    ofArchivoSalida << "Clave\t" << "Cantidad\t" << "Precio Un.\t" << "Precio\n";

    

    ifArchivoEntrada.open("Factura.txt");

    

    dTotalFinal = 0.0;

    while (! ifArchivoEntrada.eof())

    {

        ifArchivoEntrada >> iClave >> iCantidad >> dPrecio;

        

        dTotalUnitario = dPrecio * iCantidad;

        ofArchivoSalida << iClave << "\t" << iCantidad << "\t\t" << dPrecio << "\t\t" << dTotalUnitario << "\n";

        

        dTotalFinal += dTotalUnitario;

    }

    

    ofArchivoSalida << "\n\t\t\tTotal\t\t" << dTotalFinal << "\n\n";

    

    ifArchivoEntrada.close();

    ofArchivoSalida.close();

    return 0;

}
