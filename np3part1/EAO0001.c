#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<string.h>

void eao()
{
	printf("\n");
	printf("########################\n");
	printf("\nESCRITO POR EDUARDO ALMEIDA - 17.2.000024\n\n");
	printf("########################\n");
	printf("\n\n");
	printf("Aperte enter...");
	getchar();
	// system("clear");
}

int main()
{
	eao();
	FILE * filosofos = fopen("filosofos.txt", "rt");
	
	char nomesFilosofos[200][60];
	char letraNome[3];
	
	int aux;
	int contador;
	int contadorLetra;
	int contadorTritongos[200] = {0};
	
	int tam = 0;
	
	aux = 0;
	contador = 0;
	contadorLetra = 0;
	while( !feof(filosofos) && contador < 200 )
	{
		fgets(nomesFilosofos[contador], 59, filosofos);
		
		tam = strlen(nomesFilosofos[contador]) - 1;
		
		
		for( contadorLetra = 0; contadorLetra < tam - 3; contadorLetra++ )	
		{
			letraNome[0] = tolower(nomesFilosofos[contador][contadorLetra]);
			letraNome[1] = tolower(nomesFilosofos[contador][contadorLetra + 1]);
			letraNome[2] = tolower(nomesFilosofos[contador][contadorLetra + 2]);
			
			if( letraNome[0] == 'a' || letraNome[0] == 'e' || letraNome[0] == 'i' || letraNome[0] == 'o' || letraNome[0] == 'u' )
			{
				if( letraNome[1] == 'a' || letraNome[1] == 'e' || letraNome[1] == 'i' || letraNome[1] == 'o' || letraNome[1] == 'u' )
				{
					if( letraNome[2] == 'a' || letraNome[2] == 'e' || letraNome[2] == 'i' || letraNome[2] == 'o' || letraNome[2] == 'u' )
					{
						contadorTritongos[contador]++;
					}
				}
			}
		}
		
		contador++;
	}
	
	
	for( aux = 0; aux < contador; aux++ )
	{
		printf("\nO nome %s contem %d tritongos", nomesFilosofos[aux], contadorTritongos[aux] );
	}
	
	fclose(filosofos);
	
	return 0;
}

