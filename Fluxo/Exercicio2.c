#include <stdio.h>

int main()
{
    for(int i = 0; i < 127; i++){
        printf("%d\t%x\t%c\n",i,i,i);
    }
    return 0;
}
