// Exercicio 3 de Matrizes

#include <stdio.h>


void lerMatriz(int lin, int col, double mat[lin][col]){
	double val = 0.0;
	for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			scanf("%lf", &val);
			mat[i][j] = val;
		}
	}
}
void imprimirMatriz(int lin, int col, double mat[lin][col]){
	for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++)
			printf("%.2lf ", mat[i][j]);
		printf("\n");	
	}
}
void somarLinhas(int lin, int col, double mat[lin][col], double linhas[lin]){
    double soma;
    for(int i = 0; i < lin; i++){
        soma = 0;
		for (int j = 0; j < col; j++){
		    soma += mat[i][j];
		}
		linhas[i] = soma;
	}
}
int main(){
    int lin = 3, col = 4;
    double soma[lin], mat[lin][col];
	lerMatriz(lin, col, mat);
	imprimirMatriz(lin, col, mat);
    
    somarLinhas(lin, col, mat, soma);
    
	for(int i = 0; i < lin; i++){
	    printf("A soma da linha %d é: %.2lf\n", i, soma[i]);
	}
	
	return 0;
}


