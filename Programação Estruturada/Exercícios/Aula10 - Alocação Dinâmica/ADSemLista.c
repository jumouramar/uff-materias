/* Ler as notas de N alunos, calcular a média e informar quantos alunos estão acima da média calculada */

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N, soma=0, cont=0;
  float *vetNotas;
  float media = 0;
    
  printf("Quantidade de alunos: ");
  scanf("%d", &N);  
  
  vetNotas = (float *) malloc(sizeof(float)*N);
    
  // lendo e armazenando os valores
  for(int i=0; i<N; i++){
    printf("Nota do aluno %d: ", i+1);
    scanf("%f", &vetNotas[i]);
    soma += vetNotas[i];
  }
  media = soma/(N * 1.0);
    
  for(int i=0; i<N; i++){
    if (vetNotas[i] > media) cont++;
  }

  printf("\nMédia: %.2f\n", media);
  printf("Alunos acima da média: %d\n", cont);

  return 0;
}