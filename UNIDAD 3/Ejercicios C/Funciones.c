#include<stdio.h>
//FUNCION NO PARAMETRIZADA
/*void sumar(){
    int a, b, suma;
    printf("Ingrese el primer valor: ");
    scanf("%i", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &b);
    suma=a+b;
    printf("La suma es: %i", suma);
}
int main (){
    sumar();
    return 0;
}*/


//FUNCION PARAMETRIZADA
int sumar(int x, int y){
    int suma;
    suma=x+y;
    return suma;
}
int restar(int x,int y){
    int resta;
    resta=x-y;
    return resta;
}

int main(){
    int a,b;
    printf("Ingrese el primer valor: ");
    scanf("%i", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &b);
    int suma = sumar(a,b);
    int resta = restar(a,b);
    printf("La suma es: %i\n", suma);
    printf("La resta es: %i", resta);
    return 0;
}
