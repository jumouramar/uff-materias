/*
Crie uma pilha encadeada com números inteiros. 
Os números devem ser inseridos na pilha até que o usuário digite um número negativo.
Ao final do programa, imprima a pilha
Devem ser criadas as funções push e pop
*/

#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO pilha;

pilha *push(pilha *topo, int elem){
    pilha *el;
    el = (pilha *)malloc(sizeof(pilha));
    el->info = elem;
    el->prox = topo;
    topo = el;
    return topo;
}

pilha *pop(pilha *topo){
    pilha *lixo;
    if(topo != NULL){
        lixo = topo;
        topo = topo->prox;
        free(lixo);
    }
    return topo;
}

int main(){
    pilha *topo; 
    int num;
    topo = NULL; 

    printf("Insira um número (>=0): ");
    scanf("%d", &num);
    while(num >=0){
        topo = push(topo,num);
        printf("Insira um número (>=0): ");
        scanf("%d", &num);
    }
    printf("\nPilha\n");
    while(topo != NULL){
        printf("[%d]\n", topo->info);
        topo = pop(topo);
    }
    return 0;
}