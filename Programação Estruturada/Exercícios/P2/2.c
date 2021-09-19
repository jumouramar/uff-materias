#include <stdio.h>
#include <stdlib.h>

struct NO{
    int num; 
    int tempo;
    struct NO *prox;
};
typedef struct NO fila;

void insereElem(fila **inicio, fila **final, int elem, int temp){
    fila *el;
    el = (fila*) malloc(sizeof(fila));
    el->num = elem;
    el->tempo = temp;
    el->prox = NULL;
    if ((*inicio) == NULL) 
        (*inicio) = el;
    else 
        (*final)->prox = el;
    (*final) = el;
}

fila *removeElem(fila *inicio){
    fila *lixo;
    lixo = inicio;
    inicio = inicio->prox;
    free(lixo);
    return inicio;
}

void executaProcessos(fila *inicio, fila *final){
    fila *aux;
    int num, temp;

    aux = inicio;
    printf("\nFila de Processos");
    while(aux != NULL){
        printf(" -> %d(%d)", aux->num, aux->tempo);
        aux = aux->prox;
    }
    printf("\n");
    while(inicio != NULL){
        num = inicio->num;
        temp = inicio->tempo;
        inicio = removeElem(inicio);
        printf("\nExecutando processo #%d - %dut", num, temp);

        if(temp > 20)
            insereElem(&inicio, &final, num, temp-20);
        
    }
    printf("\n\nProcessos encerrados.\n");
}

int main(){
    fila *inicio, *final;
    int num, tempo;
    
    inicio = NULL;
    final = NULL;

    printf("Número do processo (>=0): ");
    scanf("%d", &num);
    printf("Tempo de execução do processo: ");
    scanf("%d", &tempo);
    while(num >=0){
        insereElem(&inicio, &final, num, tempo);
        printf("Número de processo (>=0): ");
        scanf("%d", &num);
        printf("Tempo de execução do processo: ");
        scanf("%d", &tempo);
    }
    executaProcessos(inicio, final);

    return 0;
}