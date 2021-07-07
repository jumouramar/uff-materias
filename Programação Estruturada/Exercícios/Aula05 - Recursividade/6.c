/* Fibonacci Iterativo */

int fib(int N) {
    int T1,T2,T3;
    if (N == 1)
        return 0;
    else if (N == 2)
        return 1;
    else {
        T1 = 0; T2 = 1;
        for (int i = 3; i <= N; i++) {
            T3 = T1 + T2;
            T1 = T2;
            T2 = T3;
        }
        return (T3);
    }
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