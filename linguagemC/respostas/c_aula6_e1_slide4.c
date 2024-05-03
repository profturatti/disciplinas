#include <stdio.h>
/* Este programa recebe duas notas (valores com casa decimal), 
   calcule a média e mostra Aprovado caso o resultado seja maior
   ou igual a 7.0; senão mostra Reprovado.
*/
int main(void) {
  float nota1=0, nota2=0, media=0;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota.: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;
  printf("\nMédia: %.2f \nSituação: ", media);
  if (media >= 7 ) {
    printf("Aprovado!\n");
  }
  else {
    printf("Reprovado!\n");
  }

  return 0;
}
