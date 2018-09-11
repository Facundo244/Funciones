#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[20];
    char cadena2[50]= "gato";
    int estado;

    estado = strcmp(cadena2 , "armadillo"); //la G mayuscula tene un codigo
                                            // ascii distinto a la g min


    printf("%d" , estado);
    return 0;
}

    //printf("Ingrese un texto: ");
    //fflush(stdin);
    //scanf("%s" , & cadena);

    //gets(cadena);   //solo recibe punter a char y se utiliza para leer una cadenas
                    // de caracteres
    //printf("%s" , cadena);
    //----------------------------------------
    //strcpy(cadena , "perro")
    //cadena = "perro";  //destino = "origen"
    //cantidad = strlen(cadena); //contar caracteres depende que tengas en
                                // vector[20]= "perro" , ahi te cuenta 5
    //printf("%d" , cantidad);

    //strcimp devuelve igual si hay mayuscula o minuscula , no le importa la mayus o min
    //len , para declarar el largo 0
    //strupr(cadena2) //mayuscula , puntero a char
    //strlwr(cadena2)  // minuscula
    //puts(cadena2) //muestra por consola pero no se puede poner un texto
    //strcat(cadena2 , cadena) //puede concatenar
    //-------------------------------------------
    //strncpy(cadena1,cadena2,4) ---> el 4 es hasta donde queres mostrar que seria de cadena1
    //ej char cadena[5];
    //   chat cadena2[100] = "Hola como estas?";
    //  strncpy(cadena1 , cadena2 ,4);
    // esto solo pone por pantalla hola que seria las 4 caracteres
