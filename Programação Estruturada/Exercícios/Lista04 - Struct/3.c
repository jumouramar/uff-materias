/* Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Faça um
programa que leia o salário de um funcionário, o valor total de suas vendas e apresente o seu salário final. Considere N funcionários (use alocação dinâmica). */

#include <stdio.h>

struct tipoFuncionario{
    float salario;
    float valorVendas;
};
typedef struct tipoFuncionario tFuncionario;

int main(){

    int n;
    printf("\nEscreva a quantidade de funcionários: ");
    scanf("%d", &n);

    tFuncionario vetFuncionario[n];

    for(int i = 0; i<n; i++){
        printf("\n=== Funcionário %d ===\n", i+1);
        printf("Salário funcionário: ");
        scanf("%f", &vetFuncionario[i].salario);
        printf("Valor total de suas vendas: ");
        scanf("%f", &vetFuncionario[i].valorVendas);
        printf("Salário Final: %2.f\n", vetFuncionario[i].salario + vetFuncionario[i].valorVendas + (vetFuncionario[i].valorVendas*6/100));
    }

    return 0;
}