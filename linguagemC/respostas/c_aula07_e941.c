#include <stdio.h>
/* Escreva um programa em C que determine o maior valor entre N números informados. A condição de parada é a entrada de um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja igual a 0
(ZERO)
*/
int main(void) {
  // variaveis, iniciando o maior com zero
  int numero, maior = 0;
  // laco para receber numeros até 0 para sair
  while(numero != 0)
  {
    printf("\nDigite um número ou Zero para sair: ");
    scanf("%i", &numero);
    if(numero > maior)
    {
      maior = numero;
    }
  }
  printf("\nO maior número foi: %i", maior);
  return 0;
}
