/* Faça um programa que preencha uma matInt 3x4 com números inteiros.
a. Faça uma função para preencher a matInt;
b. Faça uma função que escreva a matInt formatada; */

#include <stdio.h>

#define linha 3
#define coluna 4

void preencher(int matInt[linha][coluna]){
    for(int i = 0; i<linha; i++){
        for(int j = 0; j<coluna; j++){
            printf("Insira o elemento %d,%d: ", i, j);
            scanf("%d", &matInt[i][j]);
        }
    }
}

void escrever(int matInt[linha][coluna]){
    for(int i = 0; i<linha; i++){
        for(int j = 0; j<coluna; j++)
            printf("%d ", matInt[i][j]);
        printf("\n");
    }
}

int main(){

    int matInt[linha][coluna];
    preencher(matInt);
    escrever(matInt);
    
    return 0;
}