#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ARREGLOS
/*  Unidimensionales : Vector/Lista
    Bidimensionales  : Matriz      
    Tridimensionales : (Se le agregan capas) ej: lista[capa][fila][columna]*/

int main () {
    int lista[5];
    lista[0] = 2;
    lista[1] = 2;
    lista[2] = 1;
    lista[3] = 1;
    lista[4] = 8;
    for (int i = 0; i < 5; i++)
    {
        printf("Lista en la posicion %i: %i\n", i, lista[i]);
    }
    return 0;
}