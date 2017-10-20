#include<stdio.h>

void main(void){

    int notas[10];
    int posicao[10];
    int i,temp = 0;
    int encontrado = 0;

    // Recebi os dez numeros e coloquei no VETOR
    for(i = 0; i <= 10; i++){
        printf("Digite o valor para posicao: %d\n", i);
        scanf("%d",&notas[i]);
    }

    // Recebo um numero
    printf("Digite um valor para pesquisar: ");
    scanf("%d",&temp);
    

    // Pesquiso dentro do Vetor
    for(i = 0; i <= 10; i++){

        if( temp == notas[i]){

            // Encontrado pelo menos uma vez...
            encontrado = 1;
            posicao[i] = i;
        }
    }

    
    // Se encontrado pelo menos uma vez, eu vou exibir "Encontrado na posição: [posicoes]"
    if(encontrado == 1){
        // printf("\nEncontrado na posicao: ");
        for(i = 0; i <= 10; i++){
            if(temp == posicao[i]){
                printf("%d ",posicao[i]);
            }
        }
    }
    printf("\n");

   
}