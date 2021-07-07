/* Ler 20 números inteiros e depois imprimí-los na ordem contrária em que foram lidos. */

#include <stdio.h>

int main(){
    int vetor[20];
    for(int i = 0; i<20; i++){
        printf("Escreva o %d° valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int j = 19; j>=0; j--){
        if(j == 0) printf("%d\n", vetor[j]);
        else printf("%d ", vetor[j]);
    }
    return 0;
}