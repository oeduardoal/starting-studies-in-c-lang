#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

/*
* 
* @ Data: 16.04.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int main()
{
	int vetor[20];
	
	int i = 0, c = 0, aux = 0, k = 0, min = 0, troca = 0, cont = 0;
	int size = sizeof(vetor) / 4;
	for(i=0;i<20;i++) {
		vetor[i]= rand()%1000;
		printf("\n%d", vetor[i]);
	} 

	system("cls");
	getchar();

	for( i = 0; i <= size - 2 ; i++ )
	{
		min=i;
		
		for(k=min+1; k <= size-1; k++)
		{
			
			if (vetor[k] < vetor[min])
			{ 
				min=k;
				troca++;
			};
			cont++;
		};
		
		aux=vetor[min];
    	vetor[min]=vetor[i];
    	vetor[i]=aux;
	
	}



	for(i=0;i<20;i++) {
		printf("Vetor Ordenado (%d): %d\n", i, vetor[i]);
	} 
	
	printf("\n Percorreu %d vezes... ", cont);
	printf("\n Trocou %d vezes... ", troca);

}
