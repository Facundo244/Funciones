#include <stdio.h>
#include <stdlib.h>

//1)declarar la funcion//prototipo//firma
//2)Llamada a la funcion
//3)Desarrollo de la funcion

//queDevuelve comoseLlama (queRecibe)

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
    scanf("%d" , & numeroUno);


    printf("Ingrese un numero entero: ");
    scanf("%d" , & numeroDos);

    suma = numeroUno+numeroDos;

    printf("La suma es: %d\n" , suma);

}
