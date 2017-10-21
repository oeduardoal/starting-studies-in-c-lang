#include<stdio.h>
#define TM 5

int main()
{
    int V1[TM],V2[TM];
    int c,menor,posicao = 0;
    
    // zerar
    for(c = 0 ; c < TM; c++){
        V1[c] = 0;
        V2[c] = 0;
    }
         
    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d ...... (Primeiro Vetor)",c);
        scanf("%d",&V1[c]);
    }

    printf("\n");

    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d ...... (Segundo Vetor)",c);
        scanf("%d",&V2[c]);
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
