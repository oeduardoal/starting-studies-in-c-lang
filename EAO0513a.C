#include <stdio.h>
#include <stdlib.h>
int main () {

float num[6][5] = {0};
int t,i;

	for (t=0; t<6; ++t)
	{
		for (i=0; i<5; ++i)
		{
			
			num[t][i] = (float) ( 1 + rand() % (10+1 - 1) );

			// notas
			if( i == 1)
			{
				num[t][i] -= 1.0;
			}else if( i == 4){
				num[t][i] += 1.5;
			}
			
			// alunos
			if( t == 3 ){
				num[t][i] -= 2.0;
			}


			while( num[t][i] >= 10 ){
				num[t][i] -= 1;	
			}
				
		}
	}	

	for (t=0; t<6; ++t)
	{
		for (i=0; i<5; ++i)
		{
			printf(" %.2f\t",num[t][i]);
		}
		
		printf("\n\n");
	}		

printf("\n");
 
system("pause");

};
