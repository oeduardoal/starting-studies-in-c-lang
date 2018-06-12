#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*
* Aluno: Victor Eduardo - EAO
* Questao: 04
*/

void eduardo(){
	printf("\n\n Programa elaborado por Victor Eduardo 17.2.000024\n\n");
}

int main()
{
	
	eduardo();
	int n[10];
	int min=0,j=0,i=0,k=0,aux=0,cont=0,troca=0,num=0,inicio=0,fim=10,meio=0, somama = 0, somame = 0;
	// DEFINA QUANTAS VARIAVEIS PRECISAR 
	for(i=0;i<10;i++) {n[i]= rand()%10;} 
	// CARGA DE 1000 NUMEROS ALEATORIOS entre 0 e 1000
	printf("\nVetor INICIAL\n");
	for (k=0;k<10;k++) {printf("%6d ",n[k]);}
	
	troca = 1;
	while( troca == 1 )
	{
		j = 0;
		troca = 0;
		
		for( i = 0; i <= fim - 2 ; i++ )
		{
			for( k = i + 1; k <= fim - 1; k++ )
			{
				printf("\n\n V %d %d",k,i);
				getchar();
			}
		}
	}
	
	
	for( i = 0; i < 10; i++ ){
		somama = somama + n[i];
	}
	for( i = 99990; i < 100000; i++ ){
		somame = somame + n[i];
	}
	printf("\n\nMedia dos maiores: %d", somama/10);
	printf("\n\nMedia dos menores: %d", somame/10);
	
	return(0);
}
