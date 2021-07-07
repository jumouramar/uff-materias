/* Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas. */

#include <stdio.h>

int main(){

    float n1, n2, n3;
    printf("Escreva nota 1: ");
    scanf("%f", &n1);
    printf("Escreva nota 2: ");
    scanf("%f", &n2);
    printf("Escreva nota 3: ");
    scanf("%f", &n3);
    printf("Média: %.2f\n", (n1+n2+n3)/3);

    return 0;
}
