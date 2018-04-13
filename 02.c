#include <stdio.h>
#include <ctype.h>

void pesoIdeal(float altura, char sexo){
    
    float result = 0.0;
    
    char _sexo[1];
    _sexo[0] = sexo;

    if(_sexo[0] == "m"){
        result = (72.7 * altura - 53);
        printf("O Peso ideal eh: %2.0f", result);
    }else if(_sexo[0] == "f"){
        result = (62.1 * altura - 44.7);
        printf("O Peso ideal eh: %2.0f", result);
    }else{
        printf("\nSexo desconhecido. %c\n", _sexo[0]);
    }
}

int main(){
    float altura;
    char sexo;

    printf("Indique o sexo para a pessoa M/F .... ");
    scanf("%c", &sexo);

    printf("Escreva a altura ........... ");
    scanf("%f", &altura);
    
    pesoIdeal(altura, sexo);

    return 0;
}

