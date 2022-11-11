//Exercicio 1 Structs


#include <stdio.h>
#include <stdlib.h>


void calcular(double x, double y, double *soma, double *dif, double *prod){
    *soma = x+y;
    *dif = x-y;
    *prod = x*y;
}

int main(){
    double x,y,soma,dif,prod;
    
    printf("Digite um numero: ");
    scanf("%lf", &x);
    printf("Digite um numero: ");
    scanf("%lf", &y);
    
    calcular(x,y,&soma,&dif,&prod);
    
    printf("Soma: %.2lf\n", soma);
    printf("Diferenca: %.2lf\n", dif);
    printf("Produto: %.2lf\n", prod);

    return 0;
}
