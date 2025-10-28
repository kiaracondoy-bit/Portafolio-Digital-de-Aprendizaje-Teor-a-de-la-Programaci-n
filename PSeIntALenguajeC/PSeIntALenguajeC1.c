#include <stdio.h>

int main(){

    int hombres, mujeres, sumaTotal, porcentajeH, porcentajeM;

    printf("Ingrese la cantidad de hombres: \n");
    scanf("%i", &hombres);

    printf("Ingrese la cantidad de las mujeres: \n");
    scanf("%i", &mujeres);

    sumaTotal = hombres+mujeres;
    porcentajeH = (hombres*100)/sumaTotal;
    porcentajeM = (mujeres*100)/sumaTotal;

    printf("El porcentaje de hombres es de: %i%%\n", porcentajeH);
    printf("El porcentaje de mujeres es de: %i%%", porcentajeM);

    return 0;
}