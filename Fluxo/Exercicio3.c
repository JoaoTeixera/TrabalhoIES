#include <stdio.h>

int main()
{
    double preco, juro;
    printf("Digite o preco do produto: ");
    scanf("%lf", &preco);

    while(preco<100.0){
        juro = preco*0.1;
        preco += juro;
        break;
    }
    while(preco>=100.0){
        juro = preco*0.2;
        preco += juro;
        break;
    }
    printf("Preco com acrescimo: %.2lf", preco);
    return 0;
}
