#include <stdio.h>
#include <stdlib.h>

int main (){

    /* OPCION 1
    char nombresCompletos[30];

    printf("Ingrese sus nombres completos: \n");

    scanf("%[^\n]s", nombresCompletos);
    getchar();

    printf("Sus nombres completos son:\n%s", nombresCompletos);

    return 0;
    */







    //OPCION 2
   
    char *nombresCompletos = malloc (30 * sizeof (char));

    printf("Ingrese sus nombres completos\n");
    scanf("%[^\n]", nombresCompletos);
    getchar();
    printf("Sus nombres completos son: \n%s", nombresCompletos);

    return 0;
    





    //OPCION 3
    /*
    char *nombresCompletos = "Kiara Salomé Condoy Morocho";
    printf("Ingrese sus nombres completos\n");
    scanf("%[^\n]s", &nombresCompletos);
    getchar();
    printf("Sus nombres ingresados son:\n %s", nombresCompletos);

    return 0;
    */

}