/* João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão atrasadas, João deverá pagar uma multa de 2% sobre cada uma. Faça um programa que leia o valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu salário após o pagamento das contas. */

#include <stdio.h>

int main(){

    float salario, contas;
    printf("Insira o salário: ");
    scanf("%f", &salario);
    printf("Insira o valor das contas: ");
    scanf("%f", &contas);
    printf("Salário final: %.2f\n", salario-contas-contas*(2.0/100));

    return 0;
}
