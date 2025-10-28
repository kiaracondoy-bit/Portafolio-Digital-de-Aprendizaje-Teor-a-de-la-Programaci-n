#include <stdio.h>

int main (){

    int sueldo, total, MESES;
    MESES=3;
    printf("Ingrese el sueldo del usuario:\n");
    scanf("%i", &sueldo);

    total = sueldo*MESES;

    printf("El sueldo por tres meses de trabajo es: $%i", total);

    return 0;
}