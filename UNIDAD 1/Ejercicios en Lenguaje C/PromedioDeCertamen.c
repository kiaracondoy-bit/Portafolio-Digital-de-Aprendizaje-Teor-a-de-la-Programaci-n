#include <stdio.h>

int main (){

    //Declaración de variables
    int c1, c2, nl;
    float c3;
    const float NF = 60;

    //Datos de Entrada
    printf("Ingrese la nota del primer certamen:\n");
    scanf("%i", &c1);

    printf("Ingrese la nota del segundo certamen:\n");
    scanf("%i", &c2);

    printf("Ingrese la nota del laboratorio:\n");
    scanf("%i", &nl);

    //Proceso
    c3 = ((NF-(nl*0.3))/(7/30))-c1-c2;

    //Salida
    printf("La nota mínima del tercer certamen para aprobar la asignatura es de: %f", c3);

    return 0;
}