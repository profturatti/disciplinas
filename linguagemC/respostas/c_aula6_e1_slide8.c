#include <stdio.h>
/* Desenvolva um programa que receba como entrada
   um número inteiro que representa um dos sete dias da
   semana. Considere o domingo como dia 1 e sábado
   como dia 7. Informe se o dia é útil, final de semana
   ou inválido.
*/
int main() {
  int dia=0;
  printf("\nDigite um número inteiro referente\nao dia da semana: ");
  scanf("%i", &dia);

  switch(dia) {
    case 1: printf("\n\nFinal de semana\n"); break; // domingo
    case 2: // segunda
    case 3: // terça
    case 4: // quarta
    case 5: // quinta
    case 6: printf("\n\nDia útil\n"); break; //sexta
    case 7: printf("\n\nFinal de semana\n"); break; // sabado
    default: printf("\n\nDia inválido\n");
  }

  return 0;
}
