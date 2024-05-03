#include <stdio.h>
/* Exemplo: efetua busca linear  
   Verifica se existe uma nota X no vetor lido com 10 elementos
*/
int main() {
  float nota[11], x; /* vetor criado com uma posição a mais */
  // Verificando quantas posições o vetor nota possui
  int length = sizeof(nota) / sizeof(nota[0]);
  printf("O vetor NOTA possui %d posições\n\n", length);
  // indice auxiliar
  int i;
  // Lendo as notas
  printf("Entre com 10 notas\n");
  for (i=0; i<10; i++) {
    printf("Nota[%i]: ", i+1); 
    scanf("%f", &nota[i]);
  }
  // Busca elemento no vetor
  while(1) {
    printf("\nDigite a nota procurada ou -1 para sair do programa: ");
    scanf("%f", &x);
    if (x==-1)
      break;
    /* busca linear */
    nota[10]=x; /* elemento sentinela */
    i=0;
    while(nota[i] != x) /* busca com sentinela */
      i++;
    if (i <10)
      printf("Nota %.2f encontrada na posição %d\n", nota[i], i);
    else
      printf("Nota %.2f não encontrada\n", x);
  }
  return 0;
}
