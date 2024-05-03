/* Faça um programa que receba a quantidade de
   pescado P (peso de peixes em quilos); 
   excesso E (se P>50)
   calcule a multa se P>50 cobrando 4 reais 
   por quilo excedente.
    
   - Lembre-se de inicializar todas as variáveis
     com zero; 
   - Não é necessário mostrar qualquer aviso caso
     a pesca esteja dentro do limite legal
*/
#include <stdio.h>

int main(void) {
  float P=0, E=0;
  printf("Informe o peso dos peixes em quilos: ");
  scanf("%f", &P);
  if (P>50) {
    E = P - 50;
    printf("O valor da multa é de R$ %.2f", E * 4);
  }
  return 0;
}
