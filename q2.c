#include<stdio.h>

void main(void)
{
    int numero,i,count;
    count = 0;

    printf("Digite 5 numeros: \n");    
    for(i = 1; i <= 5; i++){
        scanf("%d",&numero);
        if(numero < 0 ){
            count++;
        };
    };
    printf("\n\nQtd numeros pares: %d",count);
}