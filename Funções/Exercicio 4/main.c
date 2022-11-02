//Exercicio 4 de Funções

#include <stdio.h>

int retornarOpcao(){
    int r = 0;
    printf("FORMAS DE PAGAMENTO:\n");
    printf("1. A vista com 10%% de desconto\n");
    printf("2. Em duas vezes com o preco da etiqueta\n");
    printf("3. De 3 a 10 vezes com 3%% de juros ao mes (somente para compras acima de 100 reais)\n");
    printf("\nEscolha uma das opcoes acima: ");
    scanf("%d", &r);
    return r;
}

void opcao1(double val){
    double desc = val*0.1;
    printf("\nO valor a ser pago e: R$%.2lf", val-desc);
}

void opcao2(double val){
    double parcela = val/2;
    printf("\nO valor a ser pago nas duas prestacoes e: R$%.2lf", parcela);
}

void opcao3(double val, int n){
    double jur = val*0.03;
    double parcela = (val/n)+jur;
    printf("\nO valor a ser pago em cada prestacao e: R$%.2lf",parcela);
}

void imprimirParcelas(double val, int op){
    int n;
    switch(op){
        case 1:
            opcao1(val);
        break;
        case 2:
            opcao2(val);
        break;
        case 3:
            printf("Digite o numero de prestacoes: ");
            scanf("%d", &n);
            opcao3(val, n);
        break;
        default: 
            printf("Escolha uma opcao valida.");
        break;

    }
}
int main(){
    double val;
    int n;
    
    printf("Digite o total gasto: ");
    scanf("%lf", &val);
    int op = retornarOpcao();
    imprimirParcelas(val, op);
    
    return 0;
}
