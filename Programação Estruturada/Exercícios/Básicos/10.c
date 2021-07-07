/* Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit. C = 5/9 (F-32) */

#include <stdio.h>

int main(){

    float c, f;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &c);
    f = c*1.8 + 32;
    printf("%.1f° Farenheit\n", f);

    return 0;
}
