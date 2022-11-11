//Exercicio 2 Structs


#include <stdio.h>
#include <stdlib.h>


int calcular(double x, double y, double *razao){
    if(y == 0){
        return 0;
    }else{
        *razao = x/y;
        return 1;
    }
}

int main(){
    double x,y,razao;
    
    printf("Digite um numero: ");
    scanf("%lf", &x);
    printf("Digite um numero: ");
    scanf("%lf", &y);
    
    if(calcular(x,y,&razao)){
        printf("Razao: %.2lf\n", razao);
    }
    else
        printf("Nao foi possivel calcular a razao dos numeros.");
    

    return 0;
}
