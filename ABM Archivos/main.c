#include <stdio.h>
#include <stdlib.h>

int GuardarArrayEnTXT(int[] , int , char[]);
int GuardarArrayEnBIN(int[] , int , char[]);

int main()
{

    int array[10] ={1 , 2 , 3, 4, 5, 6, 7, 8, 9,10};
    GuardarArrayEnTXT(array , 10 , "Archivo.txt");
    //GuardarArrayEnBIN(array , 10 , "Archivo.bin");
    mostrarArrayEnTXT(10 , "Archivo.txt");

    return 0;
}


int GuardarArrayEnBIN(int  array[],int tam,char nombre[])
{
     FILE* pArchivo;
     int i;

     pArchivo = fopen("Archivo.bin" , "wb");


     for(i=0; i <tam ; i++)
     {
         fwrite(array[i] , tam , 1 , pArchivo);
     }
     fclose(pArchivo);

     return 0;

}

int GuardarArrayEnTXT(int array[], int tam , char nombre[])
{
     FILE* pArchivo;
     int i;
     pArchivo = fopen( nombre , "w");

     for(i=0 ; i<tam ; i++)
     {
         fprintf(pArchivo , "%d \n" , array[i] );
     }
     fclose(pArchivo);

    return 0;
}

int mostrarArrayEnTXT(int tam , char nombre[])
{
    FILE* pArchivo;
    int i=0;
    char x[tam][50];

    printf("%s" , nombre);

    pArchivo = fopen(nombre , "r");

    for(i=0 ; i<tam ; i++)
    {
        fgets(x[i] , 50 , pArchivo);
        i++;
    }
    for(i=0 ; i<tam ; i++)
    {
        puts(x[i]);
    }

    fclose(pArchivo);
    return 0;
}

/*
    FILE* pArchivo;
    ePersona unaPersona;

    pArchivo = fopen("Archivo.txt" , "w");

    printf("Ingrese una id  ")
    return 0;
    */
//------LEER EL ARCHIVO DE TEXTO-----
 /*pArchivo = fopen("Salida.txt" ,"r");
    fgets(texto , 50 , pArchivo);
    fclose(pArchivo);
    puts(texto);
*/
//-----ESCRIBIR ARCHIVO DE TEXTO-----
    /*FILE* pArchivo;
    pArchivo = fopen("Salida.txt","w");

    fprintf(pArchivo , "Hello World");
    fclose(pArchivo);
  */

/*
-------Poner un texto determinado , y que aparezca en en la smima linea-------------

  FILE* pArchivo;
    char  texto[50];
    char cadena[50] = "Bruno";
    char otro[50];


    pArchivo = fopen("Salida.txt","w");
    fprintf(pArchivo , "Hola %s , como estas? \n Todo bien" ,  cadena);
    fclose(pArchivo);



    pArchivo = fopen("Salida.txt" ,"r");
    fgets(texto , 50 , pArchivo);
    fgets(otro , 50 , pArchivo);
    fclose(pArchivo);
    puts(texto);
    puts(otro);
    */
    /*
    FILE* pArchivo;
    char texto [3][50];
    int i=0;

    pArchivo = fopen("saludo.txt", "w");
    fprintf(pArchivo, "Hola\nQue\nHace");
    fclose(pArchivo);

    pArchivo = fopen("saludo.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(texto[i], 50, pArchivo);
        i++;
    }
    for(i=0; i<3; i++)
    {
        puts(texto[i]);
    }
    fclose(pArchivo);
    */
