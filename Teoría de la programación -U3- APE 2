#include <stdio.h>

void calcularValorCliente(float *total){
    float playStation = 2.50, xbox = 2.00, nintendo = 1.50;
    float consola, valorApagar=0;
    int horas;
    do {
        printf("Ingresa la consola que utilizaste (1 = PlayStation, 2 = Xbox, 3 = Nintendo): ");
        scanf("%f", &consola);

        if (consola < 1 || consola > 3) {
            printf("Ingresa un valor valido\n");
        }
    } while (consola < 1 || consola > 3);

    if (consola == 1) {
        consola = playStation;
    } else if (consola == 2) {
        consola = xbox;
    } else if (consola == 3) {
        consola = nintendo;
    }

    printf("Ingresa la cantidad de horas que jugaste: ");
    scanf("%d", &horas);

    valorApagar = consola * horas;
    printf("El valor a pagar es: %.2f\n", valorApagar);
    *total += valorApagar;
}

void calcularValorRecaudado(int cantidadClientes){
    float total=0;
    for (int i = 0; i < cantidadClientes; i++){
        calcularValorCliente(&total);
    }
    printf("\nEl valor final recaudado por todas las atenciones es: %.2f\n", total);
}


int main() {
    int cantidadClientes;

    printf("Cantidad de clientes a atender: ");
    scanf("%d", &cantidadClientes);

    calcularValorRecaudado(cantidadClientes);

    return 0;
}
