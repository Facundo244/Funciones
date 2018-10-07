#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Films.h"


void menuFilms(sFilm listadoFilm[] , int tam)
{
    int opcion=0;
    int validacion = 0;
    do
    {
            printf("\n      *********************************************");
            printf("\n      ||                                         ||");
            printf("\n      ||          .:FILM REGISTRATION:.          ||");
            printf("\n      ||                                         ||");
            printf("\n      *********************************************");
            printf("\n      ||                                         ||");
            printf("\n      ||      1. ALTA PELICULA                   ||");
            printf("\n      ||                                         ||");
            printf("\n      ||      2. MOSTRAR ALTA                    ||");
            printf("\n      ||                                         ||");
            printf("\n      ||      3. MODIFICAR                       ||");
            printf("\n      ||                                         ||");
            printf("\n      ||      4. BAJA PELICULA                   ||");
            printf("\n      ||                                         ||");
            printf("\n      ||                                         ||");
            printf("\n      ||                                         ||");
            printf("\n      ||   5.Salir                               ||");
            printf("\n      *********************************************");
            printf("\n                                                    ");
            printf("\n Ingrese una opcion (1/5): ");
            scanf("%d" , & opcion);



        switch(opcion)
        {
            case 1:
                system("cls");
                validacion = 1;
                cargarFilm(listadoFilm , tam);
                break;

            case 2:
                if(validacion == 0)
                {
                    system("cls");
                    printf("    *--------------------------------------*     \n");
                    printf("    SE NECESITA LA CARGA DE ALGUNA PELICULA       \n");
                    printf("    *--------------------------------------*      \n");
                    break;

                }
                else
                {
                    system("cls");
                    mostrarListado(listadoFilm , tam);
                    break;
                }
            case 3:
                if(validacion == 0)
                {
                    system("cls");
                    printf("    *--------------------------------------*     \n");
                    printf("    SE NECESITA LA CARGA DE ALGUNA PELICULA       \n");
                    printf("    *--------------------------------------*      \n");
                    break;

                }
                else
                {
                    system("cls");
                    filmModify(listadoFilm , tam);
                    break;
                }
            case 4:
                if(validacion == 0)
                {
                    system("cls");
                    printf("    *--------------------------------------*     \n");
                    printf("    SE NECESITA LA CARGA DE ALGUNA PELICULA       \n");
                    printf("    *--------------------------------------*      \n");
                    break;

                }
                else
                {
                    system("cls");
                    filmRemoveById(listadoFilm, tam);
                    break;
                }
            case 5:
                system("cls");
                opcion =5;
        }
        system("pause");
    }
    while(opcion!=5);
    {
    }

}

int cargarFilm(sFilm listadoFilm[] , int tam)
{
     sFilm auxFilm;
     int retorno = 0;
     int indice = traerIndiceVacio(listadoFilm , tam);

     if(indice > -1)
     {
         printf(" \n Ingrese ID de la pelicula: ");
         fflush(stdin);
         scanf("%d" , &auxFilm.id);

         do
         {
             printf(" \n Ingrese titulo de la pelicula: ");
             fflush(stdin);
             gets(auxFilm.titulo);
         }while(strlen(auxFilm.titulo)==0);

         printf(" \n Ingrese anio de la pelicula: ");
         fflush(stdin);
         scanf("%d" , &auxFilm.year);

         do
         {
             printf(" \n Ingrese nacionalidad de la pelicula: ");
             fflush(stdin);
             gets(auxFilm.nacionalidad);

         }while(strlen(auxFilm.nacionalidad)==0);

         do
         {
             printf(" \n Ingrese director de la pelicula: ");
             fflush(stdin);
             gets(auxFilm.director);

         }while(strlen(auxFilm.director)==0);

         auxFilm.id= auxFilm.id;
         auxFilm.estado = OCUPADO;
         listadoFilm[indice] = auxFilm;

         retorno = 1;

     }
     else
     {
        system("cls");
        printf("    *--------------------------------------*     \n");
        printf("        NO HAY  ESPACIO PARA MAS ALTAS           \n");
        printf("    *--------------------------------------*     \n");
     }
     return retorno;

}








void inicializarArrayIlogicamenteFilms(sFilm listadoFilm[] , int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        listadoFilm[i].estado = LIBRE;
    }
}




void mostrarUnaPelicula(sFilm listadoFilm)
{

    printf("%8d %13s %11d %12s %12s\n\n", listadoFilm.id, listadoFilm.titulo,
                                 listadoFilm.year, listadoFilm.nacionalidad , listadoFilm.director);
}


int mostrarListado(sFilm listadoFilm[] , int tam)
{
    int retorno = -1;
    int i;

    system("cls");
    printf("%10s %10s %10s %15s %12s \n\n", "ID Director" , "Titulo" ,  "Anio" ,  "Nacionalidad" , "Director");

    if(tam > 0 && listadoFilm != NULL)
    {
        retorno = 0;
        for(i=0; i<tam; i++)
        {
            if(listadoFilm[i].estado==OCUPADO)
            {

                mostrarUnaPelicula(listadoFilm[i]);
            }
        }
    }
    return retorno;
}


void filmModify(sFilm listadoFilm[] , int tam)
{
    int auxid;
    int i;
    int opcion;
    char validar;

    mostrarListado(listadoFilm , tam);

    printf("Ingrese el ID de la Pelicula: ");
    scanf("%d" , &auxid);

    for(i=0 ; i<tam ; i++)
    {
        if(auxid == listadoFilm[i].id)
        {
            mostrarListado(listadoFilm , tam);
            printf("Desea modificar algun parametro ?  s / n ");
            validar=getch();
            if(validar == 's')
            {
                do
                {
                    printf("\n      *********************************************");
                    printf("\n      ||                                         ||");
                    printf("\n      ||          QUE DESEA MODIFICAR ?          ||");
                    printf("\n      ||                                         ||");
                    printf("\n      *********************************************");
                    printf("\n      ||                                         ||");
                    printf("\n      ||      1. TITULO                          ||");
                    printf("\n      ||                                         ||");
                    printf("\n      ||      2. ANIO                            ||");
                    printf("\n      ||                                         ||");
                    printf("\n      ||      3. NACIONALIDAD                    ||");
                    printf("\n      ||                                         ||");
                    printf("\n      ||      4. DIRECTOR                        ||");
                    printf("\n      ||                                         ||");
                    printf("\n      ||  5.SALIR                                ||");
                    printf("\n      *********************************************");
                    printf("\n");
                    printf("\n          Ingrese una opcion (1/5): ");
                    scanf("%d" , & opcion);

                    switch(opcion)
                    {
                        case 1:
                            system("cls");
                            fflush(stdin);
                            printf("Ingrese nuevo titulo: ");
                            gets(listadoFilm[i].titulo);
                            printf("\n\n");
                            mostrarListado(listadoFilm , tam);
                            break;
                        case 2:
                            system("cls");
                            fflush(stdin);
                            printf("Ingrese nuevo año: ");
                            scanf("%d" , &listadoFilm[i].year);
                            printf("\n\n");
                            mostrarListado(listadoFilm , tam);
                            system("pause");
                            break;
                        case 3:
                            system("cls");
                            fflush(stdin);
                            printf("Ingrese nueva nacionalidad: ");
                            gets(listadoFilm[i].nacionalidad);
                            printf("\n\n");
                            mostrarListado(listadoFilm , tam);
                            system("pause");
                            break;
                        case 4:
                            system("cls");
                            fflush(stdin);
                            printf("Ingrese nuevo director: ");
                            gets(listadoFilm[i].director);
                            printf("\n\n");
                            mostrarListado(listadoFilm , tam);
                            system("pause");
                            break;
                        case 5:
                            opcion = 5;
                            break;
                        default:
                            printf("Ingrese una opcion valida");

                    }



                }
                while(opcion!=5);
                {
                }
            }

        }

    }
}

int traerIndiceVacio(sFilm listadoFilm[] , int tam)
{
    int retorno = -1;
    int i;

    if(listadoFilm != NULL && tam>0)
    {
        for(i=0 ; i<tam ; i++)
        {
            if(listadoFilm[i].estado)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}



void filmRemoveById(sFilm listadoFilm[], int tam)
{

    int idaux;
    int indice;
    char seguir;
    int bandera = 0;

    mostrarListado(listadoFilm, tam);

    printf("\n Ingrese el ID de la pelicula a remover ");
    scanf("%d" , & idaux);

    indice = buscarFilmID(listadoFilm, idaux, tam);

    if(indice >= 0)
    {
        bandera =1;
        printf("\n\n ¿ Desea dar de baja permanentemente a esta pelicula ?(s/n): ");
        printf("\n\n");
        printf("%10s %10s %10s %15s %12s \n\n", "ID Director" , "Titulo" ,  "Anio" ,  "Nacionalidad" , "Director");
        mostrarUnaPelicula(listadoFilm[indice]);
        seguir = getch();

    if(seguir == 's')
    {
        printf("   ----------------------------------------------    \n");
        printf("            Removiendo la Pelicula...         \n");
        printf("   ----------------------------------------------    \n");
        system("pause");
        system("cls");
        printf("   ----------------------------------------------   \n");
        printf("            Se removio Exitosamente!!                \n");
        printf("   ----------------------------------------------    \n");
        listadoFilm[indice].estado=LIBRE;

    }
    else if (seguir != 's')
    {
        printf("\n Precione la tecla s para salir al menu \n");
    }

    }
    if(bandera==0)
    {
        printf("\n No se encuentra el nombre del director en la base de datos \n");
    }

}



int buscarFilmID(sFilm listadoFilm[], int id, int tam)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(listadoFilm[i].id == id)

        {
            retorno = i;
        }
    }
    return retorno;
}

