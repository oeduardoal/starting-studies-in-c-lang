#include<stdio.h>
// constante
#define TM 2

void main (void){

    int ma[TM][TM],mb[TM][TM],mr[TM][TM] = {0};
    int c,i =0;

    for(c = 0; c < TM; c++){
        for(i = 0; i < TM; i++){
            printf("MATRIZ 01 .... Linha [%d] Coluna [%d] ", c, i);
            scanf("%d", &ma[c][i]);
        }
    }

    printf("\n\n");
    
    for(c = 0; c < TM; c++){
        for(i = 0; i < TM; i++){
            printf("MATRIZ 02 .... Linha [%d] Coluna [%d] ", c, i);
            scanf("%d", &mb[c][i]);
        }
    }


    /////////////// Soma das matrizes
    for(c = 0; c < TM; c++){
        for(i = 0; i < TM; i++){

            ///////////////// mr = Matriz Resultante
            mr[c][i] = ma[c][i] + mb[c][i];

        }
    }

    printf("\n\n");

    for(c = 0; c < TM; c++){
        for(i = 0; i < TM; i++){
           printf("\t[%d]",mr[c][i]);
        }
        printf("\n");
    }

}
