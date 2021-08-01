/* Em uma competição de ginástica olímpica a nota é determinada por um painel de seis juízes. Cada um dos juízes atribui uma nota entre zero e dez para o desempenho do atleta. Para calcular a nota final, a nota mais alta e a nota mais baixa são descartadas e é calculada a média das quatro restantes. Escreva um programa que leia 6 notas entre zero e dez e calcule a média, de cada um dos 30 atletas, após o descarte da maior e da menor nota. Faça uma função que receba as seis notas lidas e que retorne para o programa principal a média calculada. */

#include <stdio.h>

#define ATLETA 30
#define NOTA 6

float media(float vetNotas[]){
    float maior, menor, media = 0, aux;

    for(int j = 0; j<NOTA; j++){
        for(int k = j+1; k<NOTA; k++){
            if(vetNotas[j] > vetNotas[k]){
                aux = vetNotas[k];
                vetNotas[k] = vetNotas[j];
                vetNotas[j] = aux;
            }
        }        
    }

    for(int j = 1; j<NOTA-1; j++)
        media += vetNotas[j]; 
    
    return media/4;
}

int main(){

    float vetNotas[5];

    for(int i = 0; i<ATLETA; i++){

        for(int j = 0; j<NOTA; j++){
            printf("Insira a %d° nota do atleta %d: ", j+1, i+1);
            scanf("%f", &vetNotas[j]);
        }

        printf("\nA média do atleta %d é: %.2f\n\n", i+1, media(vetNotas));
    }

    return 0;
}
