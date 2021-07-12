/* Faça um programa que preencha uma matriz NxN e que escreva a soma dos elementos da diagonal principal.
a. Faça uma função para preencher a matriz;
b. Faça uma função que escreva a matriz formatada;
c. Faça uma função que retorne a soma dos elementos da diagonal principal. */

#include <stdio.h>

#define n 4

void preencher(int matN[n][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("Insira o elemento %d,%d: ", i, j);
            scanf("%d", &matN[i][j]);
        }
    }
}

void escrever(int matN[n][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++)
            printf("%d ", matN[i][j]);
        printf("\n");
    }
}

int somar(int matN[n][n]){
    int soma = 0;
    for(int i = 0; i<n; i++){
        soma += matN[i][i];
    }
    return soma;
}

int main(){

    int matN[n][n];
    preencher(matN);
    escrever(matN);
    printf("A soma dos elementos é: %d", somar(matN));
    
    return 0;
}