//Exercicio 5 Structs

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no{          //definicao da struct no
    char nome[30];
    char endereco[100];
    char fone[10];
    long int cep;
    struct no *prox;
}No;

typedef struct agenda{      //definicao da struct agenda
    No *topo;
}Agenda;

int vazia(Agenda* a){       //Funcoes de validacao e criacao da Agenda
    return (a->topo == NULL);
}
Agenda* criarAgenda(){
    Agenda* a = (Agenda*)malloc(sizeof(Agenda));
    a->topo = NULL;
    return a;
}

void apresentarMenu(){          //Funcao estetica para apresentar o menu
    printf("Entrar com um novo nome --> 1\n");
    printf("Imprimir na tela os dados de uma pessoa --> 2\n");
    printf("Imprimir uma lista de nomes cadastrados --> 3\n");
    printf("Fim --> 4\n");
}

void inserir(Agenda *a, char nome[30], char endereco[100], char fone[10], long int cep){ //Funcao insere
    No* aux = (No*)malloc(sizeof(No));
    strcpy(aux->nome, nome);
    strcpy(aux->endereco, endereco);
    strcpy(aux->fone, fone);
    aux->cep = cep;
    
    aux->prox = a->topo;
    a->topo = aux;
}

void imprimePessoa(No *aux){            //Imprime os dados da pessoa cadastrada
    printf("\n");
    printf("Nome: %s\n", aux->nome);
    printf("Endereco: %s\n", aux->endereco);
    printf("Telefone: %s\n", aux->fone);
    printf("CEP: %ld\n", aux->cep);
    printf("\n");
}

void imprimirListaDados(Agenda *a, char nome[30]){ //imprime a lista de dados da pessoa com o nome
    No* aux = a->topo;                             //passado por parametro
    while(aux != NULL){
        if(strcmp(aux->nome, nome) == 0){
            imprimePessoa(aux);
        }
        aux = aux->prox;
    }
}

void ImprimirLista(Agenda *a, char c){ // imprime a lista de dados da pessoa com o nome iniciando
    No *aux = a->topo;                 // com o caractere passado por parametro
    while(aux != NULL){
        if(aux->nome[0] == c){
            imprimePessoa(aux);
        }
        
        aux = aux->prox;
    }
}

int main(){
    //inicio das declaracoes de variaveis e estruturas
    char nome[30];
    char endereco[100];
    char fone[10];
    char c;
    long int cep;
    
    Agenda *a;
    a = criarAgenda();
    int op;
    
    //apresenta o menu de opcoes e pede uma opcao 
    apresentarMenu();
    printf("Escolha uma opcao: ");
    scanf("%d%*c", &op);
    
    
    while(op != 4){//loop de opcoes ate a selecao do fim
        
        if(op == 1){//opcao 1 cadastra pessoa na agenda
            printf("\n");
            printf("Digite um nome: ");
            scanf("%[^\n]%*c", nome);
            printf("Digite um endereco: ");
            scanf("%[^\n]%*c", endereco);
            printf("Digite um fone: ");
            scanf("%[^\n]%*c", fone);
            printf("Digite um cep: ");
            scanf("%ld", &cep);
            printf("\n");
            inserir(a, nome, endereco, fone, cep);
        }
        
        if(op == 2){//opcao 2 imprime os dados da pessoa com o nome digitado
            printf("Digite um nome: ");
            scanf("%[^\n]%*c", nome);
            imprimirListaDados(a,nome);
        }
        
        if(op == 3){//opcao 3 imprime os dados da pessoa com o nome comecando com o caractere digitado
            printf("Digite um caractere: ");
            scanf("%c", &c);
            ImprimirLista(a,c);
        }
        
        apresentarMenu(); //apresenta o menu novamente e seleciona uma nova opcao
        printf("Escolha uma opcao: ");
        scanf("%d%*c", &op);
    }
    return 0;
}