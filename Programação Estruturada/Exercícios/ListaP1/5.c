/* Faça um programa que escreva uma série com os números inteiros compreendidos entre i e j. O intervalo entre os números deve ser k. Crie uma função recursiva imprimeSerie(i,j,k) que escreva os elementos desta série. */

#include <stdio.h>

void imprimeSerie(int i, int j, int k){
    if(i<=j){
        printf("%d\n", i);
        imprimeSerie(i+k,j,k);
    }
}

int main(){

    int i, j, k;
    printf("Escreva um número: ");
    scanf("%d", &i);
    printf("Escreva outro número: ");
    scanf("%d", &j);
    printf("Escreva o intervalo: ");
    scanf("%d", &k);

    imprimeSerie(i,j,k);

    return 0;
}
