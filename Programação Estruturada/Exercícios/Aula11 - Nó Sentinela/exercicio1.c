/*
Crie uma lista encadeada L com nomes de frutas.
Os nomes devem ser inseridos na lista em ordem crescente.
A lista não deve possuir nomes repetidos.
Crie um MENU com as opções:
1 – Insere elemento
2 – Remove elemento
3 – Mostra lista
4 – Informa a quantidade de nós
5 – Fim do programa
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NO{
    char info[10];
    struct NO *prox;
};
typedef struct NO lista;

int menu(){
    int op;
    printf("\n=== MENU ===\n");
    printf("1 – Insere elemento\n2 – Remove elemento\n3 – Mostra lista\n4 – Informa a quantidade de nós\n5 – Fim do programa\n");
    printf("Qual operação realizar? --> ");
    scanf("%d", &op);
    printf("\n");
    return op;
}

int buscaElem(lista *L, char *fruta, lista **pre){
    lista *aux, *preL;
    aux = L->prox;   
    preL = L;        
    while ((aux != NULL) && (strcmp(fruta, aux->info) > 0)){
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (strcmp(fruta, aux->info) == 0)) return 1;
    return 0;
}

void insereElem(lista *L, char *fruta){
    lista *pre, *el;
    if (!buscaElem(L, fruta, &pre)){
        el = (lista *)malloc(sizeof(lista));
        strcpy(el->info, fruta);
        el->prox = pre->prox;
        pre->prox = el;
    } else printf("  Erro: Elemento já existe\n");
}

void removeElem(lista *L, char *fruta){
    lista *pre, *lixo;
    if (buscaElem(L, fruta, &pre)) {
        lixo = pre->prox;
        pre->prox = lixo->prox;  
        free(lixo);
    } else printf("  Erro: Fruta %s não existe\n", fruta);
}

int quantidadeNO(lista *L){
    if(L != NULL){
        return(quantidadeNO(L->prox)+1);
    } else return 0;
}

void imprimeLista(lista *L){
    if(L != NULL){
        printf(" -> %s", L->info);
        imprimeLista(L->prox);
    }
}

int main(){
    lista *L;
    char fruta[20];
    int op;

    L = (lista *) malloc(sizeof(lista));
    L->prox = NULL;

    do {
        op = menu();
        switch (op){
            case 1:
                printf("Digite o nome de uma fruta: ");
                scanf(" %s", fruta);
                insereElem(L, fruta);
                break;
            case 2:
                printf("Digite o nome de uma fruta: ");
                scanf(" %s", fruta);
                removeElem(L, fruta);
                break;
            case 3:
                printf("LISTA");
                imprimeLista(L->prox);
                printf("\n");
                break;
            case 4:
                printf("Quantidade de Nós: %d\n", quantidadeNO(L->prox));
                break;
            case 5:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Erro: Operação inválida.\n");
        }
    } while(op != 5);

    return 0;
}