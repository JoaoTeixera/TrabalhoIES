//Exercicio 1,2,3 de Funções

#include <stdio.h>


double calcularPotencia(double x, int n){
    double resp = 1.0;
    for(int i = 0; i < n; i++){
        resp *= x;
    }
    return resp;
}
double calcularFatorialIterativo(double x){
    double resp = 1.0;
    while (x){
        resp *= x;
        x--;
    }
    return resp;
}
double calcularFatorialRecursivo(double x){
    if(x<=1)
        return 1;
    else
        return x*calcularFatorialRecursivo(x-1);
}

double calcularEuler(double x){
    double resp = 0;
    
    //realiza a conta e^x = 1 + x + x^2/2! + x^3/3! + ...
    for(int i = 0; i < 100; i++){
        resp += (1*calcularPotencia(x,i))/calcularFatorialRecursivo(i);
    }
    return resp;
}

int main(){
    double x;
    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("O valor de e^%.0lf é: %.10lf",x , calcularEuler(x));
    

    return 0;
}
