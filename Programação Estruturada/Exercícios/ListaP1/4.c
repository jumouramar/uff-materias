/* Faça um programa que leia dois números inteiros e que calcule o MDC (máximo divisor comum) entre eles. Crie uma função recursiva que retorne o valor do MDC, sabendo que:
    mdc(x, y) = y, se y ≤ x e x resto y = 0
    mdc(x, y) = mdc(y, x), se x < y
    mdc(x, y) = mdc(y, x resto y), caso contrário */

#include <stdio.h>

int mdc(int num1, int num2){
    if(num2 <= num1 && num1%num2 == 0) return num2;
    else if(num1 < num2) return mdc(num2, num1);
    else return mdc(num2, num1%num2);
}

int main(){

    int num1, num2;
    printf("Insira um número: ");
    scanf("%d", &num1);
    printf("Insira outro número: ");
    scanf("%d", &num2);

    printf("MDC = %d\n", mdc(num1, num2));

    return 0;
}