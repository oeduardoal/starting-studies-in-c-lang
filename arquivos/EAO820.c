#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<string.h>


int main()
{

    FILE *fp;
    FILE *fpo;
    int cont = 0, i = 0;
    char linha[80][80];
    char * contem;
    fp = fopen("dados/cearenses.txt", "rb");
    fpo = fopen("820.out", "w");
    fclose(fpo);
    char * res;
    i = 0;
    while( !feof(fp) && i < 199 )
    {
        fgets(linha[i], 60, fp);
        if( strstr( linha[i], "SILVA" ) )
        {
            // fpo = fopen("820.out", "a");
            // fputs(linha[i], fpo );
            // fclose(fpo);
            printf("\n%s", linha[i]);
            // fprintf(fpo, "\n%s", linha[i]);
        }else{
            // printf("\n%s", linha[i]);
        }
        i++;
    }   
    fclose(fp);
    return (0);
}