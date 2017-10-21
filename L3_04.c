#include<stdio.h>
#define TM 5

/*
*    @author Eduardo Almeida <oeduardoal@gmail.com>
*    @problem
*         Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante
*/

int main()
{
    int K[5];
    int c,prox,ante,stats = 0;
    
    // zerar
    for(c = 0 ; c < 6; c++){
        K[c]   = 0;
    }
         
    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d (Primeiro Vetor) ...... ",c);
        scanf("%d",&K[c]);
    }

    printf("\n");
    
    for(c = 0 ; c < TM ; c ++){
         // São ímpares
         if(K[c] % 2 == 1){
                if(c < TM){
                    prox = K[c+1];            
                }
                else {
                    prox = K[c];
                }
                ante = K[c];
                printf("| %d | %d ", prox, ante);
        
        }
        else {
        }

        
    }

    printf("\n");
    
    for(c = 0 ; c < TM ; c ++){
        // printf("%d | ", K[c]);
    }

    printf("\n");
    return 0;
}
