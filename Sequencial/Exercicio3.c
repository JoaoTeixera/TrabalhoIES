//Exercicio 3

#include <stdio.h>

int main(){
    int  i = 0, num, res[ i ], quo;			

    printf("Digite um numero para a conversao: ");
    scanf("%d", &num);


    quo = num/16;
    res[i] = num%16;		    		  

    for( ; quo>=16; quo/=16){		 	     	   
        i++;				   
        res[i] = quo%16;  	      		  		    		        	      
    }
    
    i++;          		  
    res[i] = quo;

    printf("%d em Hexadecimal: ", num);
    for( ; i >= 0; i--){ 
        if(res[i] >= 10)			 
        switch(res[i]){
            case 10 : printf("A"); break; 		
            case 11 : printf("B"); break;
            case 12 : printf("C"); break;
            case 13 : printf("D"); break;
            case 14 : printf("E"); break;
            case 15 : printf("F"); break;						 
            }	
        else	       		    	         
            printf("%d", res[i]);
    }
    return 0;
}
