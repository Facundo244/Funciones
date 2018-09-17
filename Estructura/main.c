#include <stdio.h>
#include <stdlib.h>
#define A 3

typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
}sAlumno;

void cargarListadoDeAlumnos(sAlumno[], int);
void mostrarListadoDeAlumnos(sAlumno[], int);
void mostrarUnAlumno(sAlumno);
sAlumno cargarUnAlumno();

int main()
{
    sAlumno listadoMain[A];
    cargarListadoDeAlumnos(listadoMain, A);
    system("cls");
    mostrarListadoDeAlumnos(listadoMain, A);

    return 0;
}

sAlumno cargarUnAlumno()
{
    sAlumno miAlumno;

    system("cls");
    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    fflush(stdin);
    printf("Ingrese nombre: ");
    gets(miAlumno.nombre);
    fflush(stdin);
    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);
    fflush(stdin);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);
    fflush(stdin);

    return miAlumno;
}
void mostrarUnAlumno(sAlumno unAlumno)
{
    printf("%d - - %s - - %f - - %d\n", unAlumno.legajo, unAlumno.nombre,
                                        unAlumno.altura, unAlumno.nota);
}
void cargarListadoDeAlumnos(sAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=cargarUnAlumno();
    }
}
void mostrarListadoDeAlumnos(sAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarUnAlumno(listado[i]);
    }
}
