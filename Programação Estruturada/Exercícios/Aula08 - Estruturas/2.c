/* Faça um programa que contenha uma função que receba duas estruturas do tido dma, cada uma representando uma data válida, e que devolva o número de dias que decorreram entre as duas datas. */

#include <stdio.h>

struct dma{
    int dia;
    int mes;
    int ano;
};
typedef struct dma tdma;

int contagem(tdma data1, tdma data2){
    int anos, meses, dias;

    anos = data2.ano - data1.ano;
    if(data1.mes > data2.mes) anos--;
    else if(data1.mes == data2.mes && data1.dia > data2.dia) anos--;

    meses = data2.mes - data1.mes;
    if(meses != 0 && data1.dia > data2.dia) meses--;
    else if(data1.mes > data2.mes) meses += 12; 

    dias = data2.dia - data1.dia;

    return anos*360 + meses*30 + dias;
}

int main(){

    tdma data1, data2;
    printf("Data inicial (xx/xx/xxxx) : ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("Data final (xx/xx/xxxx) : ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    printf("Decorreram %d dias\n", contagem(data1,data2));

    return 0;
}