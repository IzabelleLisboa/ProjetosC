#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");


    int idades,i,soma;
    int media;
    idades=1;
    soma=0;
    media=0;
    i=0;

    printf("Calcula media de idades!");
    printf("\nPrima 0 para terminar");

    while(idades>0){
    printf("\nIntroduza idade: ");
    scanf("%d", &idades);
      i=i+1;
      printf ("\n%d", i);
      soma = soma + idades;
      printf ("\n%d", soma);
    }

    media=soma/i;
    printf("\nA media das idades é: %d",media;







//    int i,min,max;
//
//    printf ("Digite o minimo: ");
//    scanf ("%d",&min);
//    printf ("Digite o maximo: ");
//    scanf ("%d",&max);
//    if(min%2!=0)
//        min++;
//    for (i=min; i <=max; i+=2){
//        printf("%d \n",i);
//    }


//    int i,n;
//
//     printf ("Digite o valor: ");
//     scanf ("%d", &n);
//   for (i=0 ; i <= 100; i+=n){
//        printf("%d \n",i);
//    }


//    int i;
//    for (i = 100; i > 0; i--){
//        printf("%d ", i);
//    }

//    float fah;
//    int i;
//
//    printf("Celcius: \t Fahrenheit:\n ");
//   for(i=-100;i<=100;i+=10){
//       fah=i*9/5+32;
//       printf("%5d\t%2.f\n",i,fah);
//       }

//    int n = 0,i = 0;
//    float h = 1;
//
//     printf ("Digite o valor: ");
//     scanf ("%d", &n);
//     printf (" h = 1 ");
//
//     for  (i=2; i<=n;i++){
//            h = h+1/(float)i;
//            printf (" + 1/%d",i);
//    }
//    if(n>1)
//    printf (" = %.2f", h);


//    int fat=1,i,n;
//    printf("Digite o valor: ");
//    scanf("%d", &n);
//    printf("%d !=",n);
//    for (i=n; i>1 ;i--){
//        fat= fat *i;
//        printf("%d *",i);
//    }
//    if(n>1)
//     printf("1=");
//    printf(" %d",fat);

//    int f,i,n;
//    printf("Digite o valor: ");
//    scanf("%d", &f);
//
//    printf("Fatorial  de %d!" ,f);
//
//    for (i=f-1; i>0 ;i--){
//        f= f *i;
//    }
//    printf("\nFatorial: %d ",f);

//    float v1,v2,v3;
//    printf("Digite os valores: ");
//    scanf("%f%f%f", &v1,&v2,&v3);
//
//    if (v1>v2 && v1>v3)
//      printf("O primeiro valor é maior",v1);
//    else if (v2>v3)
//        printf("O segundo valor é maior ",v2);
//    else
//        printf("O terceiro valor é maior");

//
//    int v1;
//    printf("Digite o valor: ");
//    scanf("%d", &v1);
//    if (v1 % 2==0)
//            printf("O valor é par %d",v1);
//    else
//        printf("ímpar");
//


//    float v1,v2;
//    printf("Digite o primeiro valor: ");
//    scanf("%f", &v1);
//
//    printf("Digite o segundo valor: ");
//    scanf("%f", &v2);
//
//    if (v1>v2)
//      printf("O primeiro valor é maior",v1);
//    else if (v2>v1)
//        printf("O segundo valor é maior ");
//    else
//        printf("Iguais");
//
//    char s1[20]="dezembro";
//    char s2[20]="maio";
//    puts(s1);
//    puts(s2);
//    strcpy(s1,s2);
//    printf("%s",s1);
//
//    s1[0]=s2[0];
//    s1[1]=s2[1];
//    s1[2]=s2[2];
//    s1[3]=s2[3];
//    s1[4]='\0';
//    printf("Mês %s",s1);
    return 0;
}
