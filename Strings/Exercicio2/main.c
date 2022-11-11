//Exercicio 2 de String

#include <stdio.h>
#define MAX 100

int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void imprimirString(char* str){
    for(int i = 0; i< tamanhoString(str); i++){
        if(str[i] == ' ')
            printf("\n");
        else 
            printf("%c", str[i]);
    }
}

int main(){
    char str[MAX];
    scanf("%[^\n]%*c", str);
    imprimirString(str);
    return 0;
}


