/* Faça uma função que calcule o quociente da divisão de A por B, utilizando subtrações sucessivas. */

#include <stdio.h>

int quoc(int a, int b){
  if(a < b)
    return 0;
  else
    return quoc(a-b, b)+1;
}

int main(){

  int a, b;
  do {
    printf("Insira um número: ");
    scanf("%d", &a);
    printf("Insira outro número: ");
    scanf("%d", &b);
  } while(a < 0 || b<=0);

  printf("%d/%d = %d\n", a, b, quoc(a, b));

  return 0;
}