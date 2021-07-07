/* Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e escrever quantos salários mínimos ganha o funcionário. */

#include <stdio.h>

int main(){

    float salarioFuncionario, salarioMinimo;
    printf("Insira o salário do funcionário: ");
    scanf("%f", &salarioFuncionario);
    printf("Insira o salário mínimo vigente: ");
    scanf("%f", &salarioMinimo);
    printf("O funcionário ganha %.2f salário(s) mínimo(s)\n", salarioFuncionario/salarioMinimo);

    return 0;
}
