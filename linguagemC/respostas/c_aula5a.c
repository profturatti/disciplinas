#include <stdio.h>
typedef enum {false,true} bool; 
//o tipo bool só armazena 0/false ou 1/true
int main(void) {
  bool v1=0,v2=1;
  v1 = true; 
  v2 = false; 
  printf("V1: %d\nV2: %d", v1, v2);
  return 0;
}
