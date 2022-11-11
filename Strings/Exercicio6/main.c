//Exercicio 6 de String

#include <stdio.h>
#define MAX 100

int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

int contarPalavras(char* str){
    int cont = 1;
    for(int i = 0; i< tamanhoString(str); i++){
        if(str[i] == ' ')
            cont++;
    }
    return cont;
}

int main(){
    char str[MAX];
    scanf("%[^\n]%*c", str);
    printf("A string tem %d palavras\n", contarPalavras(str));
    return 0;
}