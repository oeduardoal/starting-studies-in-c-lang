#include<stdio.h>

int main()
{
    int numeros[30] = {0,0,0,0,0,0,0,0,0,0};
    int pares[6] = {0,0,0,0,0,0};
    int impares[6] = {0,0,0,0,0,0};
    int c = 0;
    int test = 0;
    int d = 0;
    int e = 0;
    for(c = 0 ; c < 30; c++){
        printf("Escreva o numero para: %d ...... ",c+1);
        scanf("%d",&numeros[c]);

        // Pares
        test = numeros[c] % 2;
        if( test == 0 ) {
            if(d < 5){
                pares[d] = numeros[c];
                d++;
            }else{
                d=0;
                printf("\nFicou cheio! Comecando de novo \(pares\)\n\n");
            }

        }
        else {
            if(e < 5){
                impares[e] = numeros[c];
                e++;
            }else{
                printf("\nFicou cheio! Comecando de novo \(impares\)\n\n");
                e=0;

            }
        }
    }

    printf("\n\n Pares\n");
    for(c = 0; c < 5; c++){
        printf("\n POS: %d VAL %d", c,pares[c]);
    }
    printf("\n");

    printf("\n\n Impares\n");
    for(c = 0; c < 5; c++){
        printf("\n POS: %d VAL %d", c,impares[c]);
    }
    printf("\n");
    return 0;
}
