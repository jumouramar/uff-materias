#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO lista;

int buscaElem(lista *L, int elem){
    lista *aux;
    aux = L;
    while(aux != NULL){
        if (elem == aux->info) return 1;
        aux = aux->prox;
    }
    return 0;
}

lista *insereElem(lista *L, int elem){
    lista *pre, *el;
    if (!buscaElem(L, elem)){
        el = (lista *)malloc(sizeof(lista));
        el->info = elem;
        el->prox = L;
        L = el;
    } else printf("  Erro: Elemento já existe\n");
    return L;
}

void imprimeLista(lista *L){
    while(L != NULL){
        printf(" -> %d", L->info);
        L = L->prox;
    }
}

int menu(){
    int op;
    printf("\n\n===  MENU ===\n");
    printf("1 - Interseção\n");
    printf("2 - União\n");
    printf("3 - Subconjunto\n");
    printf("4 - Pertinencia\n");
    printf("5 - Sair\n");
    printf("Qual operação executar? ");
    scanf("%d", &op);
    return op;
}

void intersecao(lista *L1, lista *L2) {
    lista *aux;
    while (L1 != NULL) {
        aux = L2;
        while (aux != NULL) {
            if (L1->info == aux->info) {
                printf(" -> %d", aux->info);
                break;
            }
            aux = aux->prox;
        }
        L1 = L1->prox;
    }
}

void uniao(lista *L1, lista *L2) {
    lista *aux;
    int achou;
    while (L1 != NULL) {
        aux = L2;
        achou = 0;
        while (aux != NULL) {
            if (L1->info == aux->info) {
                achou = 1; 
                break;
            } 
            else aux = aux->prox;
        }
        if (!achou) printf(" -> %d",L1->info);
        L1 = L1->prox;
    }
    aux = L2;
    while (aux != NULL) {
        printf(" -> %d",aux->info);
        aux = aux->prox;
    }
}

void pertence(lista *L1, lista *L2, int elem) {
    if (buscaElem(L1,elem)) 
        printf("Elemento pertence a L1\n");
    else
        printf("Elemento nao pertenece a L1\n");
    
    if (buscaElem(L2,elem)) 
        printf("Elemento pertence a L2\n");
    else
        printf("Elemento nao pertenece a L2\n");
}
    
int subconjunto(lista *LA, lista *LB) {
    lista *aux;
    int achou;
    
    // Verifica se LA È subconjunto de LB
    while (LA != NULL) {
        aux = LB;
        achou = 0;
        while (aux != NULL) {
            if (LA->info == aux->info) {
                achou = 1; 
                break;
            } else
                aux = aux->prox;
        }
        if (!achou)
            return 0;
        LA = LA->prox;
    }
    return 1;
}

int main(){

    lista *L1, *L2;
    int num, op;

    L1 = NULL;
    L2 = NULL;

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

    do{
        op = menu();
        switch(op){
            case 1:
                printf("\nIntersecao");
                intersecao(L1,L2);
                break;
            case 2:
                printf("\nUniao");
                uniao(L1,L2);
                break;
            case 3:
                printf("\nSubconjunto\n");
                if (subconjunto(L1,L2)) 
                    printf("\nL1 é subconjunto de L2");
                else
                    printf("\nL1 não é subconjunto de L2");
                if (subconjunto(L2,L1)) 
                    printf("\nL2 é subconjunto de L1");
                else
                    printf("\nL2 não é subconjunto de L1");
                break;
            case 4:
                printf("\nPertence\n");
                printf("Digite um num: ");
                scanf("%d", &num);
                pertence(L1,L2,num);
                break;
            case 5:
                printf("\nFinalizando programa...\n\n");
                break;
            default:
                printf("\nOperação inválida, digite novamente...");
        }
    } while(op != 5);
    
    return 0;
}
