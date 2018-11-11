//

//  main.cpp

//  ArchivosTexto

//

//  Created by Alfredo Salazar on 1/15/18.

//  Copyright © 2018 Alfredo Salazar. All rights reserved.

//



#include <iostream>
#include "stdafx.h"
#include <fstream>



using namespace std;



int main()

{

    ifstream ifArchivoEntrada;

    int iClave, iCantidad;

    double dPrecio, dTotalUnitario, dTotalFinal;

    

    cout << "Clave\t" << "Cantidad\t" << "Precio Un.\t" << "Precio\n";

    

    ifArchivoEntrada.open("Factura.txt");

    

    dTotalFinal = 0.0;

    while (! ifArchivoEntrada.eof())

    {

        ifArchivoEntrada >> iClave >> iCantidad >> dPrecio;

        

        dTotalUnitario = dPrecio * iCantidad;

        cout << iClave << "\t\t\t" << iCantidad << "\t\t\t" << dPrecio << "\t\t" << dTotalUnitario << "\n";

        

        dTotalFinal += dTotalUnitario;

    }

    

    cout << "\t\t\t\t\t\tTotal\t" << dTotalFinal << "\n\n";

    

    ifArchivoEntrada.close();

    return 0;

}
