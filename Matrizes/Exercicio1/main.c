// Exercicio 1 de Matrizes

#include <stdio.h>
#define TAM 3

void lerMatriz(int n, int mat[n][n]){
	int val=0;
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &val);
			mat[i][j] = val;
		}
	}
}
void imprimirMatriz(int n, int mat[n][n]){
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		printf("\n");	
	}
}
int somarImpares(int n, int mat[n][n]){
    int soma = 0;
    for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    if(mat[i][j]%2 != 0)
		        soma+=mat[i][j];
		}
	}
	return soma;
}
int main(){
    int mat[TAM][TAM];
	lerMatriz(TAM,mat);
	imprimirMatriz(TAM,mat);
	printf("A soma dos impares é: %d\n", somarImpares(TAM,mat));
	return 0;
}