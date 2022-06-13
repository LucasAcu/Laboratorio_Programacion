/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int* vec;
	int* vaux;

	vec=(int*)malloc(sizeof(int)*5);

	if(vec!=NULL)
	{
		for(i=0;i<5;i++)
		{
			*(vec+i)=i;//carga secuencial
		}
	}//mostrar con notacion aritmetica y vectorial

	for(i=0;i<5;i++)
	{
		printf("\n Notacion Aritmetica Contenido %d posicion %d",*(vec+i),i);
		printf("\n Notacion Vectorial contenido %d posicion %d",vec[i],i);
	}

	//agrandar el vector a 10

	vaux =(int*)realloc(vec,sizeof(int)*10);//agrandar su tamaño dinamicamente
	if(vaux!=NULL)
	{
		vec = vaux;
	}

	//free(vaux);
	//cargar los elementos restantes secuencialmente
	for(i=5;i<10;i++)
	{
		printf("\n Originales + agregados:Notacion Aritmetica Contenido %d posicion &d",*(vec+i),i);
	}

	free(vec);//liberar espacio
	free(vaux);//liberar espacio

	return EXIT_SUCCESS;
}
