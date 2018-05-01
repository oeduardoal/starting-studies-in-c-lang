#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

/*
* 
* @ Data: 30.04.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int main()
{
	int vetor[] = {20,5,3,10,11,13};
	int size = (sizeof(vetor) / 4) - 1;
	int troca = 1, j, i,cont, aux;
	system("cls");
	printf("# Comecar? Enter!");
	getchar();

	for( ; troca == 1 ; ){
	
		j = 0;
		troca = 0;
		
		while( j < size ){
			
			printf("\n> %d eh maior que %d", vetor[j], vetor[j+1] );
				getchar();
				
				if( vetor[j] > vetor[j+1] ){
					
					printf("\n\tSim! Trocando posicao %d para %d\n", j, j+1);
					aux = vetor[j];
					vetor[j] = vetor[j+1];
					vetor[j+1] = aux;
					troca = 1;
					cont++;
					
				}else{
					printf("\n\tNao! Nao necessario Troca\n", j, j+1);
				}
				j++;			
		}
		size--;;
	}

	printf("\n\n");
	for(i=0;i<6;i++) {
		printf("Vetor Ordenado (%d): %d\n", i, vetor[i]);
	} 
	
	printf("\nTrocou %d vezes... ", cont);


}
