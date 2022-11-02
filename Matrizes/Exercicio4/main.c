// Exercicio 4 de Matrizes

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
int menorElemento(int lin, int col, int mat[lin][col]){
    int menor = mat[0][0];
    for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
		    if(menor > mat[i][j]){menor = mat[i][j];}
		}
	}
	return menor;
}
int main(){
    int lin = 3, col = 3;
    int mat[lin][col];
    
    
	lerMatriz(lin, col, mat);
	imprimirMatriz(lin, col, mat);
    
    printf("O menor elemento é: %d\n", menorElemento(lin, col, mat));
	
	
	return 0;
}



