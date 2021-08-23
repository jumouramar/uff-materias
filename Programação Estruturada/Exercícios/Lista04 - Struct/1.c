/* A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre
salário, idade e número de filhos. Faça um programa que leia os dados de 20 pessoas, e que
calcule e mostre:
• a média de salário da população;
• a média do número de filhos;
• o maior salário. */

#include <stdio.h>
#define QTD 2

struct tipoPessoas {
    float salario;
    int idade;
    int numFilhos;
};
typedef struct tipoPessoas tPessoas;

int main(){
    tPessoas vetPessoas[QTD];
    float mediaSalario = 0.0, maiorSalario = 0.0, mediaFilhos = 0.0;

    for(int i = 0; i<QTD; i++){
        printf("\n=== PESSOA %d ===\n", i+1);
        printf("Salário: ");
        scanf("%f", &vetPessoas[i].salario);
        printf("Idade: ");
        scanf("%d", &vetPessoas[i].idade);
        printf("Número de filhos: ");
        scanf("%d", &vetPessoas[i].numFilhos);

        mediaSalario += vetPessoas[i].salario;
        if(vetPessoas[i].salario > maiorSalario) maiorSalario = vetPessoas[i].salario;
        mediaFilhos += vetPessoas[i].numFilhos;
    }

    printf("\nMédia de salário da população: %2.f", mediaSalario/QTD);
    printf("\nMédia do número de filhos: %1.f", mediaFilhos/QTD);
    printf("\nMaior salário: %2.f\n", maiorSalario);

    return 0;
}