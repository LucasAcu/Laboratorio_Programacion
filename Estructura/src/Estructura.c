/*
 ============================================================================
 Name        : Estructura.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	typedef struct
{
	int dia;
	int mes;
	int anio;
}eFlecha;

typedef struct
{
	int legajo;
	char nombre[20];
	int edad;
	char sexo;
	int nota1;
	int nota2;
	float promedio;
	eFlecha fechaIngreso;
	int idCarrera; //CODIGO DE CARRERA
	int isEmpty;
}eAlumno;

typedef struct
{
	int id;
	char descripcion[20];
}eCarrera;

int loadCarrera(eCarrera*carreras,int lenghtList,int idCarrera,char descripcion[

																				])
{
	int todoOK = 0;
	int flag = 1;
	if(carreras != NULL && lenghtList>0 && descripcion !=NULL)
	{
		todoOK= 1;
		for(int i=0;i<lenghtList;i++)
		{
			if(carreras[i].id == idCarrera)
			{

			}
		}
	}
}

void printAlumno(eAlumno alumno,eCarrera*carreras,int tamCarreras)
{
	char descripcion[20];
	loadCarrera(carreras,tamCarreras,alumno.idCarrera,descripcion);

	printf(" %-4d %-10s %-1c 	   %-2d	   		 %-2d	  	 %.2f		 %d/%d/%d			%-10s \n".
			alumno.legajo,
			alumno.nombre,
			alumno.sexo,
			alumno.nota1,
			alumno.nota2,
			alumno.promedio,
			alumno.fechaIngreso.dia,
			alumno.fechaIngreso.mes,
			alumno.fechaIngreso.anio,
			descripcion
			);
}
int printAlumnos(eAlumno* list, int listlenght,eCarrera*carreras,int tamCarreras)
{
	int todoOK =  0;
	int flag =1;
	if(list !=NULL && listLenght <0 && carreras!=NULL && tamCarreras>0 && carreraInforme!=NULL)
	{
		printf("   	  		 ***Lista de Alumnos***\n");
		printf("------------------------------------------------");
		printf(" ID    Nombre  Sexo  Nota1    Nota2 Promedio  Fecha de Ingreso Carreras");
		for(int i=0;i<listLenght;i++)
		{
			if((!list[i].isEmpty)&&strcmp(carreraInforme,carreras[i].descripcion)==0)
			{
				printfAlumno(list[i],carreras,tamCarreras);
				flag=0;
			}
		}
		if(flag)
		{
			printf("No hay alumnos para mostrar en esa carrera.\n")
		}
		todoOK =1;
	}
	printf("\n");
	return todoOK;
}
eCarrera carreras[]={
		{1000,"TUP"},
		{1001,"TUSI"},
		{1002,"LIC"},
		{1003,"ING"},
};

//Harcoded de alumnos:
eAlumnos estudiantes[30]=
{
            { 20000, "Juan", 21, 'm', 2, 10, 6,{12, 5, 2018}, 1000, 0},
            { 20001, "Ana", 22, 'f', 6, 8, 7,{21, 5, 2013},1001, 0},
            { 20002, "Alicia", 20, 'f', 5, 4, 4.5,{4, 8, 2014},1002, 0},
            { 20003, "Miguel", 23, 'm', 6, 6, 6,{20, 3, 2015},1002, 0},
            { 20004, "Gaston", 20, 'm', 2, 4, 3,{23, 8, 2019},1000, 0},
            { 20005, "Amalia", 21, 'f', 2, 8, 4,{11, 2, 2011},1001, 0},
            { 20006, "Sofia", 27, 'f', 10, 10, 10,{9, 10, 2018},1001,0},
			{ 20007, "Diego", 20, 'm', 9, 8, 8.5,{4, 5, 2018},1000, 0},
			{ 20008, "Jorge", 21, 'm', 5, 6, 5.5,{3, 4, 2014},1002, 0},
			{ 20009, "Clara", 25, 'f', 8, 8, 8,{10, 9, 2015},1002, 0}
};

//printAlumnos(estudiantes,7,carreras,5)
char carreraInforme[10];
printf("Ingrese la descripcion de la carrera: ");
fflush(stdout);
gets(carreraInforme);

for(int i =0; carreraInforme[i];i++)
{
	carreraInforme[i]= toupper(carreraInforme[i]);
}

printCarrera(estudiantes,7,carreras,5,carreraInforme);


	return EXIT_SUCCESS;
}
//se harcodea


