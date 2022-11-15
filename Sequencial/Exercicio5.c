//Exercicio 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    double x,y;
    printf("Digite o valor de x: ");
    scanf("%lf",&x);
    printf("Digite o valor de y: ");
    scanf("%lf",&y);

    
    printf("Soma: %.2lf\n",x+y);
    printf("Produto de %.2lf por %.2lf*%.2lf: %.2lf\n", x, y, y, x*pow(y,2));
    printf("Quadrado de %.2lf: %.2lf\n", x, x*x);
    printf("Raiz de (%.2lf*%.2lf) + (%.2lf*%.2lf): %.2lf\n", x, x, y, y, sqrt(pow(x,2)+pow(y,2)));
    printf("Seno de %.2lf-%.2lf: %.2lf\n", x, y, sin(x-y));
    printf("Modulo de %.2lf: %.2lf\n", x, (abs(x)));
    return 0;
}
