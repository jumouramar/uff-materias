/* Faça um programa que leia o quadro de cargos e salários de uma empresa e que calcule a média salarial.
a. Crie uma estrutura com os campos cargo e salário
b. Ao final do programa escreva os cargos que estão acima da média calculada */

#include <stdio.h>

struct tipoEmpresa{
    char cargo[10];
    float salario;
};
typedef struct tipoEmpresa tEmpresa;

int main(){

    int qtd; 
    float media = 0;

    printf("Qual é a quantidade de cargos? ");
    scanf("%d", &qtd);

    tEmpresa vetEmpresa[qtd];
    for(int i = 0; i<qtd; i++){
        printf("Nome do cargo: ");
        scanf(" %s", vetEmpresa[i].cargo);
        printf("Salário: ");
        scanf("%f", &vetEmpresa[i].salario);
        media += vetEmpresa[i].salario;
    }

    media /= qtd;

    printf("Os cargos acima de R$ %.2f são:\n", media);
    for(int i = 0; i<qtd; i++){
        if(vetEmpresa[i].salario > media) 
            printf("%s\n", vetEmpresa[i].cargo);
    }

    return 0;
}