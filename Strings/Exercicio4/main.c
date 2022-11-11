//Exercicio 4 de String

#include <string.h>
#include <stdio.h>
#define MAX 100


int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void imprimirString(char *nome, char* end, char* tel, char* idade){
    char str[MAX] = {"Seu nome e "};
    
    strcat(str,nome);
    strcat(str, ", voce tem ");
    strcat(str,idade);
    strcat(str, " anos, mora na rua ");
    strcat(str,end);
    strcat(str, " e seu telefone é ");
    strcat(str,tel);
    
    
    printf("%s",str);
}

int main(){
    char nome[MAX];
    char end[MAX];
    char tel[MAX];
    char idade[MAX];

    printf("Digite seu nome: ");
    scanf("%[^\n]%*c", nome);
    printf("Digite seu endereco: ");
    scanf("%[^\n]%*c", end);
    printf("Digite seu telefone: ");
    scanf("%[^\n]%*c", tel);
    printf("Digite sua idade: ");
    scanf("%[^\n]%*c", idade);
    
    imprimirString(nome,end,tel,idade);
    return 0;
}




