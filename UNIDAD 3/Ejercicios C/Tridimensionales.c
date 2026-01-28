#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int tridimensional[2][3][2];

    tridimensional[0][0][0] = 1;
    tridimensional[0][0][1] = 2;
    tridimensional[0][1][0] = 3;
    tridimensional[0][1][1] = 4;
    tridimensional[0][2][0] = 5;
    tridimensional[0][2][1] = 6;
    tridimensional[1][0][0] = 7;
    tridimensional[1][0][1] = 8;
    tridimensional[1][1][0] = 9;
    tridimensional[1][1][1] = 1;
    tridimensional[1][2][0] = 2;
    tridimensional[1][2][1] = 3;

    for (int c = 0; c < 2; c++){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 2; j++){
                printf("El elemento en la posicion [%i][%i][%i] es: %i\n", c, i, j, tridimensional[c][i][j]);
            }
        }
    }

    return 0;
}