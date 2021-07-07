/* Faça uma função que escreva os números pares menores ou iguais a N */

#include <stdio.h>

void escrevePar (int n) {
    if  (n != 0) {
        printf(" %d", n);
        escrevePar(n - 2);
    }
} 

int main(){
    int n;
    do {
        printf("Insira um número n inteiro positivo: ");
        scanf("%d", &n);
    } while(n<=0);

    printf("Os números pares menores ou iguais a %d são:", n);
    if (n % 2 == 1)
        n--;
    escrevePar(n);
    printf("\n");
    return 0;
}
