#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Serie.h"
#include <string.h>
#include <ctype.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie listadoDeSerie[], int tam )
{
   printf("%5s% 10s% 10s %5s %5s \n\n","IDSerie","Nombre","Genero","Temporadas","Estado");

   int i;

   for(i = 0 ; i<tam ; i++)
   {
       printf("%5d %10s %10s %5d %9d \n",listadoDeSerie[i].idSerie ,listadoDeSerie[i].nombre , listadoDeSerie[i].genero ,
                listadoDeSerie[i].cantidadTemporadas , listadoDeSerie[i].estado);
       printf("\n");

   }

}




