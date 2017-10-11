#include<stdio.h>

int main(void){
 
    int a,b,soma = 0;

    for(a = 0; a < 1000; a++){
        if(a > 0){
            if(a % 2 == 0){
                soma = soma + a;
            }
        }
    }

    printf("%d\n",soma);
    
}