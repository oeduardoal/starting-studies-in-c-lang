#include<stdio.h>
#define TM 5

/*
*    @author Eduardo Almeida <oeduardoal@gmail.com>
*    @problem
*         Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e a sua posição dentro
*         do vetor, mostrando: “O menor elemento de N é”, M, “e sua posição dentro do vetor é:”,P.
*/

int main()
{
    int N[TM];
    int c,menor,posicao = 0;
    
    // zerar
    for(c = 0 ; c < TM; c++)
        N[c] = 0;
         
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
