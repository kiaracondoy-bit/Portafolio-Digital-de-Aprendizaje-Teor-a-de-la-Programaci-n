#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int matriz[3][4];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[0][3] = 4;
    matriz[1][0] = 5;
    matriz[1][1] = 6;
    matriz[1][2] = 7;
    matriz[1][3] = 8;
    matriz[2][0] = 9;
    matriz[2][1] = 0;
    matriz[2][2] = 1;
    matriz[2][3] = 2;

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 3; j++){
            printf("El elemento en la posicion [%i][%i] es: %i\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}