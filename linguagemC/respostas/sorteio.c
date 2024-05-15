#include <stdio.h>  // necessario para as funcoes de input e output
#include <stdlib.h> // necessario para as funcoes "rand()" e "srand()"
#include <time.h>   // necessario para usar a hora atual na geracao da semente

int main() {
    int num;
    // Semente para gerar um numero aleatorio 
    srand(time(0));
    // Sorteia um numero entre 1 e 60 (incluindo o 60)
    num = rand() % 61;
    // Mostra o resultado do sorteio
    printf("Numero sorteado: %d \n", num);
    return 0;
}
