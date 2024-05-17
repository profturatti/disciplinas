#include <stdio.h>

int main(void) {
  int indice, operacao;
  float vetor1[10], vetor2[10];

  printf("Digite os elementos do vetor 1: ");
  for(indice=0; indice < 10; indice++ ){
    scanf("%f", &vetor1[indice]);
  }
  printf("Digite os elementos do vetor 2: ");
  for(indice=0; indice < 10; indice++ ){
    scanf("%f", &vetor2[indice]);
  }
  do {
    printf("\nResultado = vetor1 <operacao> vetor2\n\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("0. Sair\n");
    printf("Digite a operação desejada: ");
    scanf("%i", &operacao);
    if (operacao == 0)
      break;
    switch(operacao) {
      case 1: printf("A soma dos vetores é: ");
              for(indice=0; indice < 10; indice++ ) {
                printf("%.2f ", vetor1[indice] + vetor2[indice]);
              }
              break;
      case 2: printf("A subtração dos vetores é: ");
              for(indice=0; indice < 10; indice++ ){
                printf("%.2f ", vetor1[indice] - vetor2[indice]);
              }
              break;
      case 3: printf("A multiplicação dos vetores é: ");
              for(indice=0; indice < 10; indice++ ){
                printf("%.2f ", vetor1[indice] * vetor2[indice]);
              }
              break;
      case 4: printf("A divisão dos vetores é: ");
              for(indice=0; indice < 10; indice++ ){
                printf("%.2f ", vetor1[indice] / vetor2[indice]);
              }
              break;
      default: printf("Operação inválida");
    }
  }  while(operacao != 0);
  printf("\nPrograma finalizado pelo usuário");
  return 0;
}
