/* Faça um programa que:
a. leia o código do produto (string tamanho 3)
b. preço (real) de produtos
c. ao final escreva o código do produto mais caro
d. ler até que o usuário digite o código "XXX"
*/

#include <stdio.h>
#include <string.h>

int main(){

    char codigo[3], maisCaro[3];
    float preco, maior = 0;

    printf("Insira o código do produto: ");
    scanf("%s", codigo);
    while(strcmp("XXX", codigo) != 0){
        printf("Insira o preço do produto: ");
        scanf("%f", &preco);
        if(preco > maior){
            maior = preco;
            strcpy(maisCaro, codigo);
        }
        printf("Insira o código do produto: ");
        scanf("%s", codigo);
    }
    printf("O produto mais caro é: %s\n", maisCaro);

    return 0;
}