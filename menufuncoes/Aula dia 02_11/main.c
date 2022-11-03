#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10
#define MAXVETOR 5
void preenche_vetor (int vetor[MAXVETOR])
{
    int i = 0;
    for (i=0; i < MAXVETOR; i++){
        printf ("Valor : %d ", i+1);
        scanf ("%d", &vetor[i]);
    }
}
void Imprime_Vet(int vetor[MAXVETOR]){
int i;

for (i=0; i<MAXVETOR;i++){
    printf("%d\t",vetor[i]);
}
}

void ordena_crescente_vetor(int v[MAXVETOR]){
    int aux;
for (int i=0; i<MAXVETOR-1;i++)//preencher
    for (int j = i+1; j<MAXVETOR-1;j++)//pesquisar
        if(v[i]>v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;

        }

}

void copia_vetor(int origem[MAXVETOR], int destino[MAXVETOR]){
 for (int i=0; i<MAXVETOR;i++)
    destino[i] = origem[i];
}

void main()
{
    int v_notas[MAXVETOR], v_clone[MAXVETOR];
    preenche_vetor(v_notas);
    getch();
    printf("\nimprime vetor original: ");
    Imprime_Vet(v_notas);//passagem por parâmetro
    copia_vetor(v_notas,v_clone);
    printf("\nimprime vetor clone: ");
    Imprime_Vet(v_clone);
    printf("\nimprime vetor ordenado: ");
    ordena_crescente_vetor(v_clone);
    Imprime_Vet(v_clone);



    return 0;
}

