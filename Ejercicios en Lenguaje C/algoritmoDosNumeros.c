#include <stdio.h>
int main (){

    float numero1, numero2, suma;

    printf("Ingrese el primer numero: \n");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: \n");
    scanf("%f", &numero2);

    suma = numero1+numero2;

    printf("La suma de los dos numeros es: \n%f", suma);

    return 0;

}

