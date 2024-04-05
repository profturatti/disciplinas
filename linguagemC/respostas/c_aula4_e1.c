#include <stdio.h>
/* 
   Considedando o uso da tabela ascii como referencia
   Receba um caractere do usuario e informe o valor
   equivalente em inteiro, octal e hexadecimal
*/
int main(void) {
  char entrada;
  printf("Informe um caractere: ");
  scanf("%c", &entrada);
  printf("\nInteiro: %i", entrada);
  printf("\nOctal: %o", entrada);
  printf("\nHexadecimal: %x", entrada);
  
  return 0;
}
