#define FILEIRAS 9
#define POLTRONAS 4

int menu(void);
int lugaresPorFila( int fila );
int check( int viagem[5] );
int calcularPreco( int dadosViagem[5] );
int calcularPreco( int dadosViagem[5] );
int save( int a, int b );
void show( void );
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
    a,b = 0;
    
    printf("\tWC\tBAR\tSOM/VIDEO");
    printf("\n");
    printf("\n");
    printf("\t\tE\tD");
    printf("\n");
    
    for(a = FILEIRAS - 1; a >= 0; --a)
    {
        printf("%d) ", a+1);
        printf("\t     ");
        for(b = POLTRONAS - 1; b >= 0; --b)
        {
            printf(" %d ", lugares[a][b]);
            if(b == 2){
                printf(" | ");
            }

        }
        printf("\n");
    }
    printf("\n\n");
    printf("\tESCADA\t\tMOTORISTA");
    
    int r1,r2,r3,r4,c1,c2;
    r1=r2=r3=r4=c1=c2=0;

    // for(c1 = 0; c1 < FILEIRAS; c1++ ){
    //     for(c2 = 0; c2 < POLTRONAS; c2++){
    //         if(lugares[c1][c2]){ // poltronas ocupadas
    //             r3++;
    //             if((c2 == 1) || (c2 = 3)){
    //                 r1++; // pessoas na janela
    //             }else if((c2 == 0) || (c2 = 2)){
    //                 r2++; // pessoas na janela
    //             }
    //         }else if(!lugares[c1][c2]){ // poltronas vagas
    //             r4++;
    //         }
    //     }
    // }
    for(a = FILEIRAS - 1; a >= 0; --a)
    {
        for(b = POLTRONAS - 1; b >= 0; --b)
        {
            if(lugares[a][b]){ // poltronas ocupadas
                r3++;
                if((b == 0) || (b == 3)){
                    r1++; // pessoas na janela
                }else if((b == 1) || (b == 2)){
                    r2++; // pessoas na janela
                }
            }else if(!lugares[a][b]){ // poltronas vagas
                r4++;
            }
        }
    }

    printf("\n\n");
    printf("\n  > %d Pessoas na Janela", r1);
    printf("\n  > %d Pessoas no Corredor", r2);
    printf("\n  > %d Total Ocupadas", r3);
    printf("\n  > %d Total Vazias", r4);

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
            c = 1;
        }else{
            c = 0;
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
        save(fila, c);
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

int calcularPreco( int dadosViagem[5] ) {
    int emb = dadosViagem[0];
    int desemb = dadosViagem[1];
    int c = 0;
    int precosPorCidade[5];
    int precoPassagem = 0;
    precosPorCidade[0] = 0;
    precosPorCidade[1] = 15;
    precosPorCidade[2] = 12;
    precosPorCidade[3] = 35;
    precosPorCidade[4] = 53;

    switch(desemb){
        case 1:
            if(emb == 1){
                precoPassagem = ((15 + 12 + 35 + 53) * 2);
                printf("\n Preco da passagem: %d", precoPassagem);
                break;
            }else if(emb == 2){
                precoPassagem = (((12 + 35 + 53) * 2) + 15);
                printf("\n Preco da passagem: %d", precoPassagem);
            }else if(emb == 3){
                precoPassagem = (((35 + 53) * 2) + 12 + 15);
                printf("\n Preco da passagem: %d", precoPassagem);
            }else if(emb == 4){
                precoPassagem = (((53) * 2) + 35 + 12 + 15);
                printf("\n Preco da passagem: %d", precoPassagem);
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
    }
    
}

int save( int a, int b )
{
    // int status = check( a, b );
    // if(status == 1)
    // {53
        
    // }
    return lugares[a][b] = 1;
}

