#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//hacer una bibliteca con herramientas (operaciones) no se puede tener printf en el parcial
//atol atoi = convierte a entero
//atof = convierte en flotante
//isdigit

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];
    char buffer[1024];
    int i;


    printf("Ingrese nombre: ");            //desde el print hasta el fin del while tiene que ser una funcion
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) > 19)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(buffer);

    }

    strcpy(nombre , buffer);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) > 19)
    {
        printf("Ingrese apellido: ");
        fflush(stdin);
        gets(buffer);

    }

    strcpy(apellido , buffer);

    strcpy(nombreCompleto , apellido);
    strcat(nombreCompleto , ", ");
    strcat(nombreCompleto , nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]=toupper(nombreCompleto[0]);


    for(i=0; i<strlen(nombreCompleto) ; i++)
    {
        if(nombreCompleto[i] == ' ')        //if(isspace(nombreCompleto[i])
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
        }

    }

    puts(nombreCompleto);


    return 0;
}
