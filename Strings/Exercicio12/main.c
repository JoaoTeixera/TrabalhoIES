//Exercicio 12 de String

#include <string.h>
#include <stdio.h>
#define MAX 100

char branco[] = {' ','\n','\t','\0'};

int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

int encontrarCaracter(char *str){
    int tam = tamanhoString(str);
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < 3; j++){
            if(str[i] == branco[j])
                return i;
        }
    }
}

int main(){
    char str[MAX];
    printf("Digite uma string: ");
    scanf("%[^\n]%*c", str);
    

    int x = encontrarCaracter(str);
    printf("Endereco do caracter branco: %d", x);
    
    return 0;
}


