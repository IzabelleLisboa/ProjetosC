#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//ex1
int menor(int n1,int n2)
{

if(n1<n2)
    return n1;
else
    return n2;
}
//---------------------------------------------------------
//ex2
int potencia(int n1,int n2)
{
int res;
res= pow(n1,n2);
return res;
}
//-------------------------------------------------------
//ex3
//se valor par retone 1 se ímpar retorne 0

int parouimpar(int n1)
{
    if(n1%2==0)
         return 1;
    else
        return 0;
}
//----------------------------------------------------
//ex4
int valor(int n1)
{
    if(n1>0)
         return 1;
    if(n1<0)
        return -1;
    return 0;
}
//-----------------------------------------------------------------------
//menu
int main(void)
{
    char op;
setlocale(LC_ALL,"portuguese");
    printf("Escolha uma opção:\n");
    printf("1) valor menor \t\t 2) Potência\n");
    printf("3) Par ou Ímpar \t\t4) Valor + - 0 \n");
    scanf("%c", &op);

    switch(op) {
       case '1':
          printf("Valor menor \n");
              int x1,y1,resultado1;
        printf("Digite um valor ");
        scanf("%d",&x1);
        printf("Digite outro valor: ");
        scanf("%d",&y1);
        resultado1 = menor(x1,y1);
        printf("\nValor menor: %d \n",resultado1);
          break;

       case '2':
          printf("Potência \n");
              int x2,y2,resultado2=0;
        printf("Digite a base: ");
        scanf("%d",&x2);

        printf("Digite o expoente: ");
        scanf("%d",&y2);
        resultado2 = potencia(x2,y2);
        printf("Potencia: %d\n ",resultado2);
          break;

       case '3':
          printf("Par ou Ímpar\n");
            int x3,resultado3;
        printf("Digite o número que deseja saber se é par ou ímpar: ");
        scanf("%d",&x3);
        resultado3 = parouimpar(x3);
        printf("Par ou ímpar: %d \n",resultado3);
          break;

       case '4':
          printf("valor + - 0\n");
          int x4,resultado4=0;
        printf("Digite um valor caso positivo=>1, negativo =>-1,zero=>0 : ");
        scanf("%d",&x4);
        resultado4 = valor(x4);
        printf("Tipo do valor: %d \n",resultado4);
          break;

       default:
          printf("Digite um número válido");
          }
    system("PAUSE");
    return 0;
}

