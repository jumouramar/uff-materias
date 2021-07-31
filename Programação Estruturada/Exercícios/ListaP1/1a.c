/* Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são números que têm o mesmo valor se lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232, 1661, etc. O final da leitura é indicado por um número negativo. Faça uma função que irá retornar para o programa principal se o número é palíndromo ou não. */

#include <stdio.h>
#include <string.h>

int palindromo(int numero){
    char numChar[6];
    int tamChar,i;
    sprintf(numChar, "%d", numero);

    tamChar = strlen(numChar);

    for (i=0; i < tamChar/2; i++) {
        if (numChar[i] != numChar[tamChar-1-i])
            return 0;
    }
    return 1;
}

int main(){

    int numero;
    
    printf("Digite um número: ");
    while(scanf("%d", &numero) > 0){
        if(numero<0) break;

        if(palindromo(numero))
            printf("%d é palíndromo\n", numero);
        else 
            printf("%d não é palíndromo\n", numero);

        printf("Digite um número: ");
    }
    printf("Fim do programa\n");

    return 0;
}