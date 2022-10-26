#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//int menor(int n1,int n2)
//{
//int res=0;
//if(n1<n2){
//    res=n1;
//}else{
//    res=n2;
//}
//
//return res;
//}
//
//int main()
//{
//    setlocale(LC_ALL,"portuguese");
//    int x,y,resultado;
//    printf("Digite um valor ");
//    scanf("%d",&x);
//
//    printf("Digite outro valor: ");
//    scanf("%d",&y);
//    resultado = menor(x,y);
//    printf("Valor menor: %d ",resultado);
//
//    return 0;
//}
//---------------------------------------------------------
//ex2
//int potencia(int n1,int n2)
//{
//int res;
//res= pow(n1,n2);
//return res;
//}
//
//int main()
//{
//    setlocale(LC_ALL,"portuguese");
//    int x,y,resultado;
//    printf("Digite a base: ");
//    scanf("%d",&x);
//
//    printf("Digite o expoente: ");
//    scanf("%d",&y);
//    resultado = potencia(x,y);
//    printf("Potencia: %d ",resultado);
//
//    return 0;
//}
//-------------------------------------------------
//ex3
//se valor par retone 1 se ímpar retorne 0
int parouimpar(int n1,int n2)

    if(x%2==0)
        return 1;
    else
        return -1;


int main()
{
    setlocale(LC_ALL,"portuguese");
    int x,y,resultado;
    printf("Digite a base: ");
    scanf("%d",&x);

    printf("Digite o expoente: ");
    scanf("%d",&y);
    resultado = parouimpar(x,y);
    printf("Potencia: %d ",resultado);

    return 0;
}
//----------------------------------------------
//int multiplica(int n1,int n2)
//{
////int res = n1*n2;
//return n1*n2;
//}
//
//int main()
//{
//    setlocale(LC_ALL,"portuguese");
//    int x,y,resultado;
//    printf("Introduz um numero: ");
//    scanf("%d",&x);
//
//    printf("Introduz um numero: ");
//    scanf("%d",&y);
//    //-------------
//    printf("Multiplicação: %d ",multiplica(x,y));
//
//    return 0;
//}
//----------------------------------------------------
//outra versão
//int multiplica(int n1,int n2)
//{
//int res = n1*n2;
//return res;
//}
//
//int main()
//{
//    setlocale(LC_ALL,"portuguese");
//    int x,y,resultado;
//    printf("Introduz um numero: ");
//    scanf("%d",&x);
//
//    printf("Introduz um numero: ");
//    scanf("%d",&y);
//    resultado = multiplica(x,y);
//    printf("Multiplicação: %d ",resultado);
//
//    return 0;
//}
//

