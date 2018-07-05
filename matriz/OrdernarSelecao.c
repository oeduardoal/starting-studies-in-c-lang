
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#define TM 5
/*
* @ Descricao: Ordenacao de Matrizes (SELECAO)
* @ Data: 02.05.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int main()
{
	int vetor[TM][TM];
	
	int i,j, c = 0, aux = 0, k = 0, min = 0, troca = 0, cont = 0;
	int size = sizeof(vetor) / 4;
	int imenor, menor, col;
	int m[TM][TM];
	printf("\n");
	for(i=0;i<TM;i++) {
		for(j=0;j<TM;j++) {
			vetor[i][j] = rand()%1000;
		}
		
	} 
	
	printf("Iniciar... Enter!");
	printf("\n");
	for (i=0;i<9;i++) 
	{
		imenor=i;
		menor=m[i] [col];
		for (k=i+1;k<10;k++)
		{
			if (m[k][col] < menor)
			{
				imenor=k; 
				menor=m[k][col];
			};
		};
 		for (j=0;j<10;j++){ 
 		
		 	aux=m[imenor][j]; 
			m[imenor][j]=m[i][j];
			m[i][j]=aux;
			
		 }			
	};
	
	getchar();


	for(i=0;i<TM;i++) {
		for(j=0;j<TM;j++) {
			printf("%5d", vetor[i][j]);
		}
		printf("\n");
		
	} 
	


}
