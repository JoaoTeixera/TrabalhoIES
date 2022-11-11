//Exercicio 6 Structs

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20

typedef struct no{          //definicao da struct no(referente ao produto)
    char nome[80];
    float preco;
}No;

typedef struct lista{      //definicao da struct Lista
    No prod[MAX];
    int posLivre;
}Lista;

Lista* criarLista(){    //cria a lista simples
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->posLivre = 0;
    return l;
}

void inserir(Lista *l, No prod){ //insere na lista
    l->prod[l->posLivre++] = prod;
}

void imprimeDado(No no){ //imprime o dado do produto
    printf("\n");
    printf("Nome: %s\n", no.nome);
    printf("Preco: R$%.2f\n", no.preco);
    
}

void imprimirLista(Lista *l, int qtd){ //imprime a lista completa
    for(int i = 0; i < qtd; i++){
        imprimeDado(l->prod[i]);
    }
}

void ordenarNomes(Lista *l, int qtd){ //bubble sort com os nomes dos produtos
    int k, j;
    No aux;
    for (k = qtd-1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (strcmp(l->prod[j].nome, l->prod[j+1].nome) > 0) {
                aux = l->prod[j];
                l->prod[j] = l->prod[j+1];
                l->prod[j+1] = aux;
            }
        }
    }
}

void inflacionar(Lista *l, int qtd){ //aumenta o valor dos produtos em 5% se forem menores que R$100
    No aux; 
    float juro, preco;
    for(int i = 0 ; i < qtd; i++){
        aux = l->prod[i];
        preco = aux.preco;
        if(preco < 100.00){
            juro = preco*0.05;
            preco += juro;
            l->prod[i].preco = preco;
        }
        
    }
}

int main(){
    //inicio das declaracoes de variaveis e estruturas
    char nome[80];
    float preco;
    int qtd;
    
    Lista *l;
    l = criarLista();
    
    //pergunta a quantidade de produtos pra serem cadastrados
    printf("Digite a quantidade de produtos: ");
    scanf("%d%*c", &qtd);
    
    //inicio do loop 
    for(int i = 0; i < qtd ; i++){
        printf("Digite o nome do produto: ");
        scanf("%[^\n]%*c", nome);
        
        printf("Digite o preco do produto: ");
        scanf("%f%*c", &preco);
        No aux;
        strcpy(aux.nome, nome);
        aux.preco = preco;
        inserir(l, aux);
    }
    
    //ordenacoes e atualizacoes de valores
    ordenarNomes(l,qtd);
    inflacionar(l,qtd);
    
    //impressao da lista final
    imprimirLista(l,qtd);
    return 0;
}
