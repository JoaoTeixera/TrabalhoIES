//Exercicio 5 de String

#include <string.h>
#include <stdio.h>
#define MAX 100


int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

int simOuNao(char *str){
    if(strcmp(str,"SIM") == 0) {return 1;}
    if(strcmp(str,"NAO") == 0) {return 0;}
    
}

int main(){
    char str[MAX];

    scanf("%[^\n]%*c", str);
    printf("%d",simOuNao(str));
    return 0;
}



