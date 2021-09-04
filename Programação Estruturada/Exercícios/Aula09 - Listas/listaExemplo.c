#include <stdio.h>

#define MAX 20

struct LISTA {
    int dado[MAX];
    int total;
};
typedef struct LISTA lista;

int busca(lista *L, int elem, int *pos) {
  
  int i = 0;

  while (i < L->total && elem > L->dado[i])
    i++;
  (*pos) = i;

  if (L->total == i) //foi até o fim e não encontrou
    return 0;
  else if (elem == L->dado[i])
    return 1;
  else
    return 0;
}

void imprimeLista(lista *L) {
  for (int i = 0; i<L->total; i++)
    printf("[%d]\n", L->dado[i]);
}


void insertElem(lista *L, int num) {

  int pos, achou, i;
    
  achou = busca(L, num, &pos);

  if (!achou) {
    for (i = L->total; i>pos; i--)
      L->dado[i] = L->dado[i-1];

    L->dado[i] = num;
    L->total++;
  } else
    printf("Elemento já existe!\n");

}

void removeElem(lista *L, int num) {

  int pos, achou, i;
    
  achou = busca(L, num, &pos);
  if (achou) {
    for (i = pos; i<L->total-1; i++)
      L->dado[i] = L->dado[i+1];

    L->total--;
  } else
    printf("Elemento não existe!\n");

}

int main(void) {
    
  lista L;
  int num, N;
    
  L.total=0;

  printf("Digite a quantidade de elementos para inserir: ");
  scanf("%d", &N);
  for (int i=0; i<N; i++){
    printf("\nDigite o numero para inserir: ");
    scanf("%d", &num);
    insertElem(&L,num);
  }
  
  printf("\n\n ESTADO de L \n");
  imprimeLista(&L);
   
  printf("\n\nDigite a quantidade de elementos para remover: ");
  scanf("%d", &N);
  for (int i=0; i<N; i++){
    printf("\nDigite o numero para remover: ");
    scanf("%d", &num);
    removeElem(&L,num);
  }
  
  printf("\n\n ESTADO de L \n");
  imprimeLista(&L);

  return 0;
}