#include <stdio.h>
#define TM 1000

int main()
{

    float preco = 0.0, preco_total  = 0.0;
    float pagamento = 0.0;
    int produtos = 0, saida = 1;
    int tentou = 0;
    float restante = 0.0;

    while( saida != 0 ){

        printf("Digite o valor para o produto %d ....... ", produtos);
        scanf("%f", &preco);

        produtos++;

        preco_total = preco_total + preco;


        // Saida
        if(preco == 0){

            do{

                if( tentou == 0 ){
                    printf("\n\nDigite o pagamento do cliente .... ");
                }else{
                    printf("\n\nO valor ainda não eh suficiente! Digite o pagamento restante de %d .... ", restante);
                }


                scanf("%f", &pagamento);

                preco_total = (preco_total - pagamento);

                printf("Pagamento: %.2f\nPreco Total: %.2f\nRestante: %.2f\n", pagamento, preco_total, restante);

                tentou = 1;

            }while(pagamento >= preco_total);

            saida = 0;
        }

    }

    printf("\n\n");

    // printf("Canal 2: %d\%\nCanal 10: %d\%\nCanal 12: %d\%\n", canal_2_por, canal_10_por, canal_12_por);


    return 0;
}
