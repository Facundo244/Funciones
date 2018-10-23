#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"
#define T 5




int main()
{
    ePersona personita;
    personita = nuevaPersona();






    return 0;



}

/*
    int* pEntero;

    pEntero =(int*)malloc(sizeof(int)*5);
    *pEntero =9;

    printf("%d" , *pEntero);

*/


   /* sDato* p;
    sDato* q;

    q = funcion(5 , 'd');
    printf("q = %d , %c \n" , q->a , q->b );

    p = funcion(4 , 'c');
    printf("p = %d , %c \n" , p->a , p->b );

    return 0;
    */


/*sDato* funcion(int x , char y)
{
    sDato* pDato;
    sDato datito;
    pDato = &datito;

    pDato ->a = x;
    pDato ->b = y;

    return pDato;

}
*/

   /*sDato datito[2] = {{4 , 'c'},{4 , 'b'}};
   sDato* pArrayDato;
   int i;

   pArrayDato = datito;

   for(i=0 ; i<2 ; i++)
   {
       printf("%d %c " ,(pArrayDato+i)->a , (*(pArrayDato+i)).b);
   }                                            //sacar el * para poner el operador felcha



  return 0;
    */


    /*sDato datito = {4 , 'c'};
    sDato* pDato;
    int x;

    sDato = &datito;

    x = (*pDato).a;    // x = pDato ->a;   ---(operador flecha)---

    printf("%d" , &x);

    return 0;
    */
