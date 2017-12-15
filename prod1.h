

// Global Dados Viagem
int dadosViagem[5];

int lugarPorFila = 0;

void getDadosViagem(){
    
    clear();
    int c   = 0;
    int op  = 0;
    lugarPorFila = 0;
    for(c=2;c<=FILEIRAS;c++){
        dadosViagem[c] = 0;
    }
    while((dadosViagem[2]<=0) || (dadosViagem[2]>=10)){
        printf("\n  >  Passo 3/3 | Escolha uma fila.. \n");
        for(c = 0; c < FILEIRAS; c++){
            lugarPorFila = lugaresPorFila(c);
            printf("\n  %d. Fileira | %d lugares vagos", c+1, lugarPorFila);
        }
        printf("\n");
        printf("\n  > Entre com a opcao: ");
        scanf("%d", &dadosViagem[2]);
    }


    op = 0;
    clear();

    while((dadosViagem[3]<=0) || (dadosViagem[3]>=3)){
        printf("\n  >  Passo 3/3 | Escolha um lado.. \n");
        printf("\n  1. Direito");
        printf("\n  2. Esquerdo\n");
        printf("\n  > Entre com a opcao: ");
        scanf("%d", &dadosViagem[3]);
    }

    while((dadosViagem[4]<=0) || (dadosViagem[4]>=3)){
        printf("\n  >  Passo 3/3 | Escolha uma poltrona.. \n");
        printf("\n  1. Janela");
        printf("\n  2. Corredor\n");
        printf("\n  > Entre com a opcao: ");
        scanf("%d", &dadosViagem[4]);
    }

    dadosViagem[2] -= 1;
    // dadosViagem[3] -= 1;
    dadosViagem[4] -= 1;
    
    int status = check(dadosViagem);

    if(status == 1){
        clear();
        printf("\n  # Poltrona preenchida!");        
        printf("\n  # Calculando preco a pagar... ");        
        calcularPreco( dadosViagem );
        getchar();
        printf("\n\nPressione enter para voltar ao menu!\n\n");
        getchar();
        menu();

    }else{
        clear();
        printf("\n  # Poltrona já ocupada [%d]", dadosViagem[2]);
        printf("\n");  
        getchar();
        printf("\n\nPressione enter para voltar!\n\n");
        getchar();
        menu();        
    }
}

void inciar_compra(){
    
    clear();
    
    int c   = 0;
    int op  = 0;

    for(c=0;c<=FILEIRAS;c++){
        dadosViagem[c] = 0;
    }
    
    while((dadosViagem[0]<=0) || (dadosViagem[0]>=6)){
        printf("\n  >  Passo 1/3 | Escolha a cidade de partida \n");
        printf("\n  1. Fortaleza ");
        printf("\n  2. Taua ");
        printf("\n  3. Quiterianopolis");
        printf("\n  4. Palhano");
        printf("\n  5. Jurema\n");
        printf("\n  > Entre com a opcao: ");
        scanf("%d", &dadosViagem[0]);
    }
    
    op = 0;
    clear();

    while((dadosViagem[1]<=0) || (dadosViagem[1]>=6)){
        printf("\n  >  Passo 2/3 | Desembarca em.. \n");
        printf("\n  1. Fortaleza ");
        printf("\n  2. Taua ");
        printf("\n  3. Quiterianopolis");
        printf("\n  4. Palhano");
        printf("\n  5. Jurema\n");
        printf("\n  > Entre com a opcao: ");
        scanf("%d", &dadosViagem[1]);
    }

    getDadosViagem();

}