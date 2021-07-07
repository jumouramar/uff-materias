/* Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e escreva a média ponderada dessas notas. */

#include <stdio.h>

int main(){

    int p1, p2, p3;
    float n1, n2, n3, media;
    printf("Insira a nota 1 e o peso: ");
    scanf("%f %d", &n1, &p1);
    printf("Insira a nota 2 e o peso: ");
    scanf("%f %d", &n2, &p2);
    printf("Insira a nota 3 e o peso: ");
    scanf("%f %d", &n3, &p3);

    media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("Média: %.2f\n", media);

    return 0;
}
