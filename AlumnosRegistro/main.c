#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"


int main()
{
    sAlumno listadoAlumnos[TAM];
    inicializarArrayIlogicamente(listadoAlumnos);
    menu(listadoAlumnos);

    return 0;


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
