


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int calculador(int,int(*pFunc)(int,int),int,int*);
	return EXIT_SUCCESS;
}

typedef struct{
	int precio;
	char marca[20];
	int id;
}eProducto;

eProducto productos[4]={
		{150,"Playadito",1},
		{100,"Pampero",2},
		{120,"Amanda",3},
		{180,"Rosamante",4},
};
