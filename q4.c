#include<stdio.h>

void main(void)
{
    int numero,soma,count;
    
    soma,numero = 0;
    
    printf("Digite 10 numeros: \n"); 

    for(count = 0; count <= 2; count++){
        scanf("%d",&numero);
        soma = soma + numero;
    }
    
    printf("A soma dos numeros eh: %d\n",soma);
}