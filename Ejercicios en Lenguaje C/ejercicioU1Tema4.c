#include <stdio.h>

int main (){

    int valor, doble, triple;

    printf("Ingrese el valor:\n");
    scanf("%d", &valor);

    doble = valor*2;
    triple = valor*3;

    printf("El doble de %d es: %d \n", valor, doble);
    printf("El triple de %d es: %d", valor, triple);

    return 0;

}