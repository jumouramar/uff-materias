#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO lista;

void insereFinal(lista **L, int elem){
    lista *aux, *preL, *el;
    int achou = 0;
    aux = (*L)->prox;
    preL = (*L);
    while(aux != NULL){
        if(aux->info == elem){
            achou = 1;
            break;
        }
        preL = aux;
        aux = aux->prox;
    }
    if(!achou){
        el = (lista *)malloc(sizeof(lista));
        el->info = elem;
        el->prox = NULL;
        preL->prox = el;
        preL = el;
    }
}

lista *intercala(lista *L1, lista *L2){
    lista *aux1, *aux2;
    aux1 = L1;
    while (L2 != NULL) {
        aux2 = L2->prox;
        L2->prox = aux1->prox;
        aux1->prox = L2;
        aux1 = L2->prox;
        L2 = aux2;
    }
    return L1;
}

void imprimeLista(lista *L){
    while(L != NULL){
        printf(" -> %d", L->info);
        L = L->prox;
    }
    printf("\n");
}

void imprimeListaReverso(lista *L){
    if(L != NULL){
        imprimeListaReverso(L->prox);
        printf(" -> %d", L->info);
    }
}

int main(){
    lista *L1, *L2;
    int n, elem;

    L1 = (lista *) malloc(sizeof(lista));
    L1->prox = NULL;
    L2 = (lista *) malloc(sizeof(lista));
    L2->prox = NULL;

    printf("Quantos números inteiros a lista terá?\n--> ");
    scanf("%d", &n);

    printf("\n=== LISTA L1 ===\n");
    for(int i = 0; i<n; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &elem);
        insereFinal(&L1, elem);
    }

    printf("\n=== LISTA L2 ===\n");
    for(int i = 0; i<n; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &elem);
        insereFinal(&L2, elem);
    }

    printf("\nL1");
    imprimeLista(L1);
    printf("L2");
    imprimeLista(L2);
    intercala(L1, L2);
    printf("L1+L2");
    imprimeListaReverso(L1->prox);
    printf("\n");

    return 0;
}