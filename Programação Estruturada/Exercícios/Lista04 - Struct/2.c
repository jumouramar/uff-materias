/* Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes de trânsito. Foram informados dados como: a sigla do estado, o número de veículos, e a quantidade de acidentes. Faça um programa que calcule e mostre:
• a sigla do estado que possui maior número de carros;
• considerando o número de acidentes e o número de carros que circulam no estado,
informar o estado com menor índice de acidentes de trânsito;
• o número total de acidentes de trânsito computado. */

#include <stdio.h>
#include <string.h>

#define QTD 20

struct tipoEstado{
    char sigla[3];
    int numVeiculos;
    int qtdAcidentes;
};
typedef struct tipoEstado tEstado;

int main(){

    tEstado vetEstado[QTD];
    int maiorCarros = 0, numAcidentes = 0; 
    float menorIndice = 1.0;
    char siglaMaiorCarros[3], siglaMenorIndice[3];

    for(int i = 0; i<QTD; i++){
        
        printf("\n=== Estado %d ===\n", i+1);
        printf("Sigla do estado: ");
        scanf("%s", vetEstado[i].sigla);
        printf("Número de veículos: ");
        scanf("%d", &vetEstado[i].numVeiculos);
        printf("Quantidade de acidentes: ");
        scanf("%d", &vetEstado[i].qtdAcidentes);
        
        if(vetEstado[i].numVeiculos > maiorCarros){
            maiorCarros = vetEstado[i].numVeiculos;
            strcpy(siglaMaiorCarros, vetEstado[i].sigla);
            
        }
        if((vetEstado[i].qtdAcidentes/(vetEstado[i].numVeiculos*1.0)) < menorIndice){
            menorIndice = (vetEstado[i].qtdAcidentes/(vetEstado[i].numVeiculos*1.0));
            strcpy(siglaMenorIndice, vetEstado[i].sigla);
        }
        numAcidentes += vetEstado[i].qtdAcidentes;
    }
    printf("\n");
    printf("Estado com maior número de carros: %s\n", siglaMaiorCarros);
    printf("Estado com menor indice de acidentes: %s\n", siglaMenorIndice);
    printf("Número acidentes total: %d\n", numAcidentes);

    return 0;
}