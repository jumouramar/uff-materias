#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO lista;

int buscaElem(lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L->prox;   // mudança aqui
    preL = L;        // mudança aqui
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
        el->prox = pre->prox;  // mudança aqui // Não é necessário testar se o nó 
        // a ser removido é o primeiro da lista, pois agora sempre existe o nó cabeça
        pre->prox = el;
    } else printf("  Erro: Elemento já existe\n");
    return L;
}

lista *removeElem(lista *L, int elem){
    lista *pre, *lixo;
    if (buscaElem(L, elem, &pre)) {
        lixo = pre->prox;
        pre->prox = lixo->prox;  // mudança aqui
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

int main(){
    lista *L;
    int num;

    L = (lista *) malloc(sizeof(lista));
    L->prox = NULL;

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