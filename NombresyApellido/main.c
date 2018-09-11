#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inicialesMays(char cadena[]);

int main()
{
    char nombre[45];
    char apellido[45];

    printf("Ingrese su nombre: ");
    fflush(stdin);
    scanf("%s" , nombre);


    printf("Ingrese su apellido: ");
    fflush(stdin);
    scanf("%s" , apellido);

    inicialesMays(apellido);
    inicialesMays(nombre);

    printf("%s , %s" , nombre , apellido);

    return 0;
}
void inicialesMays( char cadena[])
{
   int i,aux;
    for (i=0;i<100;i++){
        if (i==0 && (isspace(i)==0)){
            aux =toupper(cadena[i]);
            cadena[i]=aux;
        }
        else if(isspace(cadena[i]) == 0 && isspace(cadena[i-1])==1){
            aux = toupper(cadena[i]);
            cadena[i] = aux;
        }
        else{
            aux = tolower(cadena[i]);
            cadena[i]=aux;
        }
    }
}
