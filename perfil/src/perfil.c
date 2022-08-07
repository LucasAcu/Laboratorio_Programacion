/*
 ============================================================================
 Name        : perfil.c
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
	char apellido[30];
	char correo[30];
	char password[30];
	int edad,sexo;
}perfil;

int main(void) {
	perfil *numperfil;
	int contperfil,datos;
	//Pedimos cuantos perfiles vamos a guardar
	printf("\nDame el numero de perfiles que deseas guardar: ");
	scanf("%d",&datos);
	//Reservamos memoria para el numero de perfiles
	numperfil =(perfil *)malloc(datos*sizeof(perfil));
	//Pedimos y guardamos los datos de los perfiles
	system("cls");
	for(contperfil=1;contperfil<=datos;contperfil++)
	{
		fflush(stdin);
		printf("\n****PERFIL &d****",contperfil);
		printf("\nDane el nombre del perfil %d: ",contperfil);
		gets(numperfil->nombre);
		printf("\nDame el apellido del perfil %d: ",contperfil);
		gets(numperfil->apellido);
		printf("\nDame el apellido del perfil %d: ",contperfil);
		gets(numperfil->correo);
		printf("\nDame la contraseña del perfil %d: ",contperfil);

		gets(numperfil->password);
		printf("\nDame la edad del perfil &d: ",contperfil);
		scanf("%d",&numperfil->edad);
		printf("\nSEXO:");
		printf("\n1) Mujer");
		printf("\n2) Hombre");
		printf("\nDame la opcion para el perfil %d: ",contperfil);
		scanf("%d",&numperfil->sexo);
		system("cls");
		numperfil++;
	}
	numperfil-=datos;
	for(contperfil=1;contperfil<=datos;contperfil++){
		printf("\n\n****PERFIL %d****",contperfil);
		printf("\nNOMBRE: %s",numperfil->nombre);
		printf("\nAPELLIDO: %s",numperfil->apellido);
		printf("\nCORREO: %s",numperfil->correo);
		printf("\nCONTRASEÑA: no se muestra por seguridad");
		printf("\nEDAD: %d",numperfil->edad);
		if(numperfil->sexo==1){
			printf("\nSEXO: Mujer");
		}else if(numperfil->sexo==2){
			printf("\nSEXO: Hombre");
		}
		numperfil++;
	}
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}
