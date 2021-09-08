/*
Considere duas listas encadeadas L1 e L2, onde cada nó da lista possui duas partes: 
dado, que guarda um número inteiro e prox, que guarda o endereço do próximo nó.
Faça uma função que receba as duas listas como parâmetros e as concatene.
L1 e L2 são simplesmente encadeadas, circulares e sem nós cabeça.
*/

#include <stdio.h>
#include <stdlib.h>

struct NO{
    int dado;
    struct NO *prox;
};
typedef struct NO lista;

int buscaElem(lista *L, int elem, lista **pre){
    lista *aux, *preL;

    *pre = NULL;
    if(L == NULL) return 0;
    else if(elem > aux->dado) return 0;
    else if(elem == aux->dado) return 1;
    aux = L->prox;
    preL = L;
    while((aux != L) && elem > aux->dado){
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if(elem == aux->dado) return 1;
}

lista *insereElem(lista *L, int elem){
    lista *pre, *el, *aux;
    if (!buscaElem(L, elem, &pre)){
        el = (lista *)malloc(sizeof(lista));
        el->dado = elem;
        if(L == NULL){
            el->prox = el;
            L = el;
        } 
        else if(pre == NULL){
            aux = L->prox;
            pre = L;
            while(aux != L){
                pre = aux;
                aux = aux->prox;
            }
            L = el;
        }
        el->prox = pre->prox;
        pre->prox = el;
    } else printf("  Erro: Elemento já existe\n");
    return L;
}

void imprimeLista(lista *L){
    lista *aux;
    if(L != NULL){
        printf(" -> %d", L->dado);
        aux = L->prox;
        while(aux != L){
            printf(" -> %d", aux->dado);
            aux = aux->prox;
        }
    }
}

lista *concatenaLista(lista *L1, lista *L2){
    lista *aux1, *aux2;

    if(L2 != NULL){
        if(L1 != NULL){
            aux1 = L1;
            while(aux1->prox != L1){
                aux1 = aux1->prox;
            }
            aux1->prox = L2;
            aux2 = L2;
            while(aux2->prox!=L2){
                aux2 = aux2->prox;
            }
            aux2->prox = L1;
        } else L1 = L2;  
    }
    return L1;
}

int main(){
    lista *L1, *L2;
    int num;

    L1 = NULL;
    L2 = NULL;

    printf("Escreva números inteiros. Escreva um número negativo para terminar a lista.\n");
    printf("\n=== Lista 1 ===\n");
    printf("Escreva um número: ");
    scanf("%d", &num);
    while(num >= 0){
        L1 = insereElem(L1, num);
        printf("Escreva um número: ");
        scanf("%d", &num);
    }
    printf("\n=== Lista 2 ===\n");
    printf("Escreva um número: ");
    scanf("%d", &num);
    while(num >= 0){
        L2 = insereElem(L2, num);
        printf("Escreva um número: ");
        scanf("%d", &num);
    }

    printf("\nL1");
    imprimeLista(L1);

    printf("\nL2");
    imprimeLista(L2);

    L1 = concatenaLista(L1, L2);
    printf("\nL1+L2");
    imprimeLista(L1);

    return 0;
}