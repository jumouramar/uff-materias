/* Faça um função recursiva que leia um número natural N e que retorne o somatório de todos os números naturais de 0 até N, inclusive */

#include <stdio.h>

int somatorio(int n){
  if(n == 0) return 0;
  else return n + somatorio(n-1);
}

int main(){

  int n;
  printf("Insira um número natural: ");
  scanf("%d", &n);
  printf("O somatório é %d\n", somatorio(n));

  return 0;
}