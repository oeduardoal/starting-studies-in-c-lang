#include <stdio.h>
#include <stdlib.h>

void sleep( int );

#ifdef WIN32
  #define clear() system("cls") 
  #define espera() sleep(500) 
#else
  #define clear() system("/usr/bin/clear")
  #define espera() sleep(3) 
#endif


#define FILEIRAS 9
#define POLTRONAS 4

    // Array Principal
    int lugares [FILEIRAS][POLTRONAS];
    int pessoasPorCidade[5][5];
    int valorTotal = 0;
#include "eao.h"

int main()
{
    limpandoMatriz(lugares);
    
    // menu( );
    int qtde = 0;
    menu( );
}
