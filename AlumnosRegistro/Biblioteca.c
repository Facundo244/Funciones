#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"

void alfabeticamente(int legajos[] , char nombres[][21] , int notas[] , float alturas[] , int tam)
{
    int auxInt;
    float auxFloat;
    char auxString[100];

    int i;
    int j;

        for(i=0 ; i<tam-1 ; i++)
        {
            for(j = i+1 ; j<tam ; j++)
            {
                if(strcmp(nombres[i],nombres[j]) < 0)
                {
                    strcpy(auxString,nombres[i]);
                    strcpy(nombres[i],nombres[j]);
                    strcpy(nombres[j],auxString);

                    auxInt=legajos[i];
                    legajos[i]=legajos[j];
                    legajos[j]=auxInt;

                    auxFloat = alturas[i];
                    alturas[i]= alturas[j];
                    alturas[j]= auxFloat;

                }
            }
        }
}


void cargarAlumnos(int legajos[] , char nombres[][21] , int notas[] , float alturas[] , int tam )
{
   int i;

   for(i=0 ; i<tam; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d" , &legajos[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese nota: ");
        scanf("%d" ,&notas[i]);

        printf("Ingrese altura: ");
        scanf("%f" ,&alturas[i]);
    }
}

void mostrarAlumnos(int legajos[] , char nombres[][21] , int notas[] , float alturas[] , int tam)
{
    int i;

    printf("Legajo  Nombre   Nota   Altura \n"); //---> tambien podria ser printf("%4s %20s% 2s %5s" ,"Legajo" , "Nombre" , "Nota" , "Altura" \n);
    for(i=0 ; i<tam ; i++)
    {
        printf("%4d    %4s    %4d    %4f\n" , legajos[i] , nombres[i], notas[i] , alturas[i]);
    }
}


