/* Faça uma função para preencher 2 vetores de X posições cada, com números inteiros. Fazer uma função que receba os dois vetores como parâmetros e que retorne a quantidade de posições que possuem números distintos. */

#include <stdio.h>

int preenche(int *vet, int x){
    for(int i = 0; i<x; i++){
        printf("Número da posição %d: ", i+1);
        scanf("%d", &vet[i]);
    }
}

int compara(int *vet1, int *vet2, int x){
    int qtd = 0;
    for(int k = 0; k<x; k++){
        if(vet1[k] != vet2[k])
            qtd++;
    }
    return qtd;
}

int main(){

    int x, vet1[x], vet2[x];
    printf("Escreva a quantidade de posições: ");
    scanf("%d", &x);

    printf("Vetor 1\n");
    preenche(vet1, x);
    printf("Vetor 2");
    preenche(vet2, x);

    printf("Distintos: %d\n", compara(vet1, vet2, x));

    return 0;
}