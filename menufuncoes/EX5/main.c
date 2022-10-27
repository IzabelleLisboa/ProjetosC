#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calmedia(float MA){

}
int main()
{
    setlocale (LC_ALL, "Portuguese");
    /*ler 3 notas (0-10) de um aluno é a media das notas notas deles.usar na média a fórmula MA(N1+N2*2+N3*3+ME)/7
      MEDIA >=9 =>A
      MEDIA >= 7.5 && < 9 =>B
      MEDIA >= 6 && <7.5 => C
      MEDIA >= 4 && <6 => D
      MEDIA <4 =>E
    */
    printf("INSERIR AS NOTAS E CALCULAR A MÉDIA DAS MESMAS\n");
    int N1,N2,N3,ME;
    float MA;
    printf("Digite a nota do aluno\n");
    scanf("%d", &N1);
    printf("Digite a segunda nota\n");
    scanf("%d", &N2);
    printf("Digite a terceira nota\n");
    scanf("%d", &N3);
    printf("Digite a quantidade de questões\n");
    scanf("%d", &ME);
    MA=(N1+N2*2+N3*3+ME)/7;
    printf("Média %2.f: ",MA);
    if(MA > 9)
        printf("A");
    if(MA >= 7,5 && MA<9)
        printf("B");
    if(MA > 6 && MA<7,5)
        printf("C");
    if(MA >= 4 && MA<6)
        printf("D");
    if(MA <4)
        printf("E");



    return 0;
}
