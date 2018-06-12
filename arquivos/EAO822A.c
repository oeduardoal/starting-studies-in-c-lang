#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>

// Ler alunos e mostrar a nota e selecionar a nota

int main()
{
	FILE * fp;
	float nota[9][80];
	float med[9], media = 0;
	char nome[9][10];
	int i,j, nAluno = 0;
	fp = fopen("dados/dados.txt", "rt");
	
	for(j = 0; j < 9; j++)
	{
		fscanf(fp, "%s", &nome[j]);
		printf("Nome =\t\t%s", nome[j]);
		
		media = 0;
		for( i = 0; i < 10; i++ )
		{
			fscanf(fp, "%f", &nota[j][i]);
			printf("\nNota[%d] = %.2f", i ,nota[j][i]);
			media = media + nota[j][i];
		}
		med[j] = media;
		printf("\n");
		printf("\n");
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
