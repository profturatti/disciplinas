// Escreva um programa que recebe duas notas, 
// calcula a media e mostra essa media
#include<stdio.h>

int main(void) {
  float nota1, nota2, media = 0;
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;
  printf("Media: %f", media);
  return 0;
}
