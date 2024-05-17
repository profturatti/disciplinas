#include <stdio.h>
/*  Escreva um programa cuja saída em vídeo possua M linhas com N asteriscos alinhados a esquerda, onde N corresponde ao número da linha corrente
*/
int main(void) {
  int qtdeLinhas;
  printf("Informe a quantidade de linhas: ");
  scanf("%i", &qtdeLinhas);
  for(int i = 1; i <= qtdeLinhas; i++)
    {
      for(int j = 1; j <= i; j++)
        printf("*");
      printf("\n");
    }
  return 0;
}
