/*
 ============================================================================
 Name        : Prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

FILE *pfusu; //Fichero
FILE *pfaux; //Fichero auxiliar

struct usuarios{
 int clave;
 char nombre[15];
 char apellido[15];
};

int opcion,ultima=1,elimina, modifica;
char resp;

main()
{
 do {
      printf("\n");
      printf("\n1. Alta de usuario");
      printf("\n2. Listado");
      printf("\n3. Modificaciones");
      printf("\n4. Bajas");
      printf("\n5. Salir");

      printf("\n\nElija opcion: ");
      scanf(" %d", &opcion);
      switch(opcion)
      {
           case 1:
                altas();
           break;

           case 2:
                listado();
           break;

           case 3:
                modificaciones();
           break;

           case 4:
                bajas();
           break;
      }
     }while(opcion!=5);
}

altas()
{
 clrscr();
 struct usuarios usu;

 /* COMPROBAR ULTIMA CLAVE */

 if((pfusu=fopen("usuarios.txt","rb"))!=NULL)
 {
  fread(&usu,sizeof(struct usuarios),1,pfusu);
  while(!feof(pfusu)) //Leemos para quedarnos con la ultima clave
  {
   ultima=usu.clave; //Variable ultima es igual a la clave leida
   printf("\n");

   fread(&usu,sizeof(struct usuarios),1,pfusu);
  }
  ultima++; //Sumamos uno
 }
 fclose(pfusu);

 if((pfusu=fopen("usuarios.txt","ab"))==NULL)
  printf("Error al abrir fichero");
 else
 {
  printf("\nLa clave es: %d",ultima);
  usu.clave=ultima;
  printf("\nPonga el nombre del usuario: ");
  scanf(" %s", &usu.nombre);
  printf("Ponga el apellido del usuario: ");
  scanf(" %s", &usu.apellido);
  printf("¿Desea guardar los datos en fichero? S/N: ");
  scanf(" %c",&resp);
  clrscr();

  if(resp=='s' || resp=='S')
  {
   fwrite(&usu,sizeof(struct usuarios),1,pfusu);
   printf("Datos guardados satisfactoriamente");
  }
  else
   printf("Datos no guardados");
 }
 fclose(pfusu);
}


listado()
{
 clrscr();

 struct usuarios usu;
 if((pfusu=fopen("usuarios.txt","rb"))==NULL)
  printf("Error al abrir ficheros");
 else
 {
  fread(&usu, sizeof(struct usuarios),1,pfusu);
  while(!feof(pfusu)) //Leer hasta el final
  {
   printf("\n %d",usu.clave);
   printf(" %s", usu.nombre);
   printf(" %s", usu.apellido);
   fread(&usu, sizeof(struct usuarios),1,pfusu);
  }
 }
 fclose(pfusu);
}

modificaciones()
{
 clrscr();
 struct usuarios usu;

 printf("Clave del registro que quiere modificar: ");
 scanf(" %d",&modifica);

 //Mostramos resultados de ese registro

 if((pfusu=fopen("usuarios.txt","rb"))==NULL) //Abrimos usuarios.txt
  printf("Error al abrir fichero auxiliar");
 else
 {
  fread(&usu,sizeof(struct usuarios),1,pfusu);
  while(!feof(pfusu)) //Leemos hasta el final
  {
    if(usu.clave==modifica) //si la clave coincide mostramos sus datos
    {
     printf("\nDatos del registro %d", modifica);
     printf("\n\n %d",usu.clave);
     printf(" %s",usu.nombre);
     printf(" %s\n",usu.apellido);
    }
    fread(&usu,sizeof(struct usuarios),1,pfusu);
  }
 } fclose(pfusu); //Cerramos

 printf("\n¿Desea continuar? S/N: ");
 scanf(" %c",&resp);

 if(resp=='s' || resp=='S') //Si decimos que no
 {

  //AHORA PASAMOS TODO AL AUXILIAR MENOS EL REGISTRO A MODIFICAR

  if((pfusu=fopen("usuarios.txt","rb"))==NULL)
   printf("Error al abrir fichero auxiliar");
  else
  {
   if((pfaux=fopen("auxiliar.txt","w"))==NULL) //Letra W
    printf("Error al abrir fichero auxiliar");
   else
   {
    fread(&usu,sizeof(struct usuarios),1,pfusu);
    while(!feof(pfusu)) //Leemos hasta el final
    {
     if(usu.clave!=modifica)
      fwrite(&usu,sizeof(struct usuarios),1,pfaux); //Escribimos en auxiliar
     else //si es igual modifica
     {
      printf("\nLa clave es: %d",modifica);
      usu.clave=modifica;
      printf("\nPonga el nuevo nombre del usuario: ");
      scanf(" %s",usu.nombre);
      printf("Ponga el nuevo apellido del usuario: ");
      scanf(" %s",usu.apellido);

      fwrite(&usu,sizeof(struct usuarios),1,pfaux); //Escribe
      clrscr(); //limpiamos pantalla
     }

     fread(&usu,sizeof(struct usuarios),1,pfusu);

    } //Cierra while

    /* ELIMINAR USUARIOS Y RENOMBRAR AUXILIAR */

    remove("usuarios.txt"); //Eliminamos fichero usuarios
    rename("auxiliar.txt","usuarios.txt"); // Renombramos auxiliar por usuarios
    printf("\nDatos guardados correctamente");

   } //Cierra abrir auxiliar
   fclose(pfaux);
  } //Cierra abrir usuario
  fclose(pfusu);
 } //Cierra desea continuar
} //Cierra funcion modificaciones


bajas()
{
 clrscr();
 struct usuarios usu;

 printf("Clave del registro que quiere borrar: ");
 scanf(" %d",&elimina);

 //PASAR AL AUXILIAR TODO MENOS EL REGISTRO A ELIMINAR

 if((pfusu=fopen("usuarios.txt","rb"))==NULL)
  printf("Error al abrir fichero auxiliar");
 else
 {
  if((pfaux=fopen("auxiliar.txt","w"))==NULL)
   printf("Error al abrir fichero auxiliar");
  else
  {
   fread(&usu,sizeof(struct usuarios),1,pfusu);
   while(!feof(pfusu)) //Leemos fichero usuario hasta el fin
   {
    if(usu.clave!=elimina)
    {
     fwrite(&usu,sizeof(struct usuarios),1,pfaux); //Escribimos en auxiliar
    }
    fread(&usu,sizeof(struct usuarios),1,pfusu);
   }
  }
  fclose(pfaux);
 }
 fclose(pfusu);

 /* MANDAR DE VUELTA A USUARIOS TODO LO QUE HAYA EN AUXILIAR */

 if((pfusu=fopen("usuarios.txt","w"))==NULL)
  printf("Error al abrir fichero usuarios");
 else
 {
  if((pfaux=fopen("auxiliar.txt","rb"))==NULL)
   printf("Error al abrir fichero auxiliar");
  else
  {
   fread(&usu,sizeof(struct usuarios),1,pfaux);
   while(!feof(pfaux))
   {
    fwrite(&usu,sizeof(struct usuarios),1,pfusu); //Escribimos
    fread(&usu,sizeof(struct usuarios),1,pfaux);
   }
  }
  fclose(pfaux);
 }
 fclose(pfusu);
}
