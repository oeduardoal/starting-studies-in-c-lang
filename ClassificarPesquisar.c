
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*
* 
* @ Data: 22.04.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int main()
{
    int vetor[10000];
    int min = 0, j = 0, i = 0, k = 0, flag = 1, aux = 0, cont = 0, troca = 0, num = 0, inicio = 0, fim = 9999, meio = 0;

    int size = sizeof(vetor) / 4;

    // 1. Dar Valor
    for (k = 0; k < 10000; k++)
    {
        vetor[k] = rand() % 10000;
    }

    // 2. Mostrar vetor inicial
    printf("\nVetor INICIAL\n");
    for (k = 0; k < 10000; k++)
    {
        printf("%d ", vetor[k]);
    }

    // 3. Classificar vetor (Selecao)
    for (i = 0; i <= size - 2; i++)
    {

        min = i;

        for (k = min + 1; k <= size - 1; k++)
        {
            if (vetor[k] < vetor[min])
            {
                min = k;
            };
            cont++;
        };

        aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
    }

    // 4. Mostrar vetor classficado
    printf("\n\nVetor CLASSIFICADO Pelo metodo da selecao\n");
    for (k = 0; k < 10000; k++)
    {
        printf("%d ", vetor[k]);
    }

    printf("\n\nDIgite um numero entre 0 e 10000 para ver onde ele se encontra no vetor: ");
    scanf(" %d", &num);

    while (flag == 1)
    {
        meio = (fim + inicio) / 2;
        // printf("%d | \n\n", vetor[meio]);

        if (num == vetor[meio])
        {
            flag = 0;
            printf("\nValor encontrado (%d) na posicao: %d\n\n", num, meio);
        }
        else if (num < vetor[meio])
        {
            fim = meio - 1;
        }
        else if (num > vetor[meio])
        {
            inicio = meio + 1;
        }

        if (inicio > fim)
        {
            flag = 0;
            printf("Valor nao encontrado! \nValor (%d) poderia estar em %d %d\n\n", num, vetor[fim], vetor[inicio]);
        }
    }

};