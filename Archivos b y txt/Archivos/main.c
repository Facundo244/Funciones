#include <stdio.h>
#include <stdlib.h>

int main()
{


    return 0;

}


/*
//------LEER EL ARCHIVO DE TEXTO-----
 pArchivo = fopen("Salida.txt" ,"r");
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
