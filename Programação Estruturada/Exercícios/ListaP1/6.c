/* Sabendo que o último caractere de uma string é ‘\0’, faça um programa que escreva a quantidade de caracteres desta string. Crie uma função recursiva que retorne esta quantidade de caracteres. Não é permitido o uso da função strlen. */

#include <stdio.h>

int tamanhoPalavra(char *pal) {
    if (*pal=='\0') return 0;
    else return tamanhoPalavra(pal+1)+1;
}

int main(void) {

    char palavra[20];
    int tam;

    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("O tamanho da palavra é: %d ", tamanhoPalavra(palavra));

    return 0;
}