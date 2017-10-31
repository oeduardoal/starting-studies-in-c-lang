#include <stdio.h>
#define TM 10
int main(){

    int vetorA[TM],vetorB[TM],vetorR[TM] = {0};
    int c;


    printf("Entre com os valores do vetor A: \n");
    for(c = 0; c < TM; c++)
        scanf("%d",&vetorA[c]);

    printf("\n\n");

    printf("Entre com os valores do vetor B: \n");        
    for(c = 0; c < TM; c++)
        scanf("%d", &vetorB[c]);    

    for(c = 0; c < TM; c++){
        vetorR[c] = vetorA[c] + vetorB[c];
    }

    printf("\n\n");

    for(c = 0; c < TM; c++){
        printf("%d + %d = %d\n",vetorA[c],vetorB[c],vetorR[c]);
    }

    return 0;
}