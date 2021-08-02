/* Faça uma função recursiva que receba uma palavra e que retorne quantos caracteres ela possui.
   Não pode ser usada a biblioteca string.h */

#include <stdio.h>

int tamanho(char *palavra){
  if(palavra[0] == '\0') return 0;
  else return tamanho(&palavra[1])+1;
}

int main(){

  char palavra[10];
  printf("Escreva uma palavra: ");

  scanf(" %s", palavra);
  printf("O tamanho da palavra é: %d\n", tamanho(palavra));

  return 0;
}