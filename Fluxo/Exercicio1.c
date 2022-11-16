#include <stdio.h>

int main(){
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para x: ");
    scanf("%d", &y);


    if(x<y){
        while(x<=y)
            printf("%d ",x++);
    }else if(x>y){
        while(x>=y)
            printf("%d ",x--);
    }else printf("Valores iguais. ");
    printf("\n");

    return 0;
}
