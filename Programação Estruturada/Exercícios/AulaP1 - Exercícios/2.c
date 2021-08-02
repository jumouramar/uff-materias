/* Faça um função recursiva que receba uma palavra e a imprima na ordem inversa. */

#include <stdio.h>
#include <string.h>

void inverte(char *frase){
  if(frase[0] != '\0'){
    inverte(&frase[1]);
    printf("%c", frase[0]);
  }
}

int main(){

  char frase[30];
  printf("Escreva uma frase: ");

  scanf(" %[^\n]s", frase);
  inverte(frase);

  return 0;
}