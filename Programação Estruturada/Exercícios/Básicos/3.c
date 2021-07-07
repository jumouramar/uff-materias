/* Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um programa que leia o valor do salário mínimo e a quantidade de quilowatts gasta por um usuário e calcule e escreva: o valor de um quilowatt e o valor da conta de energia do usuário. */

#include <stdio.h>

int main(){

    float salario, quilowatts;
    printf("Insira o valor do salário mínimo: ");
    scanf("%f", &salario);
    printf("Insira a quantidade de quilowatts gasta: ");
    scanf("%f", &quilowatts);
    printf("Valor do quilowatt: R$ %.2f\nValor da conta de energia: R$ %.2f\n", salario/10, quilowatts*(salario/10));  

    return 0;
}
