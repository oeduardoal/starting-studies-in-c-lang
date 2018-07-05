#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>



int main()
{
	FILE * fp;
	float nota[9][80];
	float med[9], media = 0;
	char nome[9][10];
	int i,j, nAluno = 0;
	fp = fopen("dados/dados.txt", "rt");
	
	j = 0;
	while(!feof(fp))
	{
		fscanf(fp, "%s", &nome[j]);
		printf("\nNome: %s", nome[j]);
		media = 0;
		printf("\nNotas: ");
		for( i = 0; i < 10; i++ )
		{
			fscanf(fp, "%f", &nota[j][i]);
			printf(" %.2f", nota[j][i]);
			media = media + nota[j][i];
		}
		
		med[j] = media;
		printf("\nMedia = %.2f", media);
		printf("\n");
		printf("\n");
		j++;
	}
	
	
	printf("\n\nEscolher o aluno que ver a nota: ");
	scanf("%d", &j);	
	
	fscanf(fp, "%s", &nome[j]);
	printf("Nome =\t\t%s", nome[j]);
	
	for( i = 0; i < 10; i++ )
	{
		fscanf(fp, "%f", &nota[j][i]);
		printf("\nNota[%d] = %.2f", i ,nota[j][i]);
	}
	
	printf("\nMedia[%d] = %.2f", j ,med[j]);
	
	printf("\n");
	printf("\n");
	
	return(0);
}
