#include<stdio.h>
int main()
{
  int n,i;
  float soma,num;
  printf("Entre com a quantidade de numeros que deseja somar: ");
  scanf("%d",&n);
  for (i=1, soma = 0.0; i <= n; i=i+1, soma = soma + num)
  {
    printf("Digite o %do. numero: ",i);
    scanf("%f",&num);
  }
  printf("O resultado da soma eh %.2f\n",soma);
  return 0;
}
