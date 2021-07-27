/* Faça um programa que leia uma cadeia de caracteres em formato de data: DD/MM/AAAA
 Crie uma função que receba esta data como parâmetro e que retorne o dia, o mês e o ano em três variáveis inteiras distintas. Escreva os valores retornados no programa principal.
 Crie um a função que receba o ano como parâmetro e retorne se a data caiu em um ano bissexto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separaData(char *data, int *dia, int *mes, int *ano){
    char D[3], M[3], A[5];    
    strncpy(D, data, 2);
    D[2] = '\0';
    strncpy(M, &data[3], 2);
    M[2] = '\0';
    strncpy(A, &data[6], 4);
    A[4] = '\0';

    *dia = atoi(D);
    *mes = atoi(M);
    *ano = atoi(A);
}

int bissexto(int ano){
    if(ano%4==0 && (ano % 400 == 0 || ano % 100 != 0)) return 1;
    else return 0;
}

int main(){
    char data[11];
    int dia, mes, ano;
    scanf(" %s", data);
    separaData(data, &dia, &mes, &ano);
    printf("%d/%d/%d\n", dia, mes, ano);
    
    if(bissexto(ano)) printf("É ano bissexto\n");
    else printf("Não é ano bissexto\n");

    return 0;
}