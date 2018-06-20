#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<string.h>
#include<math.h>

void eao()
{
	printf("\n");
	printf("########################\n");
	printf("\nESCRITO POR EDUARDO ALMEIDA - 17.2.000024\n\n");
	printf("########################\n");
	printf("\n\n");
	printf("Aperte enter...");
	getchar();
	system("cls");
}

int somarNumero( int num )
{
	int somar = 0; 
	int aux; 
	
	for( aux = 0; aux <= num; aux++ )
	{
		somar = somar + aux;
	}
	
	return somar;
}

int main()
{
	eao();	
	int numeroAteCalcular = 0;
	int somatorio = 0;
	int aux;
	
	printf("\nEntre com um numero para calcular > ");
	scanf("%d", &numeroAteCalcular);
	
	somatorio = somarNumero( numeroAteCalcular );
	printf("\n> Calculando", somatorio);
	for( aux = 0; aux < 3; aux++ )
	{
		printf(".");
		sleep(1);
	}
	system("cls");
	printf("\n> Calculado! O Somatorio do numero eh %d", somatorio);
	
	return 0;
}
