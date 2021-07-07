/* Faça um programa que leia o salário de um funcionário e que calcule e escreva o salário com um desconto de 10%. */

#include <stdio.h>

int main(){

    float salario;
    printf("Insira o salário: ");
    scanf("%f", &salario);
    printf("Salário com desconto: R$ %.2f\n", salario-salario*(10.0/100));

    return 0;
}
