#include <stdio.h>
/* Programa: Melhores notas
   Recebe dez notas de alunos, calcula a média
   da sala e destaca as melhores notas
*/
int main() {
  float nota[10],media=0.0;
  int i;
  printf("Entre com as notas dos alunos\n");
  for (i=0; i<10; i++) {
    printf("Digite a nota %2d: ",i+1);
    scanf("%f", &nota[i]);
    media += nota[i];
  }
  media /= 10.0;
  printf("\nMedia da classe: %.2f\n\n",media);
  for (i=0; i<10; i++) {
    if (nota[i] > media)
      printf("Nota[%d]=%.2f\n",i+1,nota[i]);
  }
  return 0;
}
