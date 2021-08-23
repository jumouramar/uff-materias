/* Faça um programa que leia as informações sobre as N ordens de serviço de um oficina mecânica.
Os seguintes dados serão lidos: número da OS, valor, tipo de serviço e nome do cliente.
O programa deve apresentar no final:
• a média de preço dos serviços prestados,
• os nomes dos clientes que pagaram por serviços acima da média calculada;
• o nome do cliente que pagou pelo serviço mais caro. */

#include <stdio.h>
#include <string.h>

struct tipoOS{
    int numOS;
    float valor;
    char tipoServico[20];
    char nomeCliente[20];
};
typedef struct tipoOS tOS;

int main(){

    int n;
    printf("\nEscreva o número de ordens de serviço: ");
    scanf("%d", &n);

    tOS vetOS[n];
    float mediaPreco = 0.0;
    char clienteMaisCaro[20];
    int maiorValor = 0;

    for(int i = 0; i<n; i++){ 
        printf("\n=== Ordem de serviço %d ===\n", i+1);
        printf("Número da OS: ");
        scanf("%d", &vetOS[i].numOS);
        printf("Valor da OS: ");
        scanf("%f", &vetOS[i].valor);
        printf("Tipo de serviço: ");
        scanf(" %s", vetOS[i].tipoServico);
        printf("Nome do cliente: ");
        scanf(" %s", vetOS[i].nomeCliente);

        mediaPreco += vetOS[i].valor;
    }

    printf("\n");
    printf("Média do preço de serviços prestados: %2.f\n", mediaPreco/n);
    printf("Clientes que pagaram por serviços acima da média: ");
    for(int i = 0; i<n; i++){
        if(vetOS[i].valor > (mediaPreco/n)){
            printf("%s\n", vetOS[i].nomeCliente);
            if(vetOS[i].valor > maiorValor){
                maiorValor = vetOS[i].valor;
                strcpy(clienteMaisCaro, vetOS[i].nomeCliente);
            }
        }
    }
    printf("Cliente que pagou pelo serviço mais caro: %s\n", clienteMaisCaro);

    return 0;
}