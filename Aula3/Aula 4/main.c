#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Para usar CONSTANTE M_PI
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float soma,sub,mult,div,v1,v2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    printf("Digite o segundo valor: ");
    scanf("%f", &v2);
    soma=v1+v2;
    printf("\nSoma:%.2f",soma);

    sub=v1-v2;
    printf("\nSubtração:%.2f",sub);

    mult=v1*v2;
    printf("\nMultiplicação:%.2f",mult);

    div=v1/v2;
    printf("\nDivisão:%.2f",div);
    return 0;
}
