#include <stdio.h>
/* Visualizando o resultado do exercicio: 8 (o numero oito será mostrado)

   Considerando o código ao lado e que o usuário
   digite 7 quando uma entrada for requisitada, responda
   o que será impresso na tela ao final da execução
   deste código e qual é a importância do comando break
   em estruturas switch..case.
*/
int main() {
  int n=7; // supondo que já foi informado o valor sete
  //scanf("%d", &n); 
  switch(n) {
    case 7: n++;
    case 8: printf("%d\n", n); n += 2;
    case 10: n++; break;
    case 11: printf("%d\n", n); n += 4;
    case 15: printf("%d\n", n); break;
  }
  return 0;
}
