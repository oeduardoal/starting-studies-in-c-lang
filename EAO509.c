#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif
int main()
{
	char nome[100]="";
	int i, espaco = 0, tamanho = 0, posicao = 0, count = 0 ;
	printf("########### EAO ###########\n");
	int nomes[100];
    system(CLEAR);
	
	do{
		espaco = 0;
		printf("\nDigite seu nome completo: ");	
		gets(nome);
        tamanho = strlen(nome);
		for(i=0;i<tamanho;i++){
			if( nome[i] == ' ' ){
                nomes[count] = i;
				espaco++;
			}
            count++;
		}
		printf("\nNome completo: %s | Com %d nomes\n", nome, espaco+1);	
		fflush(stdin);
	}while( espaco < 3 );

    for(i = 0; i<sizeof(nomes) / 4 - 1;i++){
            posicao = tamanho - (tamanho-i);
            printf("\n%d %d %d", posicao, tamanho, i);
            if( (nome[i] == ' ') || (nome[i] == "\0") )
                printf("\nPrimeira letra de um nome: %ca começando em %d", nome[posicao], posicao);
    }

}
