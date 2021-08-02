/* Crie um vetor que guarde as coordenadas de N pontos no R2
   Faça uma função que receba o vetor como parâmetro e o preencha
   Considere um quadrado com centro no ponto (0,0) e lado L. Faça uma função que receba como parâmetro o vetor preenchido e que retorne quantos pontos estão fora do quadrado. */

#include <stdio.h>

struct coordenadas{
  int x;
  int y;
};
typedef struct coordenadas tcoordenadas;

void preenche(tcoordenadas *vetCoordenadas, int n){
  for(int i = 0; i<n; i++){
    printf("Insira a coordenada X do ponto %d: ", i+1);
    scanf("%d", &vetCoordenadas[i].x);
    printf("Insira a coordenada Y do ponto %d: ", i+1);
    scanf("%d", &vetCoordenadas[i].y);
    printf("\n");
  }
}

int foraDoQuadrado(tcoordenadas *vetCoordenadas, int l, int n){
  int fora = 0;
  for(int i = 0; i<n; i++){
    if(vetCoordenadas[i].x > l/2 || vetCoordenadas[i].y > l/2 || vetCoordenadas[i].x < l/2*(-1) || vetCoordenadas[i].y < l/2*(-1))
      fora++;  
  } 
  return fora;
}

int main(){

  int n, l;

  printf("Insira a quantidade de pontos: ");
  scanf("%d", &n);
  
  tcoordenadas vetCoordenadas[n];

  preenche(vetCoordenadas, n);

  printf("Insira o lado do quadrado: ");
  scanf("%d", &l);

  printf("%d ponto(s) estão fora do quadrado", foraDoQuadrado(vetCoordenadas, l, n));

  return 0;
}