/*
Crie uma fila encadeada com números inteiros
Os números devem ser inseridos na pilha até que o usuário digite um número negativo
Ao final do programa, imprima a fila
Devem ser criadas as funções insere e remove
*/

#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO fila;

void insereElem(fila **inicio, fila **final, int elem){
    fila *el;
    el = (fila*) malloc(sizeof(fila));
    el->info =elem;
    el->prox = NULL;
    if ((*inicio) == NULL) 
        (*inicio) = el;
    else 
        (*final)->prox = el;
    (*final) = el;
}

fila *removeElem(fila *inicio){
    fila *lixo;
    if(inicio != NULL){
        lixo = inicio;
        inicio = inicio->prox;
        free(lixo);
    }
    return inicio;
}

/*
fila removeElem(fila **inicio){
    fila *lixo;
    if(*inicio != NULL){
        lixo = (*inicio);
        (*inicio) = inicio->prox;
        free(lixo);
    }
    return inicio;
}
*/

int main(){
    fila *inicio, *final;
    int num;
    inicio = NULL;
    final = NULL;

    printf("Insira um número (>=0): ");
    scanf("%d", &num);
    while(num >=0){
        insereElem(&inicio, &final, num);
        printf("Insira um número (>=0): ");
        scanf("%d", &num);
    }
    printf("\nFila");
    while(inicio != NULL){
        printf("-> %d", inicio->info);
        inicio = removeElem(inicio);
        printf("\n");
    }

    return 0;
}