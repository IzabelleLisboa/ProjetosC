#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Exercicio 5 :

float validanota () // verifica se o valor é entre 0 e 10;
{
    float N1 = 0;
    scanf ("%f", &N1);

    while ((N1 < 0) || (N1 > 10)){
       printf ("Por favor indique um valor entre 0 e 10!\n( Insira novamente e Prima enter)\n");
       scanf ("%f", &N1);
   }
    return N1;
}


float mediaEx () // calcular a media
{
  float N1 = 0;

  printf ("Por favor, indique a media dos exercicios ->\n");
  scanf ("%f", &N1);
  while ((N1 < 0) || (N1 > 20)){
    printf ("Por favor indique um valor entre 0 e 20!\n( Insira novamente e Prima enter)\n");
    scanf ("%f", &N1);
    }
    return (N1);
}

float aprovacao (float n1, float n2) // calcular a média das aprovações
{
    float aprv = 0;

    aprv = (n1 + n2)/7;
    printf ("\nO resultado da media das 3 notas + a media dos exercicios é igual a %.2f .\n", aprv);

    return aprv;
}

char mostraClasses () // mostrar opções
{
    printf ("\nPara médias > ou = a 9 , a classe é A\n");
    printf ("\nPara médias > ou = a 7.5 e menores que 9 , a classe é B\n");
    printf ("\nPara médias > ou = a 6 , e menores que 7.5 , a classe é C\n");
    printf ("\nPara médias > ou = a 4 , e menores que 6 , a classe é D\n");
    printf ("\nPara médias < que 4 , a classe é E\n");
}

char devolveNota (float n1) // validar em que classe cai a nota;
{
if (n1 >= 9)
    return 'A';
// nota < 9
if (n1 >= 7.5)
    return 'B';
if (n1 >= 6)
    return 'C';
if (n1 >= 4)
    return 'D';
// nota < 4
else
    return 'E';
}

// FIM FUNC exercicio 5;

int main() // MAIN
{
    setlocale (LC_ALL, "Portuguese");

    // variaveis
    int x = 0;
    float nota = 0;
    float media = 0;
    float soma = 0;
    float aprv = 0;
    char classe = " ";


    for (x = 1; x < 4; x++){
        printf ("Por favor, indique a %dº nota ->\n", x);
        nota = validanota ();
        soma = soma + nota*x;

    }

    media = mediaEx ();

    aprv = aprovacao (soma, media);

    mostraClasses ();

    classe = devolveNota (aprv);

    printf ("\nA media pertence a classe %c", classe);

// fim do exercicio 5


    return 0;
}
