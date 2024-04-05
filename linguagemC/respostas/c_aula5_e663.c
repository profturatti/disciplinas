#include <stdio.h>

int main(void) {
  char escala;
  float C=0,F=0,temperatura=0;
  printf("Informe a letra da escala de entrada 'F'ahrenheit ou 'C'elsius\n>");
  scanf("%c", &escala);
  printf("Informe a temperatura: ");
  scanf("%f", &temperatura);
  if(escala=='f' || escala=='F') {
    C=((temperatura-32)*5)/9;
    printf("Equivale a %.1f graus Celsius", C);
  } else {
    F = temperatura * 1.8 + 32;
    printf("Equivalea a %.1f graus Fahrenheit", F);
  }
  return 0;
}
