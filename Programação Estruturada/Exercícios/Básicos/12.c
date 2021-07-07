/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e escrever a idade dessa pessoa. */

#include <stdio.h>

int main(){

  int anoNascimento, anoAtual;
  printf("Insira o ano de nascimento: ");
  scanf("%d", &anoNascimento); 
  printf("Insira o ano atual: ");
  scanf("%d", &anoAtual);
  printf("Idade: %d\n", anoAtual-anoNascimento); 

  return 0;
} 
