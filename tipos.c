/*
Programa:	tipos.c
Sinopsis:	Ejemplo de uso de tipos definidos por el usuario
Fecha:		Enero 2018
Autor:		Paco González Moya
Versión:	1.0
*/
#include<stdio.h>

//Un primer tipo definido por el usuario
typedef unsigned NUM_HIJOS;

//Un segundo tipo definido por el usuario
typedef float EUR;

//Más difícil todavía: tipo definido y enumerado
typedef enum {CONECTADA, TEST, FUNCIONANDO, PARANDO, DETENIDA} ESTADO;

int main() {
	//Declaración de variables: observar la forma de declarar ahora
	NUM_HIJOS mishijos=2;
	EUR salario=1200.0;
	ESTADO siemens=0;

	//Tipo definido NUM_HIJOS
	printf("\n Mis hijos: %u", mishijos);
	mishijos++; //Sorpresa de última hora
	printf("\n Mis hijos ahora: %u", mishijos);
	mishijos = -1;	//Es posible?
	printf("\n Mis hijos al final: %u\n", mishijos);

	//Tipo definido EUR
	printf("\nMi salario: %6.2f", salario);
	salario*=1.001;
	printf("\nDespués de IPC: %6.2f\n", salario);

	//Tipo definido y enumerado  ESTADO
	printf("\n Estado actual: %i", siemens);
	siemens++;
	printf("\n Cambio: %i", siemens);
	siemens+=6;
	printf("\n Estado final: %i\n", siemens); //Posible?

return 0;
}

