#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
     setlocale(LC_ALL,"Portuguese");

    int op = 0, n = 0, n1 = 0;

    do {
        printf("-------MENU-------\n");
        printf("Escolha a opera��o a efetuar\n");
        printf("1 - Adi��o \n");
        printf("2 - Subtra��o \n");
        printf("3 - Multiplica��o \n");
        printf("4 - Divis�o \n");
        printf("5 - Expoente \n");
        printf("0 - Sair... \n");
        scanf("%d", &op);

        if (op > 0 && op < 5){
           printf("Insira um valor\n");
           scanf("%d", &n);
           printf("Insira outro valor\n");
           scanf("%d", &n1);
        }
        if (op > 4){
           printf("Insira um valor\n");
           scanf("%d", &n);
        }

        switch (op) {
            case 0:
               printf("A sair... "); break;
            case 1:
               printf("O resultado da soma �: %d\n",n + n1); break;
            case 2:
               printf("O resultado da subtra��o �: %d\n", n - n1); break;
            case 3:
               printf("O resultado da multiplica��o �: %d\n", n * n1); break;
            case 4:
               printf("O resultado da divis�o �: %d\n", n / n1); break;
            case 5:
               printf("O resultado do expoente �: %d\n", n*n*n);
               break;
        }

    } while (op != 0);

}
