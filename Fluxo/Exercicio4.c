#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x,y,resultado;
    char op;
    printf("Digite a expressao: ");
    scanf("%lf%c%lf",&x, &op, &y);

    switch(op){
        case '+': resultado = x+y; break;
        case '-': resultado = x-y; break;
        case '*': resultado = x*y; break;
        case '/': resultado = x/y; break;
    }

    printf("%.2lf\n", resultado);
    return 0;
}
