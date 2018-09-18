#include <stdio.h>
#include <stdlib.h>
#define  T 5

int buscarLibre(int [] , int , int );

int main()
{
   int vector[T];
   int i;
   char seguir;
   int indice;

   for(i=0 ; i<T; i++)
   {
        vector[i]=-1;
   }
   do
   {
       indice = buscarLibre(vector , T , -1);
       if(indice != -1)
       {
        printf("\n Ingrese un numero: ");
           scanf("%d" , & vector[indice]);
       }
       else
       {
           printf("\n No hay mas espacio!");
           break;
       }
       printf("\n Desea ingresar otro? ");
       seguir = getche();



   }
   while(seguir == 's' );
    {
        return 0;
    }


   return 0;
}


int buscarLibre(int numeros[] , int tam , int ilogico )
{
    int index;
    int i;

    for(i=0 ; i<tam ; i++)
    {
        if(numeros[i] == ilogico)
        {
            index = i;
            break;
        }
    }
    return index;
}
