//Exercicio 1

#include <stdio.h>

int main(){
    double valor;

    printf("Digite o valor em metros para a conversao: ");

    scanf("%lf", &valor);

    double dm,cm,mm;

    dm = valor*10;
    cm = valor*100;
    mm = valor*1000;

    printf("Valor %.2lf em dm: %.2lf\n", valor, dm);
    printf("Valor %.2lf em cm: %.2lf\n", valor, cm);
    printf("Valor %.2lf em mm: %.2lf\n", valor, mm);

    return 0;
}
