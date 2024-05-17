#include <stdio.h>

int main(void) {
  int indice, vetor1[10], vetor2[10], soma[10];
  
  printf("Digite os elementos do vetor 1: ");
  for(indice=0; indice < 10; indice++ ){
    scanf("%d", &vetor1[indice]);
  }
  printf("Digite os elementos do vetor 2: ");
  for(indice=0; indice < 10; indice++ ){
    scanf("%d", &vetor2[indice]);
  }
  printf("O vetor soma é: ");
  for(indice=0; indice < 10; indice++ ){
    soma[indice] = vetor1[indice] + vetor2[indice];
    printf("%d ", soma[indice]);
  }
  
  return 0;
}
