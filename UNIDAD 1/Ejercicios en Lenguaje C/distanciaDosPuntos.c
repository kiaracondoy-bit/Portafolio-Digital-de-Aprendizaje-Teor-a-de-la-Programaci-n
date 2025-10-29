#include <stdio.h>
#include <math.h>

int main (){

    int x1, y1, x2, y2;
    float d;

    printf("Ingrese el valor en X del punto 1\n");
    scanf("%i", &x1);

    printf("Ingrese el valor en Y del punto 1\n");
    scanf("%i", &y1);

    printf("Ingrese el valor en X del punto 2\n");
    scanf("%i", &x2);

    printf("Ingrese el valor en Y del punto 2\n");
    scanf("%i", &y2);

    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("La distancia entre ambos puntos es de: %f \n", d);
}