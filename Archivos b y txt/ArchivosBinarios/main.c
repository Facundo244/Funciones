#include <stdio.h>
#include <stdlib.h>
//-------ARCHIVOS  BINARIOS -------------
typedef struct
{
    int x;
    char y;

}sBinario;

int main()
{
    FILE* pArchivo;
    sBinario dato = {1 , 'c'};
    sBinario d;

    pArchivo = fopen("archivo.bin" , "wb");
    fwrite(&dato , sizeof(sBinario) , 1 , pArchivo);
    fclose(pArchivo);

    pArchivo = fopen("archivo.bin" , "rb");
    fread(&d , sizeof(sBinario) , 1 , pArchivo);
    fclose(pArchivo);

    printf("%d -- %c " , d.x , d.y);



    return 0;
}
/*
------------ESCRIBIR UNA ESTRUCTURA CON ARCHIVOS---------------
    FILE* pArchivo;
    sBinario dato = {1 , 'c'};
    sBinario d;

    pArchivo = fopen("archivo.bin" , "wb");
    fwrite(&dato , sizeof(sBinario) , 1 , pArchivo);
    fclose(pArchivo);

    pArchivo = fopen("archivo.bin" , "rb");
    fread(&d , sizeof(sBinario) , 1 , pArchivo);
    fclose(pArchivo);

    printf("%d -- %c " , d.x , d.y);
*/
