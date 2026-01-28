#include<stdio.h>
int sumar(int x, int y){
    return x+y;
}
int restar(int x,int y){
    return x-y;
}
int multiplicar(int x, int y){
    return x*y;
}
float dividir(int x, float y){
    if(y==0.0){
        return 0.0;
    }else{
        return x/y;
    }
}

int main(){
    int a,b;
    printf("Ingrese el primer valor: ");
    scanf("%i", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &b);
    printf("\nLa suma es: %i\n", sumar(a,b));
    printf("La resta es: %i\n", restar(a,b));
    printf("La multiplicacion es: %i\n", multiplicar(a,b));
    if (b==0){
        printf("El segundo numero ingresado es 0, no hay division entre 0\n");
    }
    printf("La division es: %.2f", dividir(a,b));

    return 0;
}