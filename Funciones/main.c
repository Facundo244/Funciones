#include <stdio.h>
#include <stdlib.h>

//1)declarar la funcion//prototipo//firma
//2)Llamada a la funcion
//3)Desarrollo de la funcion

//queDevuelve comoseLlama (queRecibe)

void sumar1(void);
void sumar2(int , int);

int main()
{
    //sumar1();
    int numeroUno;
    int numeroDos;

    printf("Ingrese un numero entero: ");
    scanf("%d", & numeroUno);


    printf("Ingrese un numero entero: ");
    scanf("%d", & numeroDos);

    sumar2(numeroUno , numeroDos);

    return 0;
}
    void sumar2 (int n1 , int  n2)
{
    int suma;

    suma = n1+n2;

    printf("La suma es: %d\n", suma);

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
