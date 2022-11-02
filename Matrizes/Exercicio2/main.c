// Exercicio 2 de Matrizes

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
void somarColunas(int lin, int col, int mat[lin][col], int colunas[lin]){
    int soma;
    for(int j = 0; j < lin; j++){
        soma = 0;
		for (int i = 0; i < col; i++){
		    soma += mat[i][j];
		}
		colunas[j] = soma;
	}
}
int main(){
    int lin = 4, col = 4;
    int soma[lin], mat[lin][col];
	lerMatriz(lin, col, mat);
	imprimirMatriz(lin, col, mat);
    
    somarColunas(lin, col, mat, soma);
    
	for(int i = 0; i < lin; i++){
	    printf("A soma da coluna %d é: %d\n", i, soma[i]);
	}
	
	return 0;
}



