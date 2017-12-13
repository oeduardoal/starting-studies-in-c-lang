
void mostrar_fileiras_vazias( ){
    clear();

    int a,b;
    int fileiras_vazias[FILEIRAS];

    for(a = 0; a < FILEIRAS; a++)
    {
        for(b = 0; b < POLTRONAS; b++)
        {
            if(lugares[a][b] == 0){
                fileiras_vazias[a] = 1;
            }else{
                fileiras_vazias[a] = 0;
            }
        }
    }

    for(a = 0; a < FILEIRAS; a++)
    {
        printf("\n%d. ", a+1);
        if(fileiras_vazias[a] == 1){
            printf("Fileira totalmente vazia!");  
        }else{
            printf("Fileira com cadeiras preenchidas... ");  
        }
    }

    printf("\n");  
    getchar();
    printf("\n\nPressione enter para voltar!\n\n");
    getchar();
    menu();
}
