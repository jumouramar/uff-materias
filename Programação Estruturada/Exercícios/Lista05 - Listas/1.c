/* Faça uma função recursiva que retorne o número de nós contidos em uma lista L. 
Considere que L é simplesmente encadeada, sem nó cabeça e não circular. 
Os elementos de L não estão necessariamente em ordem. */

#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO lista;

void insereElem(lista **L, int elem, lista **final){
    lista *el;
    el = (lista *)malloc(sizeof(lista));
    el->info = elem;
    el->prox = NULL;
    if((*L) == NULL){
        (*L) = el;
    } else {
        (*final)->prox = el;
    }
    (*final) = el;
}

void imprimeLista(lista *L){
    lista *aux;
    aux = L;
    while(aux != NULL){
        printf(" -> %d", aux->info);
        aux = aux->prox;
    }
    printf("\n");
}

int numeroNO(lista *L){
    if(L->prox == NULL) return 1;
    return(numeroNO(L->prox) + 1);
}

int main(){
    lista *L;
    lista *final;
    int num;

    L = NULL;
    final = L;
    
    printf("Escreva números inteiros para inserir na lista.\nPara terminar escreva um número negativo.\n");
    printf("Elemento: ");
    scanf("%d", &num);
    while(num >= 0){
        insereElem(&L, num, &final);
        printf("Elemento: ");
        scanf("%d", &num);
    }
    
    printf("\nLista");
    imprimeLista(L);

    printf("\nNúmero de nós: %d\n\n", numeroNO(L));

    return 0;
}