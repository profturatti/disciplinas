#include <stdio.h>
// Exemplo utilizando numero inteiro como opcao do menu
int main() {
  int opcao;
  printf("\n1. Saladas");
  printf("\n2. Refeicao");
  printf("\n3. Lanches");
  printf("\n4. Bebidas");
  printf("\n5. Sobremesas");
  printf("\nDigite a opção desejada: ");
  scanf("%i", &opcao);

  switch(opcao) {
    case 1: printf("\n\nEscolheu SALADAS\n"); break;
    case 2: printf("\n\nEscolheu REFEICAO\n"); break;
    case 3: printf("\n\nEscolheu LANCHES\n"); break;
    case 4: printf("\n\nEscolheu BEBIDAS\n"); break;
    case 5: printf("\n\nEscolheu SOBREMESAS\n"); break;
    default: printf("\n\nChame o garçom para tirar dúvidas\n");
  }

  return 0;
}
