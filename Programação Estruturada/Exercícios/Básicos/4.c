/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um programa que receba o valor do salário fixo do funcionário, o valor das suas vendas e que calcule e mostre o salário final do funcionário. */

#include <stdio.h>

int main(){

    float salario, vendas;
    printf("Insira o valor do salário fixo: ");
    scanf("%f", &salario);
    printf("Insira o valor das vendas: ");
    scanf("%f", &vendas);
    printf("Salário final: R$ %.2f\n", salario+vendas*(4.0/100));

    return 0;
}
