#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO lista;

void buscaElemMaior(lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L->prox;
    preL = L;
    while ((aux != NULL) && (elem > aux->info)){
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
}

lista *insereElem(lista *L, int elem){
    lista *pre, *el;
    buscaElemMaior(L, elem, &pre);
    el = (lista *)malloc(sizeof(lista));
    el->info = elem;
    el->prox = pre->prox;
    pre->prox = el;
    return L;
}

void imprimeLista(lista *L){
    while(L != NULL){
        printf(" -> %d", L->info);
        L = L->prox;
    }
    printf("\n");
}

lista *combinaLista(lista *L1, lista *L2) { 
    lista *aux1, *aux2, *pre1, *pre2; 
    pre1 = L1;
    aux1 = L1->prox;
    pre2 = L2;
    aux2 = L2->prox;
    while (aux1 != NULL && aux2 != NULL) {
        while ((aux1 != NULL) && (aux1->info <= aux2->info)) {
            pre1 = aux1;
            aux1 = aux1->prox;
        }
        pre1->prox = aux2;
        if (aux1 != NULL) {
            while ((aux2 != NULL) && (aux2->info <= aux1->info)) {
                pre2 = aux2;
                aux2 = aux2->prox;
            }
            pre2->prox = aux1;
        }
    }
    return L1;
}

int main(){
    lista *L1, *L2;
    int num;

    L1 = (lista *)malloc(sizeof(lista));
    L1->prox = NULL;
    L2 = (lista *)malloc(sizeof(lista));
    L2->prox = NULL;

    printf("\n=== LISTA L1 ===\n");
    printf("Número inteiro positivo: ");
    scanf("%d", &num);
    while(num>0){
        L1 = insereElem(L1, num);
        printf("Número inteiro positivo: ");
        scanf("%d", &num);
    }

    printf("\n=== LISTA L2 ===\n");
    printf("Número inteiro positivo: ");
    scanf("%d", &num);
    while(num>0){
        L2 = insereElem(L2, num);
        printf("Número inteiro positivo: ");
        scanf("%d", &num);
    }

    printf("\nL1");
    imprimeLista(L1);
    printf("\nL2");
    imprimeLista(L2);
    L1 = combinaLista(L1, L2);
    printf("\nL1+L2");
    imprimeLista(L1->prox);

    return 0;
}