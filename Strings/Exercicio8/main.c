//Exercicio 8 de String

#include <stdio.h>
#define MAX 100

char *num[] = {"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};

int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void soletra(int n){
    char centena = n/100;
    n%= 100;
    char dezena = n/10;
    n%=10;
    char unidade = n;
    
    printf("%s, ", num[centena]);
    printf("%s, ", num[dezena]);
    printf("%s", num[unidade]);
}

int main(){
    int numero;
    printf("Digite um numero ate 999 para ser soletrado: ");
    char str[MAX];
    scanf("%d", &numero);
    soletra(numero);
    return 0;
}

