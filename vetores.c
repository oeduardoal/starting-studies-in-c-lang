#include<stdio.h>

void main(void){

    int notas[10];
    int posicao[10];
    int i,temp,j = 0;
    int encontrado = 0;
    for(i = 0; i <= 10; i++){
        printf("Digite o valor para posicao: %d\n", i);
        scanf("%d",&notas[i]);
    }

    printf("Digite um valor para pesquisar: ");
    scanf("%d",&temp);

    for(i = 0; i <= 10; i++){
        if( temp == notas[i]){
            encontrado = 1;
            posicao[i] = i;
        }
    }
    if(encontrado == 1){
        printf("Encontrado na posicao: ");
        for(i = 0; i <= 10; i++){
            if(temp == [i]){
                printf("%d ",i);
            }
        }
    }
    printf("\n");

   
}