#include <stdio.h>
#include <stdlib.h>

//int main()
//{
    //int option;

    //do
    //{
        //printf("1. Sumar\n");
        //printf("1  Restar\n");
        //printf("1. Dividir\n");
        //printf("1. Multiplicar\n");
        //printf("1. Salir\n");
        //printf("Ingrese una opcion: ");
        //scanf("%d" , & opcion)

        //opcion = ingresarOpcion;

        //switch(opcion)
        //{
            //case 1:
                //printf("Estoy sumando");
                //n1 = ingresarOpcion();
                //n2 = ingresarOpcion();
                //break;
            //case 2:
                //printf("Estoy restando");
                //break;
            //case 3:
                //printf("Estoy Multiplicando");
                //break;
            //case 4:
                //printf("Estoy Dividiendo");
                //break;
            //}

            //system("pause")
            //sysyem("cls")
    //}
    //while(opcion != 5);
    //{
        //return 0;
    //}

    //int ingresarOpcion (void)
    //{
        //int opcion

        //printf("ingrese un numero: ");
        //scanf("%d" , & opcion);

        //return opcion;


     //}

void sumar1(void);

int main()
{
  sumar1();
  return 0;
}
void sumar1(void)
{

    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese un numero entero: ");
    scanf("%d", & numeroUno);


    printf("Ingrese un numero entero: ");
    scanf("%d", & numeroDos);

    suma = numeroUno+numeroDos;

    printf("La suma es: %d\n", suma);

}


