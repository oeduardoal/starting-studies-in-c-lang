#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<ctype.h>

// Conta vogais do maior nome

int main()
{
	FILE * fp;
    char nome[200][60];
    int nomeVogal[200][200];
    char letra;
    int i = 0;
    int j = 0;
    int cont = 0;
    int contaVogal = 0;
    char maiorNome[300];
	fp = fopen("dados/filosofos.txt", "rt");
	
    
	while( !feof(fp) && i < 200 )
	{

	    fgets(nome[i], 100, fp);
        j = 0;

        for( j = 0; j < strlen(nome[i]) - 1; j++ )
        {
            letra =  tolower(nome[i][j]);

            if( letra == 'a' ){
                cont++;
            }else if( letra == 'e' ){
                cont++;
            }else if( letra == 'i' ){
                cont++;
            }else if( letra == 'o' ){
                cont++;
            }else if( letra == 'u' ){
                cont++;
            }
        }

        if( cont > contaVogal ){
            contaVogal = cont;
            strcpy(maiorNome, nome[i]);
        }
        cont = 0;
        i++;
	}
	
	
	printf( "Foram encontradas %d vogaies | maior eh %s" , contaVogal, maiorNome);
	
	printf("\n");
	printf("\n");
	
	return(0);
}
