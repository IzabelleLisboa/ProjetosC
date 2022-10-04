#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Para usar CONSTANTE M_PI
int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    printf("Insira o nome:");
    gets(nome);
    puts(nome);

    /*char nome[30],apelido[30],completo[60];
    printf("Insira o nome:");
    scanf("%s", &nome);
    printf("Insira o apelido:");
    scanf("%s", &apelido);
    //strcat(nome ," ");
    //strcat(nome ,apelido);
    sprintf(completo,"%s %s",nome,apelido);
    printf("nome completo: %s %s", completo);*/


    /*int qc;
    char nome[15]= "",nome2[12]="";
    printf("Insira o seu Nome que deseja calcular o número de caracters: ");
    scanf("%s", &nome);
    strlen(nome);
    printf("\nQuantidade de caracters do nome%d",nome);
    printf("\nInsira o seu Nome que deseja calcular o número de caracters: ");
    scanf("%s", &nome);
    strlen(nome2);
    strcpy(nome,nome2);
    printf("\nQuantidade de caracters do nome%d",nome);


    printf("Insira o seu Nome que deseja calcular o número de caracters:");
    scanf("%s", &nome);
    qc=strlen(nome);
    printf("nome %s tem %d caracters.",nome,qc);

    char palavra1[20],palavra2[20];
    printf("Insira a palavra1:");
    scanf("%s", &palavra1);
    printf("Insira a palavra2:");
    scanf("%s", &palavra2);
    strcpy(palavra1,palavra2);
    printf("palavra 1:%s ",palavra1);
    printf("palavra2 %s",palavra2);

    char palavraA[20],palavraB[20],palavraC[20];
    printf("Insira a palavra1:");
    scanf("%s", &palavraA);
    printf("Insira a palavra2:");
    scanf("%s", &palavraB);
    strcpy(palavraC,palavraA);
    strcpy(palavraA,palavraB);
    strcpy(palavraB,palavraC);
    printf("palavra 1:%s ",palavraA);
    printf("palavra 2 %s",palavraB);

    float area, raio;
    printf("Raio da circunferencia? ");
    scanf("%f", &raio );
    area = M_PI * (raio*raio);
    printf("Circulo:");
    printf("\nRaio:%.2f",raio);
    printf("\nÁrea: %.2f\n", area); //duas casas decimais//*/


    return 0;
}
