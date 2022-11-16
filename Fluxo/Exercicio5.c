#include <stdio.h>

int main(int argc, char const *argv[])
{
    double nota1,nota2, media;
    int i = 0;
    printf("Digite o valor da nota1: ");
    scanf("%lf", &nota1);
    while(nota1!=50.0){
        printf("Digite o valor da nota2: ");
        scanf("%lf", &nota2);
        media = (nota1+nota2)/2;
        i++;
        printf("Media: %.2lf\n", media);
        printf("Digite o valor da nota1: ");
        scanf("%lf", &nota1);
    }

    return 0;
}
