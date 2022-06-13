/*
 ============================================================================
 Name        : cosas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	struct eVivienda *punteros;

		//cargar datos
			printf("Ingrese el id de la vivienda");
			gets(*punteros->idVivienda);
			fflush(stdin);

			printf("\nIngrese la calle");
			gets(*punteros[i].calle);
			fflush(stdin);

			printf("\nIngrese la cantidad de personas");
			gets(*punteros->cantidadPersonas);
			fflush(stdin);

			printf("\nIngrese la cantidad de personas");
			gets(*punteros->cantidaPersonas);
			fflush(stdin);

			printf("\nIngrese la cantidad de habitaciones");
			gets(*punteros->cantidadPersonas);
			fflush(stdin);


			printf("\nIngrese el tipo de vivienda");
			get(*punteros->tipoVivienda);
			fflush(stdin);

			//mostrar datos
			printf("\nVivienda");
			printf("\n%s",*puntero->idVivienda);
			printf("\n%s",*puntero->calle);
			printf("\n%s",*puntero->cantidadPersonas);
			printf("\n%s",*puntero->cantidadHabitaciones);
			printf("\n%s",*puntero->tipoVivienda);
			printf("\n%s",*puntero->legajoCensista);

		do{
			respuesta = utn_getNumero(&opcion,"\n1-Alta vivienda\n2-Modificar vivienda\n3-Baja vivienda\n4-Listar vivienda\n5-Listar cencistas\n6-Salir","No es una opcion valida\n",1,20000,2);
			if(!respuesta)
			{
				switch(opcion)//
				{
				case 1:
					altaVivienda(puntero);
					printf("Entre al caso 1\n");
					break;
				case 2:
					modificarVivienda(puntero);
					printf("Entre al caso 2\n");
					break;
				case 3:
					bajaVivienda(puntero);
					printf("Entre al caso 3\n");
					break;
				case 4:
					listarVivienda(puntero);
					printf("Entre al caso 4\n");
					break;
				case 5:
					listarCensistas(puntero);
					printf("Entre al caso 5\n");
					break;
				case 6:
					printf("Salir\n");
					break;
				}
			}
		}while(opcion != 6);
	return EXIT_SUCCESS;
}


void altaVivienda(eVivienda* punteros)
{
	int opcion=9;
	while(opcion!=0)
	{
		printf("1-----Desea agregar viviendas oprima 1 sino oprima 0-------\n");
		scanf("&d",&opcion);

		if(opcion==1)
		{
			printf("IdVivienda");
			get(eVivienda->idVivienda,30,'\n');
			printf("calle");
			get(eVivienda->calle,serrano,'\n');
			printf("cantidad de personas");
			get(eVivienda->cantidadPeronas,'\n');
			printf("Cantidad de habitaciones");
			get(eVivienda->cantidadHabitaciones,'\n');
			printf("tipoVivienda");
			get(eVivienda->tipoVivienda,'\n');
			printf("legajo");
			get(eVivienda->legajo,'n');

		}
	};
}

//en biblioteca

void altaVivienda(eVivienda* puntero);
void modificarVivienda(eVivienda* puntero);
void bajaVivienda(eVivienda* puntero);
void listarVivienda(eVivienda* puntero);
void listarCensistas(eVivienda* punteros);

int pedirEntero(int *entero,char *mensaje,char *mensajeError, int min, int max)
{
	int retorno =-1;
	int numeroIngresado;

	if(entero != NULL && mensaje != NULL && mensajeError != NULL && min < max)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%d",&numeroIngresado);

		while(numeroIngresado < min || numeroIngresado > max)
		{
			printf("%s", mensajeError);
			fflush(stdin);
			scanf("%d",&numeroIngresado);
		}
		*entero = numeroIngresado;
		retorno =0;
	}
	return retorno;
}

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;//guarda lo que el usuario ingresa
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
	{
		printf("%s",mensaje);
		scanf("%d",&bufferInt);
		if(bufferInt >=minimo && bufferInt <=maximo)
		{
			*pResultado = bufferInt;
			retorno = 0;
		}
		else
		{
			printf("%s",mensajeError);
		}
	}
	return retorno;
}

