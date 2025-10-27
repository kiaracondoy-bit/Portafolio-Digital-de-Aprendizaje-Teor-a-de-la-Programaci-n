#include <stdio.h>

int main(){

    float numero, parteDecimal;
    int parteEntera;

    printf("Ingrese el numero decimal: \n");
    scanf("%f", &numero);

    parteEntera= (int)numero;
    parteDecimal= numero - parteEntera;

    printf("La parte decimal del numero ingresado es %f\nLa parte entera del numero ingresado es %i", parteDecimal, parteEntera);
    
    return 0;
}