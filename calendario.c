/*
Programa:	calendario.c
Sinopsis:	Ejemplo de definición de enumeraciones
Fecha:		Enero 2018
Autor:		Paco González Moya
Versión:	1.0
*/
#include<stdio.h>
#define MESES 12	//Número de meses que tiene el año

//Declaración del tipo enumerado (enumeración)
//enum Meses {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

//Otra posible definición....¿es mejor?
enum Meses {NULO, ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};


int main () {
	enum Meses mimes;	//Declaramos la variable de tipo enumerado Meses
	//Valor inicial
	mimes=ABRIL;
	
	printf ("\tMi mes: %i\n", mimes);

	//Avanzamos 3m
	mimes+=3;
	printf ("\tSalto de tres: %i\n", mimes); //JULIO
	//Avanzamos 6m
	mimes+=6;
	printf ("\tSalto de seis: %i\n", mimes); //¿?

	//Avanzamos "modularmente" 5m. ¿Por qué?
	mimes= (mimes + 5) % MESES;
	printf ("\tValor final: %i\n", mimes); //JUNIO!!
	return 0;

}




