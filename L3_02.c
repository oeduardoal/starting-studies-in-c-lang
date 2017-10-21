#include<stdio.h>
#define TM 5

int main()
{
    int N[TM];
    int c,menor,posicao = 0;
    
    // zerar
    for(c = 0 ; c < TM; c++)
        N[c] = c;
         
    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d ...... ",c);
        scanf("%d",&N[c]);
    }
    
    menor = N[0];

    for(c = 0; c < TM; c++){
        if(N[c] < menor){
            menor = N[c];
            posicao = c;
        }
            
    }

    printf("\n");
    printf("Menor valor: %d | Na posicao: %d  \n", menor, posicao);
    return 0;
}
