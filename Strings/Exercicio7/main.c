//Exercicio 7 de String

#include <stdio.h>
#define MAX 100

int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

void copiarString(char *dst, char *src){
    for(int i = 0; i< tamanhoString(src); i++){
        dst[i] = src[i];
    }
}

int main(){
    char str1[MAX], str2[MAX];
    scanf("%[^\n]%*c", str1);
    copiarString(str2,str1);
    printf("%s",str2);
    return 0;
}