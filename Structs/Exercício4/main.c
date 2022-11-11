//Exercicio 4 Structs

#include <stdio.h>
#include <stdlib.h>


void notas(double *nota1, double *nota2, double *nota3){
    printf("Digite a primeira nota: ");
    scanf("%lf", nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", nota3);
}

int main(){
    double nota1, nota2, nota3;
    notas(&nota1, &nota2, &nota3);
    
    
    printf("Nota1: %.2lf\n", nota1);
    printf("Nota2: %.2lf\n", nota2);
    printf("Nota3: %.2lf\n", nota3);
    return 0;
}

