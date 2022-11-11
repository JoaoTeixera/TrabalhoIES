//Exercicio 13 de String

#include <string.h>
#include <math.h>
#include <stdio.h>
#define MAX 100



int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}


int converterParaDecimal(char *num, int base){
    int x = 0, i = 0;
    int tam = tamanhoString(num);
    switch(base){
        //converte de binario para decimal
        case 2:
            while(tam--){
                if(num[tam] == '0' || num[tam] == '1')
                    x += pow(2,i++) * (num[tam] - '0');
            }
            return x;
        break;
        //converte de octal para decimal
        case 8:
            while(tam--){
                if(num[tam] >= 48 && num[tam] <= 55)
                    x += pow(8,i++) * (num[tam] - 48);
            }
            return x;
        break;
        //converte de hexadecimal para decimal
        case 16:
            while(tam--){
                if(num[tam] >= 48 && num[tam] <= 57){
                    x += pow(16,i++) * (num[tam]-48);
                }else
                if(num[tam] >= 65 && num[tam] <= 70){
                    x += pow(16,i++) * (num[tam]-55);
                }else
                if(num[tam] >= 87 && num[tam] <= 102){
                    x += pow(16,i++) * (num[tam]-87);
                }
            }
            return x;
        break;
    }
}

int main(){
    char str[MAX];
    int n;
    printf("Digite um numero para conversao em decimal: ");
    scanf("%[^\n]%*c", str);
    printf("Digite a base do numero digitado: ");
    scanf("%d",&n);
    
    int x = converterParaDecimal(str,n);
    printf("Numero convertido em decimal: %d", x);
    
    return 0;
}



