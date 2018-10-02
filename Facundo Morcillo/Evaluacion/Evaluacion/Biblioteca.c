#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"



void menu(sFilm listadoFilm[])
{
    int opcion=0;
    do
    {
        printf("\n          Registro de Peliculas               ");
        printf("\n");
        printf("\n   1.Alta pelicula                            ");
        printf("\n");
        printf("\n   2.Mostrar listado                          ");
        printf("\n");
        printf("\n   3.Salir                                    ");
        printf("\n");
        printf("\n");
        printf("\n Ingrese una opcion (1/2) : ");
        scanf("%d" , & opcion);
        printf("\n ********************************************** ");



        switch(opcion)
        {
            case 1:
                system("cls");
                cargarLibre(listadoFilm);
                break;

            case 2:
                system("cls");
                mostrarListado(listadoFilm);
                break;

            case 3:
                system("cls");
                break;

        }
        system("pause");
    }
    while(opcion!=3);
    {
    }

}
void cargarFilm(sFilm listadoFilm[] , int i)
{
    printf("\n ingrese el ID del director: ");
    scanf("%d" , &listadoFilm[i].id);
    printf("\n Ingrese un titulo de una pelicula: ");
    scanf("%s" , &listadoFilm[i].titulo);
    printf("\n Ingrese el anio de la pelicula: ");
    scanf("%d" , &listadoFilm[i].year);
    printf("\n Ingrese la nacionalidad: ");
    scanf("%s" , &listadoFilm[i].nacionalidad);
    printf("\n Ingrese el director de la pelicula: ");
    scanf("%s" , &listadoFilm[i].director);

    system("cls");
    listadoFilm[i].estado = OCUPADO;
}

void cargarLibre(sFilm listadoFilm[])
{
    int i;
    i=buscarLibre(listadoFilm);

    if(i == LIBRE)
    {
        system("cls");
        printf("No se encontro un lugar libre!\n");
        printf("\n");
        system("pause");
    }
    else{

        cargarFilm(listadoFilm , i);
    }

}



void inicializarArrayIlogicamente(sFilm listadoFilm[])
{
    int i;

    for(i=0; i<TAM; i++)
    {
        listadoFilm[i].estado = LIBRE;
    }
}

int buscarLibre(sFilm listadoFilm[])
{
     int retorno = -1; //FLAG
     int i;

        for (i=0; i<TAM; i++)
        {
            if (listadoFilm[i].estado == LIBRE)
            {
                retorno = i;
                break;

            }
        }
    return retorno;
}



void mostrarUnaPelicula(sFilm listadoFilm)
{

    printf("%8d %13s %11d %12s %12s\n\n", listadoFilm.id, listadoFilm.titulo,
                                 listadoFilm.year, listadoFilm.nacionalidad , listadoFilm.director);
}


int mostrarListado(sFilm listadoFilm[])
{
    int retorno = -1;
    int i;

    system("cls");
    printf("%10s %10s %10s %15s %12s \n\n", "ID Director" , "Titulo" ,  "Anio" ,  "Nacionalidad" , "Director");

    if(TAM > 0 && listadoFilm != NULL)
    {
        retorno = 0;
        for(i=0; i<TAM; i++)
        {
            if(listadoFilm[i].estado==OCUPADO)
            {

                mostrarUnaPelicula(listadoFilm[i]);
            }
        }
    }
    return retorno;
}








