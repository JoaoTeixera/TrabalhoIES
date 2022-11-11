//Exercicio 11 de String

#include <string.h>
#include <stdio.h>
#define MAX 100


int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void inserirCaracter(char *str, char c, int indice){
    int i,j;
    int tam = tamanhoString(str)+1;
    
    for(i = 0; i < tam; i++){
        if(i == indice){
            for(j = tam; j > indice; j--)
                str[j] = str[j-1];
            str[indice] = c;
        }
    }
}

int main(){
    char str[MAX], c;
    int i;
    printf("Digite uma string: ");
    scanf("%[^\n]%*c", str);
    printf("Digite um caracter para ser inserido na string acima: ");
    scanf("%c", &c);
    printf("Digite a posicao de insercao(comecando por 0): ");
    scanf("%d", &i);

    inserirCaracter(str,c,i);
    printf("String alterada: %s", str);
    
    return 0;
}


