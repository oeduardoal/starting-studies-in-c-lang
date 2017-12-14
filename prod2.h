
void mostrar_fileiras_vazias( ){
    clear();

    int a,b,c=0;
    int fileiras_vazias[FILEIRAS];

    for(a = 0; a < FILEIRAS; a++)
    {
        c = 0;
        for(b = 0; b < POLTRONAS; b++)
        {
            if(lugares[a][b] == 1 && c < 4){
                fileiras_vazias[a] = 1;
                c++;
            }
        }
    }

    for(a = 0; a < FILEIRAS; a++)
    {
        printf("\n%d. ", a+1);
        if(fileiras_vazias[a] == 1){
            printf("Fileira com cadeiras preenchidas... ");  
        }else{
            printf("Fileira totalmente vazia!");  
        }
    }

    printf("\n");  
    getchar();
    printf("\n\nPressione enter para voltar!\n\n");
    getchar();
    menu();
}
