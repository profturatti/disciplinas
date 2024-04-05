#include <stdio.h>
#include <math.h>
#define pi 3.1416
/* Escreva um programa que calcule a area de um circulo.
   Considere um raio inicializado com o valor 5 e pi 
   declarado como uma constante 3.1416.
   Pergunta: Qual o tipo necessario para declaracacao da
             variavel RESULTADO funcionar adequadamente? 
   Pesquise: Como calcular o resultado utilizando a funcao
             pow(base, expoente) 
   A formula necessaria para o calculo: 
             resultado = pi * pow(raio, 2)
*/

int main(void) {
  float raio = 5, resultado;
  resultado = pi * pow(raio, 2);
  printf("Area do circulo: %f", resultado);
  return 0;
}

