//Exercicio 3 de String

#include <stdio.h>
#define MAX 100


int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void imprimirStringReverso(char *str){
    if(*str != '\0'){
        imprimirStringReverso(str+1);
        printf("%c", *str);
    }
}

void imprimirString(char *str){
    if(*str != '\0'){
        printf("%c", *str);
        imprimirString(str+1);
    }
}

int main(){
    char str[MAX];
    scanf("%[^\n]%*c", str);
    printf("String normal: ");
    imprimirString(str);
    printf("\nString reversa: ");
    imprimirStringReverso(str);
    return 0;
}




