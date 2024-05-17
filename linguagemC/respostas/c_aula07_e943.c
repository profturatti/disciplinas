#include <stdio.h>
/*  O programa mostra os numeros de 1 a 100; e a cada múltiplo de 10 emite uma mensagem: “Múltiplo de 10”.
*/
int main(void) {
  int contador;
  for (contador=1; contador <=100; contador++)
  {  printf("%i\n", contador);
     if (contador%10 == 0)
       printf("Multiplo de 10\n");
  }  
  return 0;
}
