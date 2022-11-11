//Exercicio 3 Structs


#include <stdio.h>
#include <stdlib.h>


void calcular(int *num, int tam, double *media, int *menor, int *maior){
    int soma = num[0];
    *menor = num[0];
    *maior = num[0];
    for(int i = 1; i < tam; i++){
        soma += num[i];
        if(*menor > num[i]) *menor = num[i];
        if(*maior < num[i]) *maior = num[i];
    }
    
    *media = soma/tam;
}

int main(){
    int i, x, *n, menor, maior;
    double media;
    printf("Digite um numero: ");
    scanf("%d", &x);
    for(i = 0; x >= 0; i++){
        n[i] = x;
        printf("Digite um numero: ");
        scanf("%d", &x);
    }
    
    calcular(n,i,&media,&menor,&maior);
    printf("Media: %.2lf\n", media);
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    return 0;
}

