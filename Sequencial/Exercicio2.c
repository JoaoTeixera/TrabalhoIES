//Exercicio 2

#include <stdio.h>

int main(){
    int i = 1;
    int n = 0;
    for ( i = 0; i < 10; i++){

        printf("Tabuada do %d:\n", i);
        for ( n = 0; n < 10; n++)
        {
            printf("%dx%d = %d\n", n, i, n*i);
        }
        printf("\n");
        
    }

    return 0;
}
