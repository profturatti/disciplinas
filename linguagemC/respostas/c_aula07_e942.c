#include <stdio.h>
#include <math.h>
int main(void) {
  // tabuleiro tem 64 casas 2^64

  float somador =0, controle;
  for(controle=0; controle <= 64; controle++)
    {
      //printf("controle: %f\n", controle);
      somador = somador + pow(2,controle);
    }
  printf("A quantidade de grãos de trigo é: \n%.0f", somador);

  
  return 0;
}
