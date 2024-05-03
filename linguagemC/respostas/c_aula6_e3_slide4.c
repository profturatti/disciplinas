#include <stdio.h>
// calcula o peso ideal de uma pessoa
int main(void) {
  float altura=0, peso=0;
  char genero='f';
  printf("Opções 'm'asculino ou 'f'eminino\nInforme o genero: ");
  scanf("%c", &genero);
  printf("Informe a altura da pessoa: ");
  scanf("%f", &altura);
  if ((genero == 'm') || (genero == 'M')) {
    peso = (72.7 * altura) - 58;
  }
  else {
    peso = (62.1 * altura) - 44.7;
  }
  printf("\nO peso ideal eh: %.2f", peso);
  return 0;
}
