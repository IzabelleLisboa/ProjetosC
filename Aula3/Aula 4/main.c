#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Para usar CONSTANTE M_PI
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a=4;
    float b=7;


    printf("%d",(int)b*2);//1/14
    printf("\n%d",a*(int)b);//2/28
    printf("\n%f",(float)a*2);//3/8.000000
    printf("\n%d",(int)2.5*a);//4/8
    printf("\n%d",(int)(a*2.5));//5/28










    /*float soma,sub,mult,div,v1,v2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    printf("Digite o segundo valor: ");
    scanf("%f", &v2);
    soma=v1+v2;
    printf("\nSoma:%.2f+%.2f=%.2f",v1,v2,soma);

    sub=v1-v2;
    printf("\nSubtração:%.2f-%.2f=%.2f",v1,v2,sub);

    mult=v1*v2;
    printf("\nMultiplicação:%.2f*%.2f=%.2f",v1,v2,mult);

    div=v1/v2;
    printf("\nDivisão:%.2f/%.2f=%.2f",v1,v2,div);*/
    return 0;
}
