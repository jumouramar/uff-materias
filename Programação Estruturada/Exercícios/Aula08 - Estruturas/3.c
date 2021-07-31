/* Faça um programa que leia 2 pontos e implemente uma única função que:
a. Receba os pontos lidos como parâmetros
b. Retorne a multiplicação dos pontos
c. Retorne a soma dos pontos */

#include <stdio.h>

struct ponto{
    int x;
    int y;
};
typedef struct ponto tponto;

void calcula(tponto ponto1, tponto ponto2, tponto *soma, tponto *multi){
    soma->x = ponto1.x + ponto2.x;
    soma->y = ponto1.y + ponto2.y;
    multi->x = ponto1.x * ponto2.x;
    multi->y = ponto1.y * ponto2.y;
}

int main(){

    tponto ponto1, ponto2, soma, multi;

    printf("Ponto 1 X: ");
    scanf("%d", &ponto1.x);
    printf("Ponto 1 Y: ");
    scanf("%d", &ponto1.y);
    printf("\n");
    printf("Ponto 2 X: ");
    scanf("%d", &ponto2.x);
    printf("Ponto 2 X: ");
    scanf("%d", &ponto2.y);

    calcula(ponto1, ponto2, &soma, &multi);
    printf("Soma: (%d,%d)\nMultiplicação: (%d,%d)\n", soma.x, soma.y, multi.x, multi.y);

    return 0;
}