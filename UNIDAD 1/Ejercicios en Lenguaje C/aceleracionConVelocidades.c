#include <stdio.h>

int main (){

    float aceleracion, vinicial, vfinal, tiempo;

    printf("Ingrese la velocidad incial(m/s):\n");
    scanf("%f", &vinicial);

    printf("Ingrese la velocidad final(m/s):\n");
    scanf("%f", &vfinal);

    printf("Ingrese el tiempo(s):\n");
    scanf("%f", &tiempo);

    aceleracion = (vfinal-vinicial)/tiempo;

    printf("La aceleracion es de: %f m/s^2\n",aceleracion );

    return 0;

}