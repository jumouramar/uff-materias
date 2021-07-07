/* Faça um programa que leia a base e a altura de um retângulo e escreva o seu perímetro, a sua área e a sua diagonal. */

#include <stdio.h>
#include <math.h>

int main(){

    int base, altura;
    printf("Escreva a altura(cm): ");
    scanf("%d", &altura);
    printf("Escreva a base(cm): ");
    scanf("%d", &base);
    printf("Perímetro: %d cm²\nÁrea: %d cm²\nDiagonal: %.2f cm²\n", 2*altura+2*base, base*altura, sqrt(base*base+altura*altura));

    return 0;
}