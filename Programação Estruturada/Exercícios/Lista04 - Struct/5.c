/* Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa
região. De cada habitante foram coletados os seguintes dados: altura, idade e cor dos olhos (A-
azuis, V-verdes ou C-castanhos). Faça um programa que leia estes dados e que calcule e mostre:
• a média das idades;
• a maior e a menor altura;
• a quantidade de pessoas de olhos castanhos que possuam idade acima da média calculada. */

#include <stdio.h>
#define QTD 3

struct tipoHabitante{
    float altura;
    int idade;
    char cor;
};
typedef struct tipoHabitante tHabitante;

int main(){

    float mediaIdades = 0, maiorAltura = 0, menorAltura = 100;
    int qtdCastanho = 0;
    tHabitante vetHabitante[QTD];

    for(int i = 0; i<QTD; i++){
        printf("\n=== HABITANTE %d ===\n", i+1);
        printf("Altura: ");
        scanf("%f", &vetHabitante[i].altura);
        printf("Idade: ");
        scanf("%d", &vetHabitante[i].idade);
        printf("Cor dos olhos (A-azuis, V-verdes ou C-castanhos): ");
        scanf(" %c", &vetHabitante[i].cor);

        mediaIdades += vetHabitante[i].idade;

        if(vetHabitante[i].altura > maiorAltura)
            maiorAltura = vetHabitante[i].altura;

        if(vetHabitante[i].altura < menorAltura)
            menorAltura = vetHabitante[i].altura;
    }

    mediaIdades /= QTD;

    for(int i = 0; i<QTD; i++){
        if(vetHabitante[i].cor == 'C' && vetHabitante[i].idade > mediaIdades)
            qtdCastanho++;
    }

    printf("\nMédia das idades: %.0f\n", mediaIdades);
    printf("Maior Altura: %.2f\n", maiorAltura);
    printf("Menor Altura: %.2f\n", menorAltura);
    printf("Pessoas de olhos castanhos com idade acima da média: %d\n", qtdCastanho);

    return 0;
}