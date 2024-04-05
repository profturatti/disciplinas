#include <stdio.h>

int main(void) {
  float av1, av2, media = 0;
  printf("Informe a nota da AV1: ");
  scanf("%f", &av1);
  printf("Informe a nota da AV2: ");
  scanf("%f", &av2);
  media = (av1+av2)/2;
  printf("Media: %.2f", media);
  if (media < 7) {   
      printf("\nSituação: Reprovado");
  } else
    printf("\nSituação: Aprovado");

  return 0;
}
