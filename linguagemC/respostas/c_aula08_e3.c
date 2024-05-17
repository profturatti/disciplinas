#include <stdio.h>

int main(void) {
  int indice, operacao;
  float busca, vetor1[10], vetor2[10], resultado[11];

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
                resultado[indice] = vetor1[indice] + vetor2[indice];
                printf("%.2f ", resultado[indice]);
              }
              break;
      case 2: printf("A subtração dos vetores é: ");
              for(indice=0; indice < 10; indice++ ){
                resultado[indice] = vetor1[indice] - vetor2[indice];
                printf("%.2f ", resultado[indice]);
              }
              break;
      case 3: printf("A multiplicação dos vetores é: ");
              for(indice=0; indice < 10; indice++ ){
                resultado[indice] = vetor1[indice] * vetor2[indice];
                printf("%.2f ", resultado[indice]);
              }
              break;
      case 4: printf("A divisão dos vetores é: ");
              for(indice=0; indice < 10; indice++ ){
                resultado[indice] = vetor1[indice] / vetor2[indice];
                printf("%.2f ", resultado[indice]);
              }
              break;
      default: printf("Operação inválida");
    }
  }  while(operacao != 0);

  // Busca linear de elemento no vetor
  while(1) {
    printf("\n\nBusca Linear\n");
    printf("\nDigite o valor procurado ou -1 para sair do programa: ");
    scanf("%f", &busca);
    if (busca == -1)
      break;
    /* busca linear */
    resultado[10]=busca; /* elemento sentinela */
    indice=0;
    while(resultado[indice] != busca) /* busca com sentinela */
      indice++;
    if (indice <10)
      printf("Valor %.2f encontrada na posição %i\n", resultado[indice], indice);
    else
      printf("Valor %.2f não encontrada\n", busca);
  }
   printf("\nPrograma finalizado pelo usuário");
  return 0;
}
