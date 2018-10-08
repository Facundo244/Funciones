#include <stdio.h>
#include <stdlib.h>
#include "Films.h"
#include "Director.h"
#define FILMS 1000
#define DIRECTOR 500



int main()
{
    sFilm listadoFilm[FILMS];
    sDirector listadoDirector[DIRECTOR];
    inicializarArrayIlogicamenteDirector(listadoDirector , DIRECTOR);
    inicializarArrayIlogicamenteFilms(listadoFilm , FILMS);

    int opcion=0;
    do
    {
    printf("\n **************************************  **************************************");
    printf("\n ||                                   || ||                                  ||");
    printf("\n ||    .:FILM REGISTRATION:.          || ||  .:DIRECTOR REGISTRATION:.       ||");
    printf("\n ||                                   || ||                                  ||");
    printf("\n **************************************  **************************************");
    printf("\n ||                                   || ||                                  ||");
    printf("\n ||          1. FILMS MENU            || ||    2. DIRECTOR MENU              ||");
    printf("\n ||                                   || ||                                  ||");
    printf("\n ||                                   || ||                                  ||");
    printf("\n ||                                   || ||                                  ||");
    printf("\n ||   3.SALIR                         || ||                                  ||");
    printf("\n **************************************  **************************************");
    printf("\n                                                                               ");
    printf("\n Ingrese una opcion (1/3): ");
    scanf("%d" , & opcion);



        switch(opcion)
        {
            case 1:
                system("cls");
                menuFilms(listadoFilm ,  FILMS );
               break;

            case 2:
                system("cls");
                menuDirector(listadoDirector ,  DIRECTOR);
                break;
            case 3:
                opcion =3;
                break;


        }
        system("pause");
    }
    while(opcion!=3);
    {
    }

}
