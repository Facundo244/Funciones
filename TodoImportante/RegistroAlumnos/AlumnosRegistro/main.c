#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"
#define T 2

//      -- TAREA --
//-ordenas nombre
//-muetre los alumnos aprobados (notas>6)
//-muetre los alumnos que se llaman Juan
//-muestre los alumnos cuyo nombre comienzan con P
//-el alumno con mas nota (sabiendo que puede ser mas que uno)
//"El mas mediocre legajo=100 nota=5 se llama pepe medir 1.75"
//-Ingresa un legajo y permitir la modificacion de la nota
//(transformar la carga de datos en una carga aleatoria)
//------------------------------------------------------------------
int main()
{
    int legajos[T];
    char nombres[T][21]; //----> 10 nombres y 20 caracteres
    int notas[T];
    float alturas[T];
    int opcion=0;

    do
    {
        printf("\n ******************************************** ");
        printf("\n          Registro de alumnos                 ");
        printf("\n                                              ");
        printf("\n      1.Ingresar Alumnos                      ");
        printf("\n                                              ");
        printf("\n      2. Ordenar por nombre y Mostrar Alumnos ");
        printf("\n                                              ");
        printf("\n      3.Alumnos aprobados                     ");
        printf("\n                                              ");
        printf("\n      4.Alumnos que se llaman Juan            ");
        printf("\n                                              ");
        printf("\n      5.Alumnos que empiecen con P            ");
        printf("\n                                              ");
        printf("\n      6.Alumno Mediocre                       ");
        printf("\n                                              ");
        printf("\n      7.Modificar nota a partir de legajo     ");
        printf("\n                                              ");
        printf("\n      8.Alumno/s con nota mas alta            ");
        printf("\n                                              ");
        printf("\n                                              ");
        printf("\n   9.Salir                                   ");
        printf("\n                                              ");
        printf("\n                                              ");
        printf("\n Ingrese una opcion (1/10) : ");
        scanf("%d" , & opcion);
        printf("\n ********************************************** ");



        switch(opcion)
        {
            case 1:
                system("cls");
                cargarAlumnos(legajos, nombres, notas, alturas, T);
                break;

            case 2:
                system("cls");
                alfabeticamente(nombres,T);
                mostrarAlumnos(legajos , nombres,notas,alturas,T);
                break;

            case 3:
                system("cls");
                break;


            case 9:
                opcion = 9;
                break;

        }
        system("pause");
    }
    while(opcion!=9);
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
