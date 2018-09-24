#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"


void cargarAlumnos(sAlumno listadoAlumnos[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        system("cls");
        printf("Ingrese legajo: ");
        scanf("%d", &listadoAlumnos[i].legajo);
        fflush(stdin);
        printf("Ingrese nombre: ");
        gets(listadoAlumnos[i].nombre);
        fflush(stdin);
        printf("Ingrese nota: ");
        scanf("%d", &listadoAlumnos[i].nota);
        fflush(stdin);
        printf("Ingrese altura: ");
        scanf("%f", &listadoAlumnos[i].altura);
        fflush(stdin);
    }
}
void mostrarAlumnos(sAlumno listadoAlumnos[], int tam)
{
    system("cls");
    printf("%4s %20s %20s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%4d %20s %20d %.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
    }
    system("pause");
}
void ordenarNombre(sAlumno listadoAlumnos[], int tam)
{
    int i;
    int j;
    sAlumno aux;

    system("cls");
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
                if (strcmp(listadoAlumnos[i].nombre, listadoAlumnos[j].nombre) > 0)
                {
                    aux=listadoAlumnos[i];
                    listadoAlumnos[i]=listadoAlumnos[j];
                    listadoAlumnos[j]=aux;
                }
        }
    }
    printf(" |*****************************|\n");
    printf("|      Ordenando nombres        |\n");
    printf(" |*****************************|\n");
    system("pause");
}

void mostrarAlumnosAprobados(sAlumno listadoAlumnos[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoAlumnos[i].nota > 6)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre,
            listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
}

void busquedaJuan(sAlumno listadoAlumnos[] , int tam)
{
    int i;

    for(i=0;i<tam ; i++)
    {
        if(strcmp(listadoAlumnos[i].nombre , "Juan") == 0 || strcmp(listadoAlumnos[i].nombre , "juan") == 0)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre,
            listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }

}

void busquedaP(sAlumno listadoAlumnos[] , int tam)
{
    int i;

    for(i=0; i < tam; i++)
    {
        if(listadoAlumnos[i].nombre[0] ==  'P' || listadoAlumnos[i].nombre[0] == 'p' )
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre,
            listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }

}

void alumnoMediocre(sAlumno listadoAlumnos[] , int tam)
{
    int i;

    for(i=0 ; i<tam ; i++)
    {
        if(listadoAlumnos[i].legajo == 100 && strcmp(listadoAlumnos[i].nombre, "Juan") == 0 && listadoAlumnos[i].nota == 5 && listadoAlumnos[i].altura == 1.75)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
}


void modificarNota(sAlumno listadoAlumnos[] , int tam)
{
    int i;
    int auxLegajo;

    printf("Ingrese el legajo: ");
    scanf("%d" , & auxLegajo);

    system("cls");

    for(i=0 ; i<tam ; i++)
    {
            if(listadoAlumnos[i].legajo == auxLegajo)
           {
               printf("Ingrese la nota nueva: ");
               scanf("%d" , & listadoAlumnos[i].nota);

           }

    }

    printf(" |*****************************|\n");
    printf("|      Cambiando NOTA          |\n");
    printf(" |*****************************|\n");
}

void notaMayor(sAlumno listadoAlumnos[] , int tam)
{
    sAlumno max;
    max.nota=1;
    int i;

    for(i=0 ; i<tam ; i++)
    {
        if(listadoAlumnos[i].nota > max.nota )
        {
            max = listadoAlumnos[i];
        }
    }

    printf("%4d %20s %4d %5.2f\n", max.legajo, max.nombre, max.nota, max.altura);
}

