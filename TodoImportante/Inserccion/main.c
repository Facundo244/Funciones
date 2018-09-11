#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

void cargarAlumnos(int[] , char[][21] , int[] , float[] , int);
void mostrarAlumnos(int[] , char[][21] , int[] , float[] , int);

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


    cargarAlumnos(legajos , nombres , notas , alturas , T);
    mostrarAlumnos(legajos , nombres , notas , alturas ,T);


    return 0;

}

void cargarAlumnos(int legajos[] , char nombres[][21] , int notas[] , float alturas[] , int i )
{
   for(i=0 ; i<T; i++)
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

void mostrarAlumnos(int legajos[] , char nombres[][21] , int notas[] , float alturas[] , int i)
{
    printf("Legajo  Nombre   Nota   Altura \n"); //---> tambien podria ser printf("%4s %20s% 2s %5s" ,"Legajo" , "Nombre" , "Nota" , "Altura" \n);
    for(i=0 ; i<T ; i++)
    {
        printf("%4d    %4s    %4d    %4f\n" , legajos[i] , nombres[i], notas[i] , alturas[i]);
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
