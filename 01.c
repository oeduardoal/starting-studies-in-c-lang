#include <stdio.h>

void conceito(float nota){
    
    if(nota > 0 && nota <= 4.9){
        // d
        printf("Conceito D\n", nota);
    }else if(nota >= 5.0 && nota <= 6.9){
        // c
        printf("Conceito C\n");
    }else if(nota >= 7 && nota <= 8.9){
        //b
        printf("Conceito B\n");
    }else if(nota >= 9 && nota <= 10){
        //a
        printf("Conceito A\n");
    }

}

int main(){
    float nota;
    printf("Escreva a nota do Aluno ........... ");
    scanf("%f", &nota);

    // Conceito
    conceito(nota);
    return 0;
}

