#include <stdio.h>
#define TM 1000

int main()
{
    int count   = 0;
    int numero  = 0;
    int perguntados = 0;

    float canal_2         = 0.0;
    float canal_10        = 0.0;
    float canal_12        = 0.0;
    float canal_2_por     = 0.0;
    float canal_10_por    = 0.0;
    float canal_12_por    = 0.0;
    float total           = 100.0;

    do{

        printf("Digite qual desses canais você assiste (2, 10, 12) ....... ");
        scanf("%i", &numero);

        perguntados++;

        if(numero == 2.0){
            canal_2 = canal_2 + 1.0;
        }else if(numero == 10.0){
            canal_10 = canal_10 + 1.0;
        }else if(numero == 12.0){
            canal_12 = canal_12 + 1.0;
        }

    }while( numero != 0.0);

    total = canal_2 + canal_10 + canal_12;

    canal_2_por     = (canal_2 / total);
    canal_10_por    = (canal_10 / total);
    canal_12_por    = (canal_12 / total);

    printf("\n\n");

    // printf("Canal 2: %d\%\nCanal 10: %d\%\nCanal 12: %d\%\n", canal_2_por, canal_10_por, canal_12_por);
    printf("\tForam perguntados para %d pessoas\n\n", perguntados - 1);
    printf("\t\tPorcentagem para o canal 2: %0.f%%\n", canal_2_por * 100);
    printf("\t\tPorcentagem para o canal 10: %0.f%%\n", canal_10_por * 100);
    printf("\t\tPorcentagem para o canal 12: %0.f%%\n", canal_12_por * 100);
    
    return 0;
}
