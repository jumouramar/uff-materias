/* Ler N notas dos alunos de uma turma e calcular a média. Ao final imprimir a quantidade de alunos que ficou acima da média calculada. */

#include <stdio.h>

int main(){
    int qtd, acima = 0;
    float nota[qtd], media = 0;
    printf("Quantas notas ler? ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd; i++){
        printf("Escreva a nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
        media += nota[i];
    }
    media = media / qtd;
    printf("Média: %.2f\n", media);

    for (int j = 0; j < qtd; j++){
        if (nota[j] > media)
            acima++;
    }
    printf("Acima: %d\n", acima);

    return 0;
}