/*
|Apuntadores|
	Apunta a un espacio de memoria
	
	TipoDeVariable * nombreVariable;
		Ejemplo
			int *iApuntador;
			double *dApuntador; 

	Hay que declarar cada apuntador
		int *iX, *iY, iZ;
			Apuntadores: iX, iY
			No apuntadores: iZ

	Tambien se puede usar como parametro de referencia
		iApuntador =  &iVariable;

	 _______
iP	| IA124 | IA123 <----- Este valor apunta a una direccion de memorias
iN	|*4* 15 | IA124 <----- Cambiamos el valor de 4 a 15 por que lo actualizamos
	|		|
	|_______|		
	
	int *iP;
	int iN;

	iP = &iN;
	
	Para actualizar
		*iP = 15

	Para desplegar
		cout << iP;		<---- Desplega "IA124"
		cout << *iP;	<---- Desplega "15"
		cout << &iP;	<---- Desplega "IA123"
																		__________
		iP = NULL;		<---- Se representa con tres lineas horizontales 		__|__
																				_____
																				_____

No se pueden hacer asignaciones entre apuntador y entero
	*q =  n 			¡¡¡Esto no!!!

Entre aputnadores si se puede asignar de manera sencilla
	q = p;

----------------------------------------------------------------------------------------*/

/*
|Ejercicio Rapido|
Que desplega este programa?

int main () {
	
	int iX, iY, *p, *q;

	p = &iX;   									asdasff
	q = &iY;   									sdfsdf1

	*p = 5;     								p = 5
	*q = 23;									q = 23

	cout << *p << " " << *q;					5 23
	q=p;
	*p = 35;									q=35 q=35

	cout << *p << " " << *q;					35 23
	cout << iX << " " << iY; 

	return 0;
}

|Respuesta|
	5 23
	35 35
	35 23
----------------------------------------------------------------------------------------*/

/*
|Estructura coorecta de un programa|
	#Librerias/Namespace
	//Variables globales
	//Funciones

	int main () {
		//Variables locales
		
		//Estatutos

		return 0;
	}

|Apuntador Arreglo|
	Se decara como apuntador
		int *iArreglo;
		int iCap;
		cin >> iCap;

	Luego se hace arreglo
		iArreglo = new int[iCap];
	
	Declaramos los valores
		for (int i=0; i<iCap; i++) {
			cin >> iArreglo[i];
		}

	Es buena practica borrar el apuntador cuando no se usa
		delete iArreglo;

	Para multiples arreglos
		**iMatriz;
		***ArregloTridimencional;
		
		iMatriz = iNew *int[iRen];



|Arreglo apuntador como parametro|
	int *regresaArregloOrdenado(int []iArr) {

		return iArr[];	
	}

----------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main  () {
	int iX, iY, *ip, *iq;

	ip = &iX;
	*ip = 5;
	iq = &iY;
	*iq = 23;
	cout << *ip << " " << *iq << endl;
	iq = ip;
	*ip = 35;
	cout << *ip << " " << *iq << endl;
	iq = NULL;
	cout << endl << iX << " " << iY;
	
//	iArr = new int[10];
//	for (int i=0; i<10; i++) {
//		cin >> iArr[i];
//	}

	return 0;
}
