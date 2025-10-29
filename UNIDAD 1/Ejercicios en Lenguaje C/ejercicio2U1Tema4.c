#include <stdio.h>

int main (){

    float pie, yarda, pulgada, centimetro, metro;

    printf("Ingrese el valor en pies\n");
    scanf("%f", &pie);

    yarda= pie/3;
    pulgada= pie*12;
    centimetro= pulgada*2.54;
    metro= centimetro/100;

    printf("%.2f pies equivale a %.2f yardas\n", pie, yarda);
    printf("%.2f pies equivale a %.2f pulgadas\n", pie, pulgada);
    printf("%.2f pies equivale a %.2f centimetros\n", pie, centimetro);
    printf("%.2f pies equivale a %.2f metros\n", pie, metro);


    return 0;

}