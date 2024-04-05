#include <stdio.h>

int main(void) {
  int idade=0,quociente,resto;
  printf("Informe sua idade: ");
  scanf("%d", &idade);
  quociente=idade/4;
  resto=idade%4;
  printf("Quociente: %d", quociente);
  printf("\nResto: %d", resto);
  
  return 0;
}
