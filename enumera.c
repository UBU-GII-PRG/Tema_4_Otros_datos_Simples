/*
Programa:	enumera.c
Sinopsis:	Ejemplo de definición de enumeraciones
Fecha:		Enero 2018
Autor:		Paco González Moya
Versión:	1.0
*/
#include<stdio.h>
/*
Programa:	enumera.c
Sinopsis:	Ejemplo de definición de enumeraciones
Fecha:		Enero 2018
Autor:		Paco González Moya
Versión:	1.0
*/
#include<stdio.h>

//Definición del tipo enumerado
enum colores
{ NEGRO = 0, ROJO = 1, VERDE = 2, AZUL = 4 };

//Prototipo de una función extraña
int pintadoDeVerde (enum colores micolor) ;

int
main ()
{
  enum colores colorPelo = NEGRO;
  printf ("\tColor inicial: %i\n", colorPelo);
  //Siguiente	
  colorPelo++;
  printf ("\tNuevo color: %i\n", colorPelo);
  //Dos siguientes	
  colorPelo+=2;
  printf ("\tNuevo color (cuidado): %i\n", colorPelo); //NO es un color

  //Avanzamos 5	
  colorPelo+=5;
  printf ("\tOtro color (cuidado): %i\n", colorPelo);

  //Función pintadoDeVerde
  printf("\nPintado de verde (1)?: %i\n", pintadoDeVerde(VERDE)); 
  printf("\nPintado de verde (2)?: %i\n", pintadoDeVerde(NEGRO)); 
	
  return 0;
}

//¿Puedes decir qué hace esta función?
int pintadoDeVerde (enum colores micolor) {
	return micolor==VERDE;
}

