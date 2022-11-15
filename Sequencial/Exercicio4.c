//Exercicio 4

#include <stdio.h>


int main(){
    
    double celsius, fahrenheit;

    printf("Digite a temperatura em graus F: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit-32.0) * (5.0/9.0);

    printf("%.2lf graus F em graus C = %.2lf\n", fahrenheit, celsius);

    return 0;
}
