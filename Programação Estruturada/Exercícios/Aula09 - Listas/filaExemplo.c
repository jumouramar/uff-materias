/* IMPLEMENTAÇÃO DE UMA FILA DE INTEIROS EM VETOR */

#include <stdio.h>

#define MAX 100

struct FILA {
	int dado[MAX];
	int inicio, fim, total;
};
typedef struct FILA fila;

// função para inserir um elemento na fila
void insere(fila *F, int num) {
	if (F->total < MAX) {
		F->dado[F->fim] = num;
		F->fim++;
		F->fim = F->fim%MAX;
		F->total++;
	}
}

// função para remover um elemento da fila
int remover(fila *F) {
	int num;
	if (F->total > 0) {
		num = F->dado[F->inicio];
		F->inicio++;
		F->inicio = F->inicio%MAX;
		F->total--;
	}
	return num;
}

int main(void) {

	fila F;
  int proc, N, X;
	F.inicio = 0;
	F.fim = 0;
	F.total = 0;

  printf("Digite a quantidade de processos: ");
  scanf("%d", &N);
  for(int i = 0; i<N; i++){
    printf("Digite o número do processo que quer executar: ");
    scanf("%d", &proc);
    insere(&F, proc);
  }

  printf("\nDigite a quantidade de processos que executou: ");
  scanf("%d", &X);
  printf("\n\nEXECUTANDO processos...");
  for(int i = 0; i<X; i++)
    printf("\n[%d]", remover(&F));
  printf("\n\nO próximo é: %d", F.dado[F.inicio]);

	return 0;	
}