#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"



void menu(sAlumno listadoAlumnos[])
{
    int opcion=0;
    do
    {
        printf("\n ******************************************** ");
        printf("\n          Registro de alumnos                 ");
        printf("\n");
        printf("\n      1.Ingresar Alumnos                      ");
        printf("\n");
        printf("\n      2. Mostrar Alumnos                      ");
        printf("\n");
        printf("\n      3. Ordenar por nombre                   ");
        printf("\n ");
        printf("\n      4.Alumnos aprobados                     ");
        printf("\n");
        printf("\n      5.Alumnos que se llaman Juan            ");
        printf("\n");
        printf("\n      6.Alumnos que empiecen con P            ");
        printf("\n");
        printf("\n      7.Alumno Mediocre                       ");
        printf("\n");
        printf("\n      8.Modificar nota a partir de legajo     ");
        printf("\n");
        printf("\n      9.Alumno/s con nota mas alta            ");
        printf("\n");
        printf("\n                                              ");
        printf("\n   10.Salir                                    ");
        printf("\n");
        printf("\n");
        printf("\n Ingrese una opcion (1/10) : ");
        scanf("%d" , & opcion);
        printf("\n ********************************************** ");



        switch(opcion)
        {
            case 1:
                system("cls");
                cargarLibre(listadoAlumnos);
                break;

            case 2:
                system("cls");
                mostrarAlumnos(listadoAlumnos);
                break;

            case 3:
                system("cls");
                ordenarNombre(listadoAlumnos);
                mostrarAlumnos(listadoAlumnos);
                break;
            case 4:
                system("cls");
                mostrarAlumnosAprobados(listadoAlumnos);
                break;
            case 5:
                system("cls");
                busquedaJuan(listadoAlumnos);
                break;
            case 6:
                system("cls");
                busquedaP(listadoAlumnos);
                break;
            case 7:
                system("cls");
                alumnoMediocre(listadoAlumnos);
                break;
            case 8:
                system("cls");
                modificarNota(listadoAlumnos);
            case 9:
                system("cls");
                noTAMayor(listadoAlumnos);
            case 10:
                opcion = 10;
                break;

        }
        system("pause");
    }
    while(opcion!=10);
    {
    }

}

void cargarAlumnos(sAlumno listadoAlumnos[] , int i)
{
    for(i=0 ; i<TAM ; i++)
    {

        system("cls");
        printf("Ingrese legajo: ");
        scanf("%d", &listadoAlumnos[i].legajo);
        fflush(stdin);
        printf("Ingrese nombre: ");
        gets(listadoAlumnos[i].nombre);
        fflush(stdin);
        printf("Ingrese nota: ");
        scanf("%d", &listadoAlumnos[i].nota);
        fflush(stdin);
        printf("Ingrese altura: ");
        scanf("%f", &listadoAlumnos[i].altura);
        fflush(stdin);

        listadoAlumnos[i].estado = OCUPADO;

    }

}


void cargarLibre(sAlumno listadoAlumnos[])
{
    int i;
    i=buscarLibre(listadoAlumnos);

    if(i == -1)
    {
        system("cls");
        printf("No se encontro un lugar libre!\n");
        printf("\n");
        system("pause");
    }
    else{
        cargarAlumnos(listadoAlumnos, i);
    }
}




void mostrarAlumnos(sAlumno listadoAlumnos[])
{
    system("cls");
    printf("%4s %20s %20s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("%4d %20s %20d %.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
    }
    system("pause");
}
void ordenarNombre(sAlumno listadoAlumnos[])
{
    int i;
    int j;
    sAlumno aux;

    system("cls");
    for(i=0; i<TAM-1; i++)
    {
        for(j=i+1; j<TAM; j++)
        {
                if (strcmp(listadoAlumnos[i].nombre, listadoAlumnos[j].nombre) > 0)
                {
                    aux=listadoAlumnos[i];
                    listadoAlumnos[i]=listadoAlumnos[j];
                    listadoAlumnos[j]=aux;
                }
        }
    }
    printf(" |*****************************|\n");
    printf("|      Ordenando nombres        |\n");
    printf(" |*****************************|\n");
    system("pause");
}

void mostrarAlumnosAprobados(sAlumno listadoAlumnos[])
{
    int i;

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].nota > 6)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre,
            listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
}

void busquedaJuan(sAlumno listadoAlumnos[])
{
    int i;

    for(i=0;i<TAM ; i++)
    {
        if(strcmp(listadoAlumnos[i].nombre , "Juan") == 0 || strcmp(listadoAlumnos[i].nombre , "juan") == 0)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre,
            listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }

}

void busquedaP(sAlumno listadoAlumnos[])
{
    int i;

    for(i=0; i < TAM; i++)
    {
        if(listadoAlumnos[i].nombre[0] ==  'P' || listadoAlumnos[i].nombre[0] == 'p' )
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre,
            listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }

}

void alumnoMediocre(sAlumno listadoAlumnos[])
{
    int i;

    for(i=0 ; i<TAM ; i++)
    {
        if(listadoAlumnos[i].legajo == 100 && strcmp(listadoAlumnos[i].nombre, "Juan") == 0 && listadoAlumnos[i].nota == 5 && listadoAlumnos[i].altura == 1.75)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
}


void modificarNota(sAlumno listadoAlumnos[])
{
    //DECLARAR #define VACIO -1 , OCUPADO 1 , BORRADO 0 ,(ESTOS VAN EN EL H)
    int i;
    int auxLegajo;

    printf("Ingrese el legajo: ");
    scanf("%d" , & auxLegajo);

    system("cls");

    for(i=0 ; i<TAM ; i++)
    {
            if(listadoAlumnos[i].estado != VACIO && auxLegajo == listadoAlumnos[i].legajo) //listadoLAlumos.[i].estado != VACIO && auxLegajo == listadoalumnos[i].legajo
           {
               printf("Ingrese la nota nueva: ");
               scanf("%d" , & listadoAlumnos[i].nota);

           }

    }

    printf(" |*****************************|\n");
    printf("|      Cambiando NOTA          |\n");
    printf(" |*****************************|\n");
}

void noTAMayor(sAlumno listadoAlumnos[])
{
    sAlumno max;
    max.nota=1;
    int i;

    for(i=0 ; i<TAM ; i++)
    {
        if(listadoAlumnos[i].nota > max.nota )
        {
            max = listadoAlumnos[i];
        }
    }

    printf("%4d %20s %4d %5.2f\n", max.legajo, max.nombre, max.nota, max.altura);
}

void inicializarArrayIlogicamente(sAlumno listadoAlumnos[])
{
    int i;

    for(i=0; i<TAM; i++)
    {
        listadoAlumnos[i].estado = VACIO;
    }
}

int buscarLibre(sAlumno listaAlumnos[])
{
     int retorno = -1; //FLAG
     int i;

        for (i=0; i<TAM; i++)
        {
            if (listaAlumnos[i].estado == VACIO)
            {
                retorno = i;
                break;

            }
        }
    return retorno;
}

/*void buscarLegajoYCambiarNota(sAlumno listadoAlumnos[], int legajoIntroducido)
{
    int i;
    char rta;

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].estado == OCUPADO && listadoAlumnos[i].legajo == legajoIntroducido)
        {
            printf("Desea modificar la nota de este alumno?\n");
            printf("    (Ingrese S para Si o N para No)\n)");
            printf("\n");
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
            printf("\n");
            scanf("%c", &rta);
            if(rta == 's' || rta == 'S')
            {
                printf("Ingrese nueva nota: ");
                listadoAlumnos[i].nota=scanf("%d", &listadoAlumnos[i].nota);
            }
            else if(rta == 'n' || rta == 'N')
            {
                break;
            }
            else
            {
                printf("No ingreso una opcion valida");
            }
        }
    }
    system("pause");
}
*/

