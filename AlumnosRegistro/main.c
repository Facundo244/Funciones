#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"
#define T 3


int main()
{
    sAlumno listadoAlumnos[T];
    int opcion=0;

    do
    {
        printf("\n ******************************************** ");
        printf("\n          Registro de alumnos                 ");
        printf("\n");
        printf("\n      1.Ingresar Alumnos                      ");
        printf("\n");
        printf("\n      2. Mostrar Alumnos                      ");
        printf("\n");
        printf("\n      3. Ordenar por nombre                   ");
        printf("\n ");
        printf("\n      4.Alumnos aprobados                     ");
        printf("\n");
        printf("\n      5.Alumnos que se llaman Juan            ");
        printf("\n");
        printf("\n      6.Alumnos que empiecen con P            ");
        printf("\n");
        printf("\n      7.Alumno Mediocre                       ");
        printf("\n");
        printf("\n      8.Modificar nota a partir de legajo     ");
        printf("\n");
        printf("\n      9.Alumno/s con nota mas alta            ");
        printf("\n");
        printf("\n                                              ");
        printf("\n   10.Salir                                    ");
        printf("\n");
        printf("\n");
        printf("\n Ingrese una opcion (1/10) : ");
        scanf("%d" , & opcion);
        printf("\n ********************************************** ");



        switch(opcion)
        {
            case 1:
                system("cls");
                cargarAlumnos(listadoAlumnos , T);
                break;

            case 2:
                system("cls");
                mostrarAlumnos(listadoAlumnos , T);
                break;

            case 3:
                system("cls");
                ordenarNombre(listadoAlumnos , T);
                mostrarAlumnos(listadoAlumnos , T);
                break;
            case 4:
                mostrarAlumnosAprobados(listadoAlumnos , T);
                break;
            case 5:
                busquedaJuan(listadoAlumnos , T);
                break;
            case 6:
                busquedaP(listadoAlumnos , T);
                break;
            case 9:
                opcion = 10;
                break;

        }
        system("pause");
    }
    while(opcion!=10);
    {
        return 0;
    }


}










/*void insertion(data[] , int len[])
{
    int i,j;
    int temp;
    for(i=1 ; i<len ; i++)
    {
        temp = data[i];
        j= i-1;

        while(j>=0 && temp < data[j])
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1]=temp;
        }
}
*/
    /*producto:

        marca
        precio
        vencimiento
        dimensiones
        tipo
        codigo
    */
