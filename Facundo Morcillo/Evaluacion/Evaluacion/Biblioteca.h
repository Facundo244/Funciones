#ifndef Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2
#define LIBRE -1
#define OCUPADO 0


typedef struct
{

    int id;
    char titulo[21];
    char nacionalidad[21];
    char director[21];
    int year;
    int estado;

} sFilm;

void menu(sFilm listadoFilm[]);
void cargarLibre(sFilm listadoFilm[]);
void cargarFilm(sFilm listadoFilm[] , int i);
void inicializarArrayIlogicamente(sFilm listadoFilm[]);
int buscarLugarLibre(sFilm listadoFilm[]);
void mostrarUnaPelicula(sFilm);
int mostrarListado(sFilm listadoFilm[]);


#endif // Biblioteca
