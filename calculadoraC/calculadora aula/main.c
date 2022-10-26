#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int op03+---;
    float v1,v2,soma,sub,mult,div;
    setlocale(LC_ALL,"Portuguese");
do {


   printf("\n----Calculadora----");
   printf("\n 1=>Soma\n 2=>Subtração \n 3=>Multiplicação \n 4=>Divisão \n 0=>Sair");
   printf("\nQual operação deseja realizar:");
   scanf("%d",&op);


   printf("\nDigite o primeiro valor:");
   scanf("%f",&v1);
   printf("Digite o segundo valor:");
   scanf("%f",&v2);

   switch(op)
   {
   case 1:
    printf("--Soma--");
    soma= v1+v2;
    printf("\nSoma= %2.f + %2.f = %2.f",v1,v2,soma);
    break;

   case 2:
    printf("--Subtração--");
    sub= v1-v2;
    printf("\nSubtração= %2.f - %2.f = %2.f",v1,v2,sub);
    break;

   case 3:
    printf("--Multiplicação--");
    mult= v1*v2;
    printf("\nMultiplicação= %2.f * %2.f = %2.f",v1,v2,mult);
    break;

   case 4:
    printf("--Divisão--");
    div= v1/v2;
    printf("\nDivisão= %2.f / %2.f = %2.f",v1,v2,div);
    break;

   default:
    printf("Valor inválido!!");
  }
  printf("\nDeseja continuar? 0=> Sair\n");
  scanf("%d",&op);
}while(op!=0);

}


