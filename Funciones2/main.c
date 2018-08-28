#include <stdio.h>
#include <stdlib.h>

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


