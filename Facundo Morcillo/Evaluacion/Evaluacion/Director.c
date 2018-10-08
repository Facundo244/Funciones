#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Director.h"



void menuDirector(sDirector listadoDirector[] , int tam )
{
    int opcion=0;
    int validacion = 0;

    do
    {
            printf("\n      *********************************************");
            printf("\n      ||                                         ||");
            printf("\n      ||        .:DIRECTOR REGISTRATION:.        ||");
            printf("\n      ||                                         ||");
            printf("\n      *********************************************");
            printf("\n      ||      1. ALTA DIRECTOR                   ||");
            printf("\n      ||                                         ||");
            printf("\n      ||      2. MOSTRAR DIRECTOR                ||");
            printf("\n      ||                                         ||");
            printf("\n      ||      3. REMOVER DIRECTOR                ||");
            printf("\n      ||                                         ||");
            printf("\n      ||      4.CONSULTAR DIRECTOR               ||");
            printf("\n      ||                                         ||");
            printf("\n      ||   5.Salir                               ||");
            printf("\n      *********************************************");
            printf("\n Ingrese una opcion (1/4): ");
            scanf("%d" , & opcion);

            switch(opcion)
            {
                case 1:
                    system("cls");
                    validacion = 1;
                    cargarDirector(listadoDirector, tam);
                    break;
                case 2:
                    if(validacion == 0)
                    {
                        system("cls");
                        printf("    *--------------------------------------*     \n");
                        printf("    SE NECESITA LA CARGA DE ALGUN DIRECTOR       \n");
                        printf("    *--------------------------------------*      \n");
                        break;

                    }
                    else
                    {
                        system("cls");
                        mostrarListadoDirector(listadoDirector,  tam);
                        break;
                    }
                case 3:
                    if(validacion == 0)
                    {
                        system("cls");
                        printf("    *--------------------------------------*     \n");
                        printf("    SE NECESITA LA CARGA DE ALGUN DIRECTOR       \n");
                        printf("    *--------------------------------------*      \n");
                        break;

                    }
                    else
                    {
                        system("cls");
                        removeDirector(listadoDirector, tam);
                        break;

                    }
                case 4:
                    system("cls");
                    filmConsultaDirector(listadoDirector,  tam);
                    break;

                case 5:
                    system("cls");
                    opcion = 5;
                    break;
            }

            system("pause");

        }
        while(opcion!=5);
        {
        }

}

int cargarDirector(sDirector listadoDirector[],  int tam)
{
    char nombre[42];
    int indice = traerIndiceVacioDirector(listadoDirector , tam);

    system("cls");
    fflush(stdin);
    printf("Ingrese nombre del director: ");
    gets(nombre);
    fflush(stdin);

    if((buscarNombreDirector(listadoDirector, nombre, tam)) == LIBRE)
    {
        strcpy(listadoDirector[indice].name, nombre);
        printf("\n *-Fecha de nacimiento-*  \n");


        printf("\n Ingrese el dia de nacimiento: ");
        scanf("%d", &listadoDirector[indice].fechaDeNacimiento.day);

        printf("\n Ingrese el mes de nacimiento: ");
        scanf("%d", &listadoDirector[indice].fechaDeNacimiento.month);

        printf("\n Ingrese el anio de nacimiento: ");
        scanf("%d", &listadoDirector[indice].fechaDeNacimiento.year);


        fflush(stdin);
        printf("\n Ingrese tu nacionalidad: ");
        gets(listadoDirector[indice].nacionalidad);


        listadoDirector[indice].estado = OCUPADO;
    }
    else
    {
        system("cls");
        printf("\n Este nombre ya existe en la base de datos \n");
    }
    return 1;
}


int traerIndiceVacioDirector(sDirector listadoDirector[] , int tam)
{
    int retorno = -1;
    int i;

    if(listadoDirector != NULL && tam>0)
    {
        for(i=0 ; i<tam ; i++)
        {
            if(listadoDirector[i].estado)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

void inicializarArrayIlogicamenteDirector(sDirector listadoDirector[] , int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        listadoDirector[i].estado = LIBRE;
    }
}

void mostrarUnDirector(sDirector listadoDirector)
{

    printf("%13s %10s  %10d/%d/%d \n\n", listadoDirector.name, listadoDirector.nacionalidad,
                                 listadoDirector.fechaDeNacimiento.day, listadoDirector.fechaDeNacimiento.month , listadoDirector.fechaDeNacimiento.year);
}


int mostrarListadoDirector(sDirector listadoDirector[] , int tam)
{
    int retorno = -1;
    int i;

    system("cls");
    printf("%15s %13s %12s \n\n", "Director" ,  "Nacionalidad" ,  "Nacimiento" );

    if(tam > 0 && listadoDirector != NULL)
    {
        retorno = 0;
        for(i=0; i<tam; i++)
        {
            if(listadoDirector[i].estado==0)
            {

                mostrarUnDirector(listadoDirector[i]);
            }
        }
    }
    return retorno;
}

void removeDirector(sDirector listadoDirector[], int tam)
{
    char nombre[21];
    int indice;
    char seguir;
    int bandera = 0;

    mostrarListadoDirector(listadoDirector, tam);

    printf("Ingrese el nombre del director a remover: ");
    fflush(stdin);
    gets(nombre);

    indice = buscarNombreDirector(listadoDirector, nombre, tam);

    if(indice >= 0)
    {
        bandera =1;
        printf("\n\n ¿ Desea dar de baja permanentemente a este empleado ?(s/n): ");
        printf("\n\n");
        printf("%15s %13s %12s \n\n", "Director" ,  "Nacionalidad" ,  "Nacimiento" );
        mostrarUnDirector(listadoDirector[indice]);
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
        listadoDirector[indice].estado=LIBRE;

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

int buscarNombreDirector(sDirector listadoDirector[], char nombre[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(strcmp(listadoDirector[i].name, nombre) == 0)

        {
            retorno = i;
        }
    }
    return retorno;
}



void filmConsultaDirector(sDirector listadoDirector[], int tam)  //Consulta Director b)
{

    char Directoraux[21];
    int indice;
    char seguir;
    int bandera = 0;

    mostrarListadoSoloDirector(listadoDirector, tam);

    printf("\n Ingrese el Director a consultar: ");
    fflush(stdin);
    gets(Directoraux);

    indice = buscarNombreDirector(listadoDirector , Directoraux , tam);

    if(indice >= 0)
    {
        bandera =1;
        printf("\n\n ¿ Desea consultar por este director ?(s/n): ");
        printf("\n\n");
        seguir = getch();

    if(seguir == 's')
    {
        system("cls");
        printf("%15s %13s %12s \n\n", "Director" ,  "Nacionalidad" ,  "Nacimiento" );
        mostrarUnDirector(listadoDirector[indice]);
    }

    }
    if(bandera==0)
    {
        system("cls");
        printf("\n No se encuentra el nombre del director en la base de datos \n");
    }

}

void mostrarSoloDirector(sDirector listadoDirector)
{

    printf("%8s \n\n", listadoDirector.name);
}


int mostrarListadoSoloDirector(sDirector listadoDirector[] , int tam)
{
    int retorno = -1;
    int i;

    system("cls");
    printf("%10s  \n\n", "Director");

    if(tam > 0 && listadoDirector != NULL)
    {
        retorno = 0;
        for(i=0; i<tam; i++)
        {
            if(listadoDirector[i].estado==OCUPADO)
            {

                mostrarSoloDirector(listadoDirector[i]);
            }
        }
    }
    return retorno;
}
