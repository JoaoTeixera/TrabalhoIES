//Exercicio 10 de String

#include <string.h>
#include <stdio.h>
#define MAX 100


int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void removerCaracter(char *str, char c){
    int i, j;
    int tam = tamanhoString(str);
    
    for(i = 0; i < tam; i++){
        if(str[i] == c){
            for(j = i; j < tam; j++) {
                str[j] = str[j+1];
            }
            tam--;
            i--;
        }
    }
}

int main(){
    char str[MAX], c;
    printf("Digite uma string: ");
    scanf("%[^\n]%*c", str);
    printf("Digite um caracter para ser removido na string acima: ");
    scanf("%c", &c);
    removerCaracter(str,c);
    printf("String alterada: %s", str);
    
    return 0;
}

