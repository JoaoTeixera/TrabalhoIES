// Exercicio 5 de Matrizes

#include <stdio.h>


void lerMatriz(int lin, int col, int mat[lin][col]){
	int val = 0;
	for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			scanf("%d", &val);
			mat[i][j] = val;
		}
	}
}
void imprimirMatriz(int lin, int col, int mat[lin][col]){
	for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++)
			printf("%d ", mat[i][j]);
		printf("\n");	
	}
}
void diagonalPrincipal(int lin, int col, int mat[lin][col]){
    for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
		    if(i==j){printf("%d ", mat[i][j]);}
		    else{printf("x ");}
		}
		printf("\n");
	}
}
int main(){
    int lin = 4, col = 4;
    int mat[lin][col];
    
    
	lerMatriz(lin, col, mat);
	imprimirMatriz(lin, col, mat);
    
    diagonalPrincipal(lin,col,mat);
	
	
	return 0;
}



