#include "Persona.h"
#include <stdio.h>
#include <stdlib.h>

ePersona* nuevaPersona()
{
    ePersona* miPersona;
    miPersona =(ePersona*)malloc(sizeof(ePersona));

    if(miPersona != NULL)
    {
        miPersona ->ID = 0;
        strcpy(miPersona ->nombre , "  ");
        miPersona->edad =0;
    }
}

mostrarPersona(ePersona* this)
{
    printf("%d %s %d" , ePersona->ID , ePersona->nombre , ePersona->edad);
}

ePersona* nuevaPersonaParametro(int id , char nombre , int edad)
{
    ePersona* Personita;
    Personita = nuevaPersona();
    if(Personita != NULL)
    {
        Personita ->ID = id;
        Personita ->edad = edad;
        strcpy(Personita -> nombre, nombre);

    }
    return Personita;
}

void ePersona_setId(ePersona* this , int id)
{
    int estado=0;
    if(this != NULL)
    {
     this->id = id;
    }

    return estado;
}
