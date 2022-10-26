#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y,cont=0,aux,mult=0;
    char op;

    printf("Digite um valor inteiro: ");
    scanf("%d",&x);
    printf("Digite outro valor inteiro: ");
    scanf("%d",&y);
    do {
    printf("Escolha a operacao 1(*) 2(/): ");
    op=getch();
    } while(op != '1' && op != '2' );//mini menu

    if (op== '1') // multiplicação
    {

    for(int i=0;i<x;i++)
        mult += y;
    printf("\n %d * %d = %d\t",x,y,mult);
    }
    else // divisão
    {
      if(x<y)// CASO o segundo valor seja maior que o primeiro
      // troca valores
        {
        aux = y;
        y = x;
        x= aux;
        }
       do{
        // fazer subtração
        x-=y;  // x= x-y
        cont++;

       } while(x>=y);
       printf("\n %d / %d = %d\t resto= %d",aux,y,cont,x);
    } // fim da divisão

    return 0;
}

//  float n = 0;
//    int retorno;
//    do {
//   printf ("\nDigite um valor entre 10-60: ");
//   retorno=scanf ("%f", &n);
//   fflush(stdin);
//   if (retorno==0)
//        printf("Não Introduziu um número!!!");
//   }
//   while (n < 10 || n > 60);
//
//
//  printf ("O valor introduzido é %.2f ", n);


//    int num;
//    num=0;
//    do{
//    printf("Digite um número inteiro positivo");
//    scanf("%d",&num);
//    }while(num<1);
//    printf("Valor inserido %d",num);
//    return 0;
//int idades,i,soma;
//    float media;
//    idades=1;
//    soma=0;
//    media=0;
//    i=-1;

//    printf("Calcula media de idades!");
//    printf("\nPrima 0 para terminar");
//
//    while(idades>0){
//    printf("\nIntroduza idade: ");
//    scanf("%d", &idades);
//      i=i+1;
//      soma = soma + idades;
//    }
//    media=(float)soma/i;
//    printf("\nA media das idades é: %2.f",media);
