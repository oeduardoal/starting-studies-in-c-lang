#include<stdio.h>

void main(void)
{
    int numero,count,numeroi;
    count = 1;
    printf("Digite 1 numero para calcular seu fatorial: \n");    
    scanf("%d",&numero);
    numeroi = numero;
    while(numero > 0){
        count = count * numero;
        numero--;
    }
    
    printf("Fatorial de %d eh: %d\n",numeroi,count);
}