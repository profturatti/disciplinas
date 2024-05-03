// Este programa verifica se numero e' par ou impar
#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um numero: ");
  scanf("%i", &n);
  // se o resto da divisao por 2 for igual a zero
  if (n%2==0)
    printf("Numero par!\n");
  else
    printf("Numero impar!\n");
  return 0;
}
