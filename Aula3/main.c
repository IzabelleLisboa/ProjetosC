#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Para usar CONSTANTE M_PI
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float area, raio;

    printf("Raio da circunferencia? ");
    scanf("%f", &raio );
    area = M_PI * (raio*raio);
    printf("Circulo:");
    printf("\nRaio:%.2f",raio);
    printf("\n¡rea: %.2f\n", area); //duas casas decimais//


    return 0;
}
