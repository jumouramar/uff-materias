/* Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule e mostre a hora convertida em minutos e em segundos. */

#include <stdio.h>

int main(){

    int hora, minuto, segundo = 0;
    printf("Escreva hora:minuto : ");
    scanf("%d:%d", &hora, &minuto);
    minuto += hora*60;
    segundo += minuto*60;
    printf("Hora em minutos: %d\nHora em segundos: %d\n", minuto, segundo);

    return 0;
}