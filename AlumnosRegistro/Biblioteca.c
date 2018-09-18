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
    int x =0;
    sAlumno alumnosAprobados[i];

    for(i=0; i<tam; i++)
    {
        if(listadoAlumnos[i].nota > 6)
        {
            alumnosAprobados[i]=listadoAlumnos[i];
            x++;
        }
    }
    mostrarAlumnos(alumnosAprobados, tam);
}

void busquedaJuan(sAlumno listadoAlumnos[] , int tam)
{
    int i;
    int contadorJuan=0;
    char nombres="Juan";

    for(i=0;i<tam ; i++)
    {
        if(listadoAlumnos[i].nombre == nombres)
        {
            contadorJuan++;
        }
        printf("Se han encontrar %s alumnos con el nombre juan" , contadorJuan);
    }
}

void busquedaP(sAlumno listadoAlumnos[] , int tam)
{
    int i;

    for(i=0; i < tam-1; i++)
    {
        printf("Los alumnos cuyo nombre incian con P son: ");
        if(listadoAlumnos[i].nombre == 'P')
        {
            printf("%s" , listadoAlumnos[i].nombre);
        }
    }
}

