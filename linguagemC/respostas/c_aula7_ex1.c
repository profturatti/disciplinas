#include<stdio.h>
int main(void)
{
  float nota1=0,nota2=0,media=0;
  int resp;
  
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    
    media = (nota1 + nota2)/2;
    printf("Media do aluno = %.2f\n",media);
    
    printf("\nDigite 1 para continuar ou 2 para sair: ");
    scanf("%d", &resp);
  
  }while (resp==1);
  
  return 0;
}
