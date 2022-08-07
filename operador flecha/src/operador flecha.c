/*
 ============================================================================
 Name        : operador.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nombre[30];
	int tipo, categoria;
}Pagina;

int main(void) {
	Pagina *perfil, paginas[3];
	int contpaginas, paginabusqueda;
	perfil=&paginas[0];
	system("cls");
	for(contpaginas=1;contpaginas<=3;contpaginas++){
		fflush(stdin);
		printf("\n****Pagina %d****",contpaginas);
		printf("\nDame el nombre de la pagina",contpaginas);
		gets(perfil->nombre);
		printf("\nTipo:");
		printf("\nn1) Tipo1.");
		printf("\nn2) Tipo2.");
		printf("\nDame el tipo de la pagina %d: ",contpaginas);
		scanf("%d",&perfil->tipo);
		printf("\nCategoria");
		printf("\nn1) Categoria1.");
		printf("\nn2) Categoria2.");
		printf("\nDame la categoria de la pagina %d: ",contpaginas);
		scanf("%d",&perfil->categoria);
		system("cls");
		perfil++;
	}
	//BUSQUEDA
	printf("\nDame el numero de pagina que deseas buscar (1-3): ");
	scanf("%d",&paginabusqueda);
	//con un while garantizamos que el perfil sea valido(osea que exista)
	while(paginabusqueda<=0 || paginabusqueda>3){
		system("cls");
		printf("\nPagina no encontada, por favor elija una pagina existente (1-3): ");
		scanf("%d",&paginabusqueda);
	}
	//una vez garantizado el perfil valido
	//1-inicializamos el apuntador
	perfil=&paginas[0];
	//2-Dirigimos el apuntador incrementando el numero de veces que el usuario nos diga
	// Solo si es diferente de 1,pues si es 1 se deja en la posicion inicial
	if(paginabusqueda!=1){
		perfil+=paginabusqueda;
	}
	//impresion

	//IMPRESION
	system("cls");
		printf("\n\n****PAGINA %d****",paginabusqueda);
		printf("\nNOMBRE: %s",perfil->nombre);
		if(perfil->tipo==1){
			printf("\nTIPO: 1");
		}
		else if(perfil->tipo==2){
			printf("\nTIPO: 2");
		}
		if(perfil->categoria==1){
			printf("\nCategoria. 1");
		}
		else if(perfil->categoria==2){
			printf("\nCategoria. 2");
		}
		printf("\n");
		system("pause");

	return EXIT_SUCCESS;
}
//BUSQUEDA
