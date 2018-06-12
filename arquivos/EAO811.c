#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

/*
* 
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int main()
{
	FILE * fp;
	char * res;
	int i,j;
	char linha[100];
	fp = fopen("dados/dados.txt", "rt");
	
	j = 0;

	while(!feof(fp))
	{
		
		res = fgets(linha, 100, fp);
		
		if( res )
			printf("\n\n%s", res);
 		j++;
	}
	
	getchar();
	printf("\n\n");
	
	
	printf("\n\n");
	
	return(0);
}
