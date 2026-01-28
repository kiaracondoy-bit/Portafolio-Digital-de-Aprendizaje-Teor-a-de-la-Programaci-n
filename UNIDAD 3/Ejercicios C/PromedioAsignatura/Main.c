#include <stdio.h>
float calculoACD(int numACD, int numUnidades){
    float nota, notaTotal = 0;
    for (int i = 1; i <= numACD; i++){
        do{
            printf("Ingrese la nota del ACD %i de la unidad %i: ", i, numUnidades);
            scanf("%f", &nota);
            if (nota<0.00 || nota>10.0){
                printf("La nota ingresada es invalida\n");
            }
        } while (nota<0.00 || nota>10.0);
        notaTotal+=nota;
    }
    return (notaTotal/numACD)*0.2;
}
float calculoAA(int numAA, int numUnidades){
    float nota, notaTotal = 0;
    for (int i = 1; i <= numAA; i++){
        do{
            printf("Ingrese la nota del AA %i de la unidad %i: ", i, numUnidades);
            scanf("%f", &nota);
            if (nota<0.00 || nota>10.0){
                printf("La nota ingresada es invalida\n");
            }
        } while (nota<0.00 || nota>10.0);
        notaTotal+=nota;
    }
    return (notaTotal/numAA)*0.2;
}
float calculoAPE(int numAPE, int numUnidades){
    float nota, notaTotal = 0;
    for (int i = 1; i <= numAPE; i++){
        do{
            printf("Ingrese la nota del APE %i de la unidad %i: ", i, numUnidades);
            scanf("%f", &nota);
            if (nota<0.00 || nota>10.0){
                printf("La nota ingresada es invalida\n");
            }
        } while (nota<0.00 || nota>10.0);      
        notaTotal+=nota;
    }
    return (notaTotal/numAPE)*0.25;
}
float calculoES(int numUnidad){
    float evaluacion, portafolio, notaTotal;
    do{
        printf("Ingrese la nota de la evaluacion de la unidad %i: ", numUnidad);
        scanf("%f", &evaluacion);
        if (evaluacion<0.00 || evaluacion>10.0){
            printf("La nota ingresada es invalida\n");
        }
    } while (evaluacion<0.00 || evaluacion>10.0);
    do{
        printf("Ingrese la nota del portafolio de la unidad %i: ", numUnidad);
        scanf("%f", &portafolio);
        if (portafolio<0.00 || portafolio>10.0){
            printf("La nota ingresada es invalida\n");
        }
    } while (portafolio<0.00 || portafolio>10.0);   
    return ((evaluacion*0.6)+(portafolio*0.4))*0.35;
}
float promedioFinal(int numUnidades){
    int numACD, numAPE, numAA;
    float notaUnidad, promedioFinal = 0;
    for (int i = 1; i <= numUnidades; i++){
        printf("Ingrese la cantidad de ACD en la unidad %i: ", i);
        scanf("%i", &numACD);

        printf("Ingrese la cantidad de APE en la unidad %i: ", i);
        scanf("%i", &numAPE);

        printf("Ingrese la cantidad de AA en la unidad %i: ", i);
        scanf("%i", &numAA);

        notaUnidad = calculoACD(numACD, i) + calculoAPE(numAPE, i) + calculoAA(numAA, i) + calculoES(i);
        printf("\nEl promedio de la Unidad %i es: %.2f\n\n", i, notaUnidad);
        promedioFinal += notaUnidad; 
    }
    return (promedioFinal/numUnidades);
}    
int main (){
    int unidades;
    float notaFinal;
    char *escala;
    printf("Ingrese la cantidad de unidades que tiene: ");
    scanf("%i", &unidades);
    notaFinal = promedioFinal(unidades);
    printf("\nSu nota final de la asignatura es de: %.2f\n", notaFinal);
    if (notaFinal>=7){
        escala = "Aprobado";
    } else if (notaFinal>= 2.5 && notaFinal<7){
        escala = "Supletorio";
    } else if (notaFinal<2.5){
        escala = "Reprobado";
    }   
    printf("Su nota cualitativa es: %s", escala);
    return 0;
}