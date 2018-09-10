#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inicialesMays(char cadena[] , char fuente[]);

int main()
{
    char nombre[45];
    char apellido[45];


    inicialesMays( nombre, "facundo" );
    inicialesMays( apellido, "morcillo" );

    printf("%s , %s" , nombre , apellido);


    return 0;
}
void inicialesMays( char cadena[], char fuente[] )
{
    char caracter = ' ';
    int i;

    for (i=0; fuente[i] != '\0'; i++) {
        if (caracter == ' ' && fuente[i] >= 'a' && fuente[i] <= 'z')
            cadena[i] = toupper( fuente[i] );
        else
            cadena[i] = fuente[i];
        caracter = fuente[i];
    }
    cadena[i] = '\0';
}
