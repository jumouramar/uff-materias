/* IMPLEMENTAÇÃO DE UMA PILHA DE INTEIROS EM VETOR */

#include <stdio.h>

#define MAX 100

struct PILHA {
    int dado[MAX];
    int topo;
};
typedef struct PILHA pilha;

// função para inserir elemento no topo da pilha
void push(pilha *P, int num) {
	if(P->topo < MAX-1) {
		P->topo++;
		P->dado[P->topo] = num;
	}
}

// função para remover o elemento do topo da pilha
int pop(pilha *P) {
	int num;
	if(P->topo >= 0) {
		num = P->dado[P->topo];
		P->topo--;
	}
	return num;
}

int main(void) {
	pilha P;
	int N, elem;

	P.topo = -1;

	printf("\nDigite a quantidade de elementos: ");
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		printf("Digite o elemento para inserir em P: ");
		scanf("%d", &elem);
		push(&P, elem);
	}
	
	printf("\n=== PILHA ===\n");
	while(P.topo >= 0){
		elem = pop(&P);
		printf("     [%d]\n", elem);
	}

	return 0;
}