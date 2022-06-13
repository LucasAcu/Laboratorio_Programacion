/*
 ============================================================================
 Name        : 9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id;
	char nombre[51];
	char apellido[51];
	float salario;
	int ssector;
	int isEmpty;
}aEmpleado;

#define MAXIMO 3

int main(void) {
	setbuf(stdout, NULL);
	int contadorEmpleados=0;
	int retornoUno;
	int menu;
	aEmpleado aEmpleados[MAXIMO];

	for(int i=0; i<MAXIMO;i++){
		aEmpleados[i].isEmpty=1;
	}

		do{
			retornoUno = utn_getNumero(&menu,"1.Altas empleados\n2.Modificar empleados\n3.BAJA ingresar el numero Id\n4.informar\n");
			if(retornoUno == 0){
				swtich(menu){
					case 1:
						break;
					case 2:
						break;
				}
			}
		}
	return EXIT_SUCCESS;
}
