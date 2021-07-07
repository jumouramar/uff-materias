/* Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os valores antes e depois da troca. */

#include <stdio.h>

int main(){

    int a, b, aux;
    printf("Insira A: ");
    scanf("%d", &a);
    printf("Insira B: ");
    scanf("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("A antes: %d\nB antes: %d\n", b, a);  
    printf("A depois: %d\nB depois: %d\n", a, b);
    
    return 0;
}
