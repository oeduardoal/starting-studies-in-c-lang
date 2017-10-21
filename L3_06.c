#include<stdio.h>
#define TM 3

/*
*    @author Eduardo Almeida <oeduardoal@gmail.com>
*    @problem
*    Faça um algoritmo que leia dois vetores: F[20] e G[20]. Calcule e mostre, a seguir, o produto dos valores de F por G.
*/

int main()
{
    int F[TM],G[TM];
    
    int c,i,valor = 0;
    
    // zerar
    for(c = 0 ; c < TM; c++){
        F[c]   = 0;
        G[c]   = 0;
    }

    for(i = 0 ; i < TM ; i ++){
        printf("Escreva o numero para: %d ( VETOR 1 ) ...... ", i);
        scanf("%d",&F[i]);
    }
    for(i = 0 ; i < TM ; i ++){
        printf("Escreva o numero para: %d ( VETOR 2 ) ...... ", i);
        scanf("%d",&G[i]);
    }

    for(c = 0 ; c < TM; c++){
        printf("\n");
        for(i = 0 ; i < TM ; i ++){
            printf("%d X %d = %d\n",F[c],G[i], F[c] * G[i]);
        }
    }

    printf("\n\n");
    return 0;
}
