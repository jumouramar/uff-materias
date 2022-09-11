#include <stdio.h>
#include <stdlib.h>

/* estrutura do nó de uma árvore binária */
typedef struct noA {
    char info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

TNoA *inicializa(void) {
    return NULL;
}

/* imprime usando o diagrama de barras */
void imprime(TNoA *nodo, int tab) {
    for (int i = 0; i < tab; i++) {
        printf("-");
    }
    if (nodo != NULL) {
        printf("%c\n", nodo->info);
        imprime(nodo->esq, tab + 2);
        printf("\n");
        imprime(nodo->dir, tab + 2);
    } else printf("vazio");
}

/* função para criar um nó
   retorna um ponteiro
   recebe como parâmetro "info" do nó */   
TNoA *criaNo(char ch) {
    TNoA *novo;
    novo = (TNoA *) malloc(sizeof(TNoA));
    novo->info = ch;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

int main(void) {
    TNoA *raiz;
    raiz = criaNo('A'); /* guarda o ponteiro para o primeiro nó */
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->dir->esq = criaNo('D');
    raiz->dir->dir = criaNo('E');
    imprime(raiz, 0);
};


