
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*
* 
* @ Data: 27.09.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/
int pesquisaBinaria(int tab[], int arg)
{
    int inf, sup, med;
    inf = 0;
    sup = (sizeof(tab) / 4) - 1;
    while (inf <= sup)
    {
        med = (inf + sup) / 2; //divisão inteira
        if (arg == tab[med])
            return med;
        else if (arg > tab[med])
            inf = med + 1;
        else if (arg < tab[med])
            sup = med - 1;
    }
    return 0;
}

void eao()
{
    system("@cls||clear");
    printf("\n");
    printf("########################\n");
    printf("\nESCRITO POR EDUARDO ALMEIDA - 17.2.000024\n\n");
    printf("########################\n");
    printf("\n\n");
    printf("Aperte enter...");
    getchar();
    system("@cls||clear");
}

int main()
{
    eao();
    // int vetor[] = {20, 5, 3, 10, 11, 13};
    int troca = 1, j, i, cont, aux, tam, flag = 1, meio, sup, inf;
    system("@cls||clear");
    printf("\nEntre com o tamanho do vetor! ");
    scanf("%d", &tam);
    int vetor[tam];
    int size = (sizeof(vetor) / 4) - 1;

    for (i = 0; i < tam; i++)
    {
        printf("\nEntre com valor para posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    getchar();

    for (; troca == 1;)
    {

        j = 0;
        troca = 0;

        while (j < size)
        {

            printf("\n> %d eh maior que %d", vetor[j], vetor[j + 1]);
            // getchar();

            if (vetor[j] > vetor[j + 1])
            {

                printf("\n\tSim! Trocando posicao %d para %d\n", j, j + 1);
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                troca = 1;
                cont++;
            }
            else
            {
                printf("\n\tNao! Nao necessario Troca\n", j, j + 1);
            }
            j++;
        }
        size--;
    }

    for (i = 0; i < tam; i++)
    {
        printf("\n%d", vetor[i]);
    }

    printf("\nAperte enter para continuar");
    getchar();
    system("@cls||clear");
    printf("\nComecar pesquisa binaria? Aperte enter");
    getchar();
    printf("\nEntre com o numero que desja procurar?");
    scanf("%d", &aux);
    sup = tam;
    while (flag == 1)
    {

        meio = (sup + inf) / 2;
        // printf("\n%d\n", meio);
        // getchar();
        if (aux == vetor[meio])
        {
            flag = 0;
            printf("\nValor encontrado (%d) na posicao: %d\n", aux, meio);
        }
        else if (aux < vetor[meio])
        {
            sup = meio - 1;
        }
        else if (aux > vetor[meio])
        {
            inf = meio + 1;
        }
        else
        {
            flag = 0;
            printf("Valor nao encontrado! \nValor (%d) poderia estar em %d %d\n\n", aux, vetor[sup], vetor[inf]);
        }
    }

    printf("\n");
    return (0);
};
