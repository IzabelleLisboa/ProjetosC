#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Para usar CONSTANTE M_PI
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int qc;
    char nome[15]= "",nome2[12]="";
    /*printf("Insira o seu Nome que deseja calcular o n�mero de caracters: ");
    scanf("%s", &nome);
    strlen(nome);
    printf("\nQuantidade de caracters do nome%d",nome);
    printf("\nInsira o seu Nome que deseja calcular o n�mero de caracters: ");
    scanf("%s", &nome);
    strlen(nome2);
    strcpy(nome,nome2);
    printf("\nQuantidade de caracters do nome%d",nome);*/


   /* printf("Insira o seu Nome que deseja calcular o n�mero de caracters:");
    scanf("%s", &nome);
    qc=strlen(nome);
    printf("nome %s tem %d caracters.",nome,qc);*/

    char palavra1[20],palavra2[20];
    printf("Insira a palavra:");
    scanf("%s", &palavra1);
    printf("Insira a palavra2:");
    scanf("%s", &palavra2);
    strcpy(palavra1,palavra2);
    printf("palavra 1 � %s e o palavra � %s", palavra1,palavra2);

    /*float area, raio;
    printf("Raio da circunferencia? ");
    scanf("%f", &raio );
    area = M_PI * (raio*raio);
    printf("Circulo:");
    printf("\nRaio:%.2f",raio);
    printf("\n�rea: %.2f\n", area); //duas casas decimais//*/


    return 0;
}
