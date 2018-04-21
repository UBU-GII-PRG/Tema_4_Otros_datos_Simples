/*
Programa:	brujeria.c
Sinopsis:	Ejemplo de uso de caracteres
Fecha:		Enero 2018
Autor:		Paco González Moya
Versión:	1.0
*/
#include<stdio.h>

int main() {
	char letra; //variable de letra

	//Un mensaje misterioso...¿lo adivinas?
	letra=65;
	printf("\nLetra: %c", letra);
	letra++;
	printf("\nLetra: %c", letra);
	letra+=16;
	printf("\nLetra: %c", letra);
	letra=65;
	printf("\nLetra: %c", letra);
	letra+=2;
	printf("\nLetra: %c", letra);
	letra=65;
	printf("\nLetra: %c", letra);
	letra+=3;
	printf("\nLetra: %c", letra);
	letra=65;
	printf("\nLetra: %c", letra);
	letra++;
	printf("\nLetra: %c", letra);
	letra+=16;
	printf("\nLetra: %c", letra);
	letra=65;
	printf("\nLetra: %c\n", letra);
	return 0;
}

