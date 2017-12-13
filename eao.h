#define FILEIRAS 9
#define POLTRONAS 4

int menu(void);
int lugaresPorFila( int fila );
int check( int viagem[5] );
#include "prod1.h"
#include "prod2.h"
#include "prod3.h"

int menu(void)
{

    int op = 0;
    while((op<=0) || (op>=4)){
        clear();
        printf("\n  > MENU");
        printf("\n  1. Iniciar Compra da viagem ");
        printf("\n  2. Mostrar Fileiras vazias ");
        printf("\n  3. Relatorio de vagas completo \n");
        printf("\n  > Entre com a opcao: ");
        scanf("%d", &op);
    }

    switch(op){
        case 1:
            inciar_compra();
            break;
        case 2:
            mostrar_fileiras_vazias( );
            break;
        case 3:
            relatorio_vagas();
            break;
        default:
            menu();
            break;
    }

    return 1;

}
void limpandoMatriz( )
{
    int a,b;

    for(a = 0; a < FILEIRAS; a++)
    {
        for(b = 0; b < POLTRONAS; b++)
        {
            lugares[a][b] = 0;
        }
    }
}

void show( )
{
    int a,b;

    printf("\n\n");
    for(a = 0; a < FILEIRAS; a++)
    {
        printf("\t%d - ", a+1);
        
        for(b = 0; b < POLTRONAS; b++)
        {
            printf(" %d ", lugares[a][b]);
            if(b == 1){
                printf("  |  ");
            }

        }
        printf("\n");
    }
}

int check( int viagem[5] )
{
    // viagem[0] => embarque
    // viagem[1] => desembarque
    // viagem[2] => fila
    // viagem[3] => lado
    // viagem[4] => poltrona
    int fila        = viagem[2];
    int lado        = viagem[3];
    int poltrona    = viagem[4];

    // check endereco
    int c = 0, aux = 0, _c = 0;

    if(lado == 1){ // se for lado direito
        if(poltrona == 1){
            c = 0;
        }else{
            c = 1;
        }
    }else if(lado == 2){ // se for lado esquerdo
        if(poltrona == 1){
            c = 2;
        }else{
            c = 3;
        }
        
    }

    // printf("\n\nlugares[%d][%d] = %d\n\n", fila, c, lugares[0][0]);

    if(lugares[fila][c] == 1){
        // falso
        return 0;
    }else{
        // verdadeiro
        return 1;
    }
}
int lugaresPorFila( int fila )
{

    int qtde = 0;
    int b = 0;
    int a = 0;
    
    lugares[0][0] = 1;
    lugares[0][1] = 1;
    lugares[0][2] = 1;
    lugares[0][3] = 1;
        for(b = 0; b < POLTRONAS; b++)
        {
            if(lugares[fila][b] == 0){
                qtde += 1;  
            }
        }
    
    return qtde;
}
int save( int a, int b )
{
    // int status = check( a, b );
    // if(status == 1)
    // {
        
    // }
    return lugares[a][b] = 1;
}

