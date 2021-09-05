/* Crie uma lista encadeada L com números inteiros. Os números devem ser inseridos na lista em ordem crescente até que o usuário digite um número negativo.
   A lista não deve possuir números repetidos
   Ao final do programa, imprima a lista
   Devem ser criadas as funções de buscaElemento, insereElemento e ImprimeLista */

#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;
    struct NO *prox;
};
typedef struct NO lista;

int buscaElem(lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL = NULL;
    while ((aux != NULL) && (elem > aux->info)){
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (elem == aux->info)) return 1;
    return 0;
}

lista *insereElem(lista *L, int elem){
    lista *pre, *el;
    if (!buscaElem(L, elem, &pre)){
        el = (lista *)malloc(sizeof(lista));
        el->info = elem;
        if(L == NULL || pre == NULL){
            el->prox = L;
            L = el;
        } else {
            el->prox = pre->prox;
            pre->prox = el;
        }
    } else printf("  Erro: Elemento já existe\n");
    return L;
}

lista *removeElem(lista *L, int elem){
    lista *pre, *lixo;
    if (buscaElem(L, elem, &pre)) {
        if (L->info == elem) {
            lixo = L;
            L = L->prox;
        } else {
            lixo = pre->prox;
            pre->prox = lixo->prox;
        }
        free(lixo);
    } else printf("  Erro: Elemento %d não existe\n", elem);
    return L;
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

int main(void){
    lista *L;
    int num;
    L = NULL;

    printf("Insira um número (>=0): ");
    scanf("%d", &num);
    while (num >=0) {
        L = insereElem(L,num);
        printf("Insira um número (>=0): ");
        scanf("%d", &num);
    }
    
    printf("\nLista");
    imprimeLista(L);
    
    printf("\nRemova um número: ");
    scanf("%d", &num);
    removeElem(L,num);

    printf("\nLista");
    imprimeLista(L);

    return 0;
}