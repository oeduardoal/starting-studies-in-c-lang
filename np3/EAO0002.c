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

int main()
{
	eao();
	FILE * aleatorios = fopen("aleatorios.txt", "rt");
	
	float valores[5000];
	int aux;
	int contador;
	int tam = 0;
	float desvio = 0;
	float desvioD = 0;
	double desvioAux = 0;
	float soma = 0;
	float media = 0;
	float raiz = 0;
	aux = 0;
	contador = 0;

	while( !feof(aleatorios) && contador < 5000 )
	{
		fscanf(aleatorios, "%f", &valores[contador]);
		soma = soma + valores[contador];
		contador++;
	}
	
	for( aux = 0; aux < contador / 2; aux++ )
	{	
		desvioAux = ( valores[aux] - valores[aux + 1] );
		desvio = desvio + pow(desvioAux, 2);
	}
	
	desvioD = desvio / (contador - 1);
	raiz = sqrt(desvioD);
	
	// media
	media = soma / contador;
	
		printf("\nA soma dos valores eh %.2f\nA media dos valores eh %.2f (%.2f/%d)\nO Desvio eh %.2f\n", soma,  media, soma, contador, raiz);
	
	fclose(aleatorios);
	
	return 0;
}
