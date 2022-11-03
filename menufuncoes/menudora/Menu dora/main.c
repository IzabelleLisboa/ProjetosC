#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float retorna_nota_valida(float ma){
// nota entre 0 e 10
float nota;
do{
   printf("Digite a nota do aluno\n");
    scanf("%f", &nota);
}while (nota<0 || nota>10);
return nota;
}
float calcula_e_devolve_media()
{
    setlocale (LC_ALL, "Portuguese");

    printf("INSERIR AS NOTAS E CALCULAR A MÉDIA DAS MESMAS\n");
    float m=0,n1,n2,n3;
    n1=retorna_nota_valida();
    n2=retorna_nota_valida();
    n3=retorna_nota_valida();

    for (int i=1; i<4; i++)
        m+= retorna_nota_valida()*i;
  printf("\nMédia dos exercicios %2.f: ",ma);
    m+=retorna_nota_valida();
    m=m/7;

return ma;
}

void imprime_escala(){
printf("\n Escala de classificação\n\n");
printf("maior ou igual a 9 =>A");
printf("maior ou igual 7.5 e manor que 9 => B");
printf("maior ou igual a 6 e menor que 7.5=>C");
printf("maior ou igual a 4 e menor que 6=>D");
printf("menor que 4=>E")

}

char devolve_conceito_nota(float m){
   if(m>=9)
        return 'A';
    if(m >= 7,5)
        return 'B';
        printf("B");
    if(m >= 6)
        return 'C';
    if(m <= 4)
        return 'D';

    return 'E';

}
char menu()
{
    char op;
    system ("cls");
    printf("\n\n*** MENU ***");
    printf("\n1- Menor\n2- Potencia\n3- Par\n4- Positivo n5-Média notas\n0- Sair\n");
    do
    {
        op=getch();
    }
    while (op!='1' && op!='2' && op!='3' && op!='4'&& op!='5' && op!='0' );
// se colocarem op como int, a condicao seria op<1 || op >4
    return op;
}

int obter_valor_positivo(char s[15]){
// valor >0
int n;

    do{
        printf("\nDigite valor para %s: ",s);
        scanf("%d",&n);
        fflush(stdin);
    } while (n<1);

}
int obter_valor_positivo_diferente(char s[30],int valor)
{
   int x;
   printf("\nValor tem de ser diferente de %d",valor);
   do {
        x= obter_valor_positivo(s);
   }while (x==valor);
   return x;
}

int devolve_menor(int n1, int n2){

    if(n1<n2)
        return n1;
    //else - não é necessário
        return n2;
//return (n1>n2)?n1:n2;  // outra opção

}

int calcula_potencia(int base, int exp){

return pow(base,exp);

}

char verifica_par(int x){

if (x%2==0) // par
    return '1';
return '0';

//return (x%2==0)?'1':'0';

}

int obter_valor_inteiro(){
    float x;

    do{
    printf("\ndigite valor inteiro: ");
    scanf("%f",&x);
    fflush(stdin);
    }while(x!=(int)x);

return x;
}

int verifica_positivo(int valor){

if(valor <0)
    return -1;
else if(valor == 0)
    return 0;
return 1;

}

void imprime_positivo_negativo(int positivo){

if(positivo == -1)
    printf("\nO valor eh negativo");
else if (positivo == 0)
    printf("\nO valor eh neutro");
else
    printf("\nO valor eh positivo");
return;
}


void main(){
char op;
int x,y;
 do
    {
        op=menu(); // mostra menu e obtem a escolha
        system("cls");
        switch(op){

        case '1':
            // calculcar o menor de dois valores
            printf("\nCalcular menor de dois valores diferentes\n\n");
            x=obter_valor_positivo("primeiro valor");
            y=obter_valor_positivo_diferente("segundo valor",x);
            printf("\nO menor eh: %d",devolve_menor(x,y));
            break;

        case '2':
            // potencia
            // x= base y=expoente
            printf("\nCalcula valor da potencia\n\n");
            x=obter_valor_positivo("base");
            y=obter_valor_positivo("expoente");
            printf("\nO resultado da potencia eh %d",calcula_potencia(x,y));
            break;

        case '3':
            //Par ou impar
            printf("Verifica se valor eh par ou impar\n\n");
            x=obter_valor_positivo("verificar paridade");
            if (verifica_par(x)=='1')
                printf("\nO valor eh par!!!");
            else
               printf("\nO valor eh impar!!!");
            break;

        case '4':
            // (1) positivo (0) ou (-1) negativo
            x= obter_valor_inteiro();
            imprime_positivo_negativo(verifica_positivo(x));
            break;
        case '5':
            m = calcula_e_devolve_media();
            conceito = devolve_conceito_nota(m);
            printf("\n de acordo com as suas notas obteve:",conceito);
            imprime_escala();
            break;

        }// fim do switch
    getch();
    }
    while(op != '0');

}
