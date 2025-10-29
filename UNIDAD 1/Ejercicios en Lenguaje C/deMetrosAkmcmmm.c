#include <stdio.h>

int main(){

    float metros, km, cm, mm;

    printf("Ingrese el valor en metros: \n");
    scanf("%f", &metros);

    km= metros/1000;
    cm= metros*100;
    mm= cm*100;

    printf("%.2fm equivale a %.4fkm\n", metros, km);
    printf("%.2fm equivale a %.2fcm\n", metros, cm);
    printf("%.2fm equivale a %.2fmm", metros, mm);

    return 0;
}