#include <stdio.h>
#include <stdlib.h>
#include "Films.h"
#include "Director.h"





int menuMain()
{
    int opcion=0;
    do
    {
            printf("\n      *********************************************   *********************************************");
            printf("\n      ||                                         ||   ||                                         ||");
            printf("\n      ||          .:FILM REGISTRATION:.          ||   ||        .:DIRECTOR REGISTRATION:.        ||");
            printf("\n      ||                                         ||   ||                                         ||");
            printf("\n      *********************************************   *********************************************");
            printf("\n      ||                                         ||   ||                                         ||");
            printf("\n      ||          1. MENU FILMS                  ||   ||      2. MENU DIRECTOR                   ||");
            printf("\n      ||                                         ||   ||                                         ||");
            printf("\n      ||                                         ||   ||                                         ||");
            printf("\n      ||                                         ||   ||                                         ||");
            printf("\n      ||   3.SALIR                               ||   ||  3.SALIR                                ||");
            printf("\n      *********************************************   *********************************************");
            printf("\n                                                                                                   ");
            printf("\n Ingrese una opcion (1/3): ");
            scanf("%d" , & opcion);



        switch(opcion)
        {
            case 1:
                system("cls");
                menuFilms(listadoFilm ,  tam );
                break;

            case 2:
                system("cls");
                menuDirector(listadoDirector ,  tam );
                break;


        }

    }

}
