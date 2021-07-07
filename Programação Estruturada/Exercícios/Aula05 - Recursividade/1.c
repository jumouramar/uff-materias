/* Faça uma função que calcule x^n, sendo N ≥ 0. */

#include <stdio.h>

int potencia(int x, int n){
  if(n == 0)
    return 1;
  else 
    return x*potencia(x, n-1);
}

int main(){

  int n, x;
  printf("Insira um valor X: "); 
  scanf("%d", &x);
  do {
    printf("Insira um valor N: "); 
    scanf("%d", &n);
  } while (n<=0);
  
  printf("%d^%d = %d\n", x, n, potencia( x, n));

}