#include <stdio.h>
// vetor com 5 posicoes do tipo inteiro preenchidos
int main() {
  int v[5]={7,2,1,4,10}; 
  printf("Endereço de v[0]: %d = %d\n", &v[0], v);
  printf("Conteudo de v[0]: %d = %d\n", v[0], *v);
  printf("Conteudo de v[1]: %d = %d\n", v[1], *(v+1));
  printf("Conteudo de v[4]: %d = %d\n", v[4], *(v+4));
  printf("Endereço de v[4]: %d = %d\n", &v[4], (v+4));
  return 0;
}
