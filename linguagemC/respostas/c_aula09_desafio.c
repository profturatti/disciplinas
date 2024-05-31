#include <stdio.h>  // necessario para as funcoes de input e output
#include <stdlib.h> // necessario para as funcoes "rand()" e "srand()"
#include <time.h>   // necessario para usar a hora atual na geracao da semente

int main() {
  int i, j, sorteado, vetor[6];
  // Semente para gerar um numero aleatorio
  // time(0) eh a hora atual em segundos
  srand(time(0));
  printf("Sorteado: ");
  for(i=0; i<6; i++) {
    // Sorteia um numero entre 1 e 60 (incluindo o 60)
    sorteado = (rand() % 60) + 1;
    if (i>0) {
      for (j=0; j<i; ) {
        if (vetor[j] == sorteado) {
          sorteado = (rand() % 60) + 1;
        } else
          j++;
      }
    }
    vetor[i] = sorteado;
  }
  // ordena o vetor em ordem crescente
  for(j=0; j<6; j++) {
    for (i=0; i<5; i++) {
      if (vetor[i] > vetor[i+1]) {
        sorteado = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = sorteado;
      }
    }
  }
  // Mostra o resultado do sorteio
  for(i=0; i<6; i++) {
    printf("%i ", vetor[i]);
  }
  return 0;
}
