#include<stdio.h>
#define TM 5

/*
*    @author Eduardo Almeida <oeduardoal@gmail.com>
*    @problem
*          Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o produto da variável A pelo vetor
*/

int main()
{
    int K[TM],N[TM];
    int c,valor = 0;
    
    // zerar
    for(c = 0 ; c < TM; c++){
        K[c]   = 0;
    }
         
    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d ( VETOR | Produto 1 ) ...... ", c);
        scanf("%d",&K[c]);
    }

    printf("Escreva o valor para ser multiplicado ( Produto 2 ) ...... ");
    scanf("%d",&valor);

    for(c = 0 ; c < TM ; c ++){
        printf("\n %d x %d = %d", K[c], valor, K[c]*valor);
    }

    printf("\n\n");
    return 0;
}
