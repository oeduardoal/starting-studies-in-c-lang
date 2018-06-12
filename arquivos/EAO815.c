#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>



int main()
{
	FILE * fp;
	
	
	float media = 0;
	float menor = INT_MAX;
	float maior = INT_MIN;
	float num = 0;
	int i,j;
	fp = fopen("dados/aleatorios.txt", "rt");
	
	j = 0;
	while(!feof(fp))
	{
		fscanf(fp, "%f", &num);
		printf("\n%f", num);
		
		if( menor > num ) menor = num;
		if( maior < num ) maior = num;
		media = media + num;
 		j++;
	}
	
	media = media / j;
	
	printf("\n\n");
	
	printf("\n\nMenor eh: %.4f", menor);
	printf("\n\nMaior eh: %.4f", maior);
	printf("\n\nMedia eh: %.4f", media);
	
	printf("\n\n");
	
	return(0);
}
