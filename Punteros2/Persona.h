#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int ID;
    char nombre[15];
    int edad;

}ePersona;

ePersona* nuevaPersona();
void mostrarPersona(ePersona);
void ePersona_setId(ePersona* this , int id);
