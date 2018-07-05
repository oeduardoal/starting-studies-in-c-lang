#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#define TM 40

/*
* 
* @ Data: 16.04.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int main() {
	
	unsigned int Fibo[TM];
	int count = 0, flag = 1;
	int inf = 0, sup = TM, meio = 0, chave = 1;
	
	Fibo[0] = 0;
	Fibo[1] = 1;
	
	for( count = 2; count < TM; count++ ){
		
		Fibo[count] = Fibo[count - 2] + Fibo[count - 1];
		printf("\t%d\n", Fibo[count]);
	}
	
	printf("\n\n\nValores preenchidos!\n\n");
	system("pause");
	
	while( chave != 0 ){
		system("cls");
		
		printf("\n\n\nEntre um numero: ");
		scanf(" %d", &chave);
		
		inf = 0;
		sup = TM;
		
		while( flag == 1 ){

			meio = ( sup + inf  ) / 2;
			
			if( chave == Fibo[meio] ){
				flag = 0;
				printf("\nValor encontrado (%d) na posicao: %d\n\n",chave, meio);
			}
			else if( chave < Fibo[meio] )
			{
				sup = meio - 1;
			}
			else if( chave > Fibo[meio] )
			{
				inf = meio + 1;
			}
			
			if(inf > sup) {
				flag = 0;
				printf("Valor nao encontrado!\n\n");
			}
			
		}
		
		flag = 1;
		meio= 0;
		inf = 0;
		sup = TM;
		
		system("pause");
		system("cls");
		
	}
	
	
	return 0;
}
