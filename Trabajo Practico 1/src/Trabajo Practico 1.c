
/*
 ============================================================================
 Trabajo practico 1
 Acuña Lucas
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int opc = 0, latam = 0, aerolineasArgentinas = 0;
	do{
		int kilometros;
		system("cls");
		printf("menu de opciones\n\n");
		printf("1. Ingrese los kilometros\n");
		printf("2. Calcule el precio de los vuelos\n");
		printf("3. Calcule todos los costos\n");
		printf("4. Informe resultados\n");
		printf("5. Carga forzada de datos\n");
		printf("6. Salir\n");
		printf("Opcion a escoger: ");
		scanf("%d", &opc);
		switch(opc)
		{
			case 1:
				system("cls");
				printf("ingrese los kilometros");
				scanf("%d", &kilometros);
				break;
			case 2:
				system("cls");
				printf("Ingrese el precio del vuelo de Aerolineas");
				scanf("%d",&aerolineasArgentinas);
				printf("Ingrese el precio de Latam");
				scanf("%d",&latam);
				break;
			case 3:
				system("cls");
				printf("Ingrese los costos");
				scanf("");
				break;
			case 4:
				system("cls");
				printf("Informe los resultados");
				scanf("los resultados son: ");
				break;
			case 5:
				system("cls");
				printf("Carga forzada de datos");
				scanf("Se guardaron exitosamente los datos");
				break;
			case 6:
				system("cls");
				break;



		}
	}while(opc != 6);
	return 0;
}
int moo(void)
{
	char latam;
	char aeroilineasArgentinas;
	int kilometros;
	float precios;
	float precioAerolineas;
	float precioLatam;
	float targetaDebito;
	float targetaCredito;
	float bitcoin;
	float precioKmUnitario;
	float difPrecioLatamAerolineas;

	return EXIT_SUCCESS;
}
