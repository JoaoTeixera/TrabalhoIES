//Exercicio 1 de String

#include <stdio.h>

char *num = "1234567890";
char pont[] = {',','.',';','?','!',':','(',')'};
char *min = "abcdefghijklmnopqrstuvwxyz";

int tamanhoString(char *str){
    int i=0;
    while(str[i]!='\0'){i++;}
    return i;
}

int quantPont(char* str){
    int cont = 0;
    for(int i = 0; i< tamanhoString(str); i++){
        for(int j = 0; j< tamanhoString(pont); j++){
            if(str[i] == pont[j]) 
                cont++;
        }
    }
    return cont;
}

int quantNum(char* str){
    int cont = 0;
    for(int i = 0; i< tamanhoString(str); i++){
        for(int j = 0; j< tamanhoString(num); j++){
            if(str[i] == num[j]) 
                cont++;
        }
    }
    return cont;
}

int quantMin(char* str){
    int cont = 0;
    for(int i = 0; i< tamanhoString(str); i++){
        for(int j = 0; j< tamanhoString(min); j++){
            if(str[i] == min[j]) 
                cont++;
        }
    }
    return cont;
}

int main(){
    char str[80];
    scanf("%[^\n]%*c", str);
    int tam = tamanhoString(str);
    int pon = quantPont(str);
    int num = quantNum(str);
    int min = quantMin(str);
    printf("Tamanho da String: %d\n", tam);
    printf("Caracteres de Pontuacao: %d\n", pon);
    printf("Caracteres Numericos: %d\n", num);
    printf("Caracteres Minusculos: %d\n", min);
    return 0;
}

