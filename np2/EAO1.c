#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*
* Aluno: Victor Eduardo - EAO
* Questao: 01
*/

void eduardo(){
	printf("\n\n Programa elaborado por Victor Eduardo 17.2.000024\n\n");
}

int main()
{
	
	eduardo();
	
	char nome[] = "victor eduardo";
	int ale = 1;
	int f = 0;
	int i;
	int num1;
	int num2;
	char aux = ' ';
	
	printf("Nome (%s) tem %d caracteres \n\n", nome, strlen(nome) - 1);
	
	for( i = 1; i <= 5; i++)
	{
		f = 0;
		while( f == 0 ){
			num1 = rand()%100;
			if( (num1 >= 0 && num1 <= strlen(nome) - 1) ){
				f = 1;	
			}	
		}
		f = 0;
		while( f == 0 ){
			num2 = rand()%100;
			if( num2 >= 0 && num2 <= strlen(nome) - 1 ){
				f = 1;	
			}	
		}
		
		// troca
		aux = nome[num1];
		nome[num1] = nome[num2];
		nome[num2] = aux;
		
		printf("\n\nNome modificado: %s (%d) | posicoes (%d) por (%d)", nome, i, num1, num2);
	}
	
	
	return(0);
}
