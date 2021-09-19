/* Considere uma lista onde cada nó é composto pelo código, nome e preço de um produto. 
A lista está ordenada por ordem crescente do código do produto.
a. Considerando alocação sequencial estática, faça a declaração desta estrutura e uma função
que receba esta lista como parâmetro e que escreva os dados de todos os produtos contidos
na lista.
b. Considerando uma lista simplesmente encadeada dinâmica, faça a declaração desta
estrutura e uma função que calcule e retorne a média de preços. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NO{
    int codigo;
    char nome[10];
    float preco;
    struct NO *prox;
};
typedef struct NO lista;

lista *preencherLista(lista *L){
    int cod;
    char nom[10];
    float prec;
    lista *el;

    printf("Código do produto: ");
    scanf("%d", &cod);
    printf("Nome do produto: ");
    scanf("%s", nom);
    printf("Preço do produto: ");
    scanf("%f", &prec);
    
    el = (lista *)malloc(sizeof(lista));
    el->codigo = cod;
    strcpy(el->nome,nom);
    el->preco = prec;
    if(L == NULL) el->prox = NULL;
    else el->prox = L;
    L = el;

    return L;
}

void imprimeLista(lista *L){
    while(L != NULL){
        printf(" -> || %d | %s | %.2f ||", L->codigo, L->nome, L->preco);
        L = L->prox;
    }
    printf("\n");
}

float calculaPreco(lista *L){
    int qtd = 0;
    float preco = 0; 
    while(L != NULL){
        qtd++;
        preco += L->preco; 
        L = L->prox;
    }
    return preco/qtd;
}

int main(){
    lista *L;
    char op;
    float preco;

    L = NULL;

    printf("Deseja inserir um produto (S/n)? ");
    scanf(" %c", &op);
    while(op == 'S'){
        L = preencherLista(L);
        printf("Deseja inserir um produto (S/n)? ");
        scanf(" %c", &op);
    }

    printf("\nLISTA");
    imprimeLista(L);

    preco = calculaPreco(L);
    printf("A média de preços é: %.2f\n", preco);

    return 0;
}