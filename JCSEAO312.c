#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main()
{
    int num[3], i, len;
    len = sizeof(num)/4;

    for (i = 0; i < sizeof(num)/4; ++i)
    {
        do{
            printf("Digite o %d número: \n", i+1 );
            scanf("%d", &num[i]);
            if (num[i] == num[i-1])
                printf("Digite um numero diferente!\n");
        }while(num[i] == num[i-1]);
    }

    printf("O numero do meio digitado e: %d\n", num[len/len] );
}