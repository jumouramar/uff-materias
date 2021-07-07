/* Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação dos dois números e a divisão e a subtração do primeiro pelo segundo. */

#include <stdio.h>

int main(){

    int a, b;
    printf("Insira A: ");
    scanf("%d", &a);
    printf("Insira B: ");
    scanf("%d", &b);
    printf("Soma: %d\nMultiplicação: %d\nSubtração: %d\nDivisão: %.2f\n", a+b, a*b, a-b, (float)a/b);

  return 0;
}
