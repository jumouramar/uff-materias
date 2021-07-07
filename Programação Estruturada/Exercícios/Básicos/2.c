/* Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os dados de entrada do algoritmo devem ser: o nome do consumidor, o seu consumo mensal em quilowatts, e o preço equivalente a um quilowatt. */

#include <stdio.h>

int main(){

    char nome[31];
    float consumo, preco;

    printf("Nome do consumidor: ");
    scanf("%s", nome);
    printf("Consumo mensal em quilowatts: ");
    scanf("%f", &consumo);
    printf("Preço do quilowatt: ");
    scanf("%f", &preco);

    printf("O consumidor '%s' deverá pagar R$ %.2f na conta de luz.\n", nome, consumo*preco);

    return 0;
}
