#include <stdio.h>
#include <math.h>

int main(void) {
  float valor=0;
  printf("Digite um valor: ");
  scanf("%f", &valor);
  printf("Valor absoluto: %f\n", fabs(valor));
  
  return 0;
}

