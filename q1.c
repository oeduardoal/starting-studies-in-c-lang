#include<stdio.h>

void main(void)
{
    int numero,i;
    
    printf("Digite um número inteiro: ");

    scanf("%d",&numero);
    for(i = 1; i <= 10; i++)
    printf("%d * %d = %d\n",i,numero,i*numero);
}