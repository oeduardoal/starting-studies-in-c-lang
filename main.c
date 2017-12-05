#include <stdio.h>
#define SALAS 5
#define HORARIOS 6

void limpandoMatriz( int reunioes [SALAS][HORARIOS] )
{
    int a,b;

    for(a = 0; a < SALAS; a++)
    {
        for(b = 0; b < HORARIOS; b++)
        {
                reunioes[a][b] = 0;
        }
    }
}

void mostrarOpcoes( int reunioes [SALAS][HORARIOS] )
{
    int a,b;

    for(a = 0; a < SALAS; a++)
    {
        for(b = 0; b < HORARIOS; b++)
        {
            printf("%d - ", reunioes[a][b]);
        }
        printf("(%d\n", a);
    }
}

int verificarPosicao( int a, int b, int reunioes [SALAS][HORARIOS] )
{
    int a,b;

    for(a = 0; a < SALAS; a++)
    {
        for(b = 0; b < HORARIOS; b++)
        {
            if(reunioes[a][b] == 1)
            {
                return 1;
            }else{
                return 0;
            }
        }
    }
}

int salvarReuniao( int a, int b, int reunioes [SALAS][HORARIOS] )
{
    int status = verificarPosicao( a, b, reunioes );
    if(status == 1)
    {
        
    }
    return reunioes[a][b] = 1;
}

int main()
{
    int reunioes [SALAS][HORARIOS];
    int sala = 1;
    int horario = 1;
    limpandoMatriz(reunioes);

    do{
        mostrarOpcoes( reunioes );
        
        printf("\n\n");
        printf("Escolha sala .... ");
        scanf("%d", &sala);
        printf("Escolha horario .... ");
        scanf("%d", &horario);
        printf("\n");

        salvarReuniao( sala, horario, reunioes );

        printf("\n\n");

    }while( 1 );

}
