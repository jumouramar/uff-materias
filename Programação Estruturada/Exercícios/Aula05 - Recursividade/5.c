/* Programa que informa o N-ésimo termo da série de Fibonacci */

#include <stdio.h>

int fib (int n) {
    if  (n == 1)
        return 0;
    else if  (n == 2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
}

int main (void) {
    int n;
    do {
        printf("Digite qual termo da série de Fibonacci: ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("O %d° termo da série de Fibonacci é: %d\n", n, fib(n));
    return 0;
}