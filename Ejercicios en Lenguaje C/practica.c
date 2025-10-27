#include <stdio.h>

int main (){

    int valor1, valor2, multiplicacion;

    printf("Ingrese el valor 1\n");
    scanf("%i", &valor1);

    printf("Ingrese el valor 2\n");
    scanf("%i", &valor2);

    multiplicacion= valor1*valor2;

    printf("El resultado es: %i", multiplicacion);

    return 0;

}