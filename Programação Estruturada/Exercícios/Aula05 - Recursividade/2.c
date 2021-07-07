/* Faça uma função que some os números inteiros positivos compreendidos entre A e B. Considere que A < B e que A e B devem entrar na soma. */

#include <stdio.h>

int soma(int a, int b){
  if(a == b)
    return a;
  else
    return soma(a+1,b)+a;
}

int main(){

  int a, b;
  do {
    printf("Insira um número: ");
    scanf("%d", &a);
    printf("Insira outro número maior: ");
    scanf("%d", &b);
  } while(a > b || a < 0);

  printf("Soma = %d\n", soma(a, b));

  return 0;
}