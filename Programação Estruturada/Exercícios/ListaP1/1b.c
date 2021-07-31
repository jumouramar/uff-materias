/* Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são números que têm o mesmo valor se lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232, 1661, etc. O final da leitura é indicado por um número negativo. Faça uma função que irá retornar para o programa principal se o número é palíndromo ou não. */
/* SEM USAR STRING.H */

#include <stdio.h>

int tamanho(int numero){
    int t = 0;
    while(numero > 0){
        numero /= 10;
        t++;
    }
    return t;
}

void preencheVetor(int tam, int vetNumero[tam], int numero){
    for(int i = 0; i<tam; i++){
        vetNumero[i] = numero%10;
        numero /= 10;
    }
}

int palindromo(int numero){
    int tam;
    int vetNumero[tam];
    tam = tamanho(numero);
    preencheVetor(tam, vetNumero, numero);
    for(int i = 0; i<tam; i++){
        if(vetNumero[i] != vetNumero[tam-1-i]) return 0;
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