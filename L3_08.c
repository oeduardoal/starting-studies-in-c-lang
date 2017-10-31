#include <stdio.h>
#define TM 20
int main(){

    int vetorA[TM] = {0};
    int c, pares = 0;


    printf("Entre com os valores do vetor A: \n");
    for(c = 0; c < TM; c++){
        scanf("%d",&vetorA[c]);
        if(vetorA[c] % 2 == 0){
            pares++;
        }
    }

    printf("\n Existem %d pares no vetor", pares);

    return 0;
}