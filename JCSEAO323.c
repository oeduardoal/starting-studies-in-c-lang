#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void isTriangle(int, int, int);
int numAbsolute(int, int);

int main()
{
    int l1, l2, l3;

    do{
        printf("Digite o primeiro lado do triangulo: \n");
        scanf("%d", &l1);
        if(l1 < 0)
            printf("Numero negativo! Favor, digite um numero positivo!\n");
    }while(l1 < 0);

    do{
        printf("Digite o segundo lado do triangulo: \n");
        scanf("%d", &l2);
        if(l2 < 0)
            printf("Numero negativo! Favor, digite um numero positivo!\n");
    }while(l2 < 0);

    do{
        printf("Digite o terceiro lado do triangulo: \n");
        scanf("%d", &l3);
        if(l3 < 0)
            printf("Numero negativo! Favor, digite um numero positivo!\n");
    }while(l3 < 0);

    int l1l2 = numAbsolute(l1, l2), l1l3 = numAbsolute(l1, l3), l2l1 = numAbsolute(l2, l1), l2l3 = numAbsolute(l2, l3), l3l1 = numAbsolute(l3, l1), l3l2 = numAbsolute(l3, l2);

    if ((l1 < (l2+l3)) || (l2 < (l1+l3)) || (l3 < (l2+l1)) )
    {
        isTriangle(l1, l2, l3);
    }else if (((l1 > l3l2) || (l1 > l2l3)) || ((l2 > l1l3) || (l2 > l3l1)) || ((l3 > l1l2) || (l3 > l2l1)))
    {
        isTriangle(l1, l2, l3);
    }else{
        printf("Nao e um triangulo 1!\n");
    }
}

void isTriangle(int l1, int l2, int l3) {
    if ((l1 == l2 && l1 == l3) || (l1 == l2 && l2 == l3) || (l2 == l1 && l2 == l3) || (l3 == l1 && l3 == l2))
    {
        printf("É um triangulo equilatero\n");
    }else if((l1 != l2 &&  l1 == l3) || (l1 == l2 &&  l1 != l3) || (l2 != l1 &&  l2 == l3) || (l2 == l1 &&  l2 != l3) || (l3 != l1 &&  l3 == l2) || (l3 == l1 &&  l3 != l2)) {
        printf("É um triangulo isosceles\n");
    }else if((l1 != l2 && l2 != l3) || (l2 != l1 && l1 != l3) || (l3 != l2 && l2 != l1)) {
        printf("É um triangulo escaleno\n");
    }else {
        printf("Nao e um triangulo 2!\n");
    }
}

int numAbsolute(int l1, int l2) {
    if((l1 - l2) < 0) {
        return (l1 - l2) * -1;
    }else {
        return (l1 - l2);
    }

    if ((l2 - l1) < 0) {
        return (l2 - l1) * -1;
    }else {
        return (l2 - l1);
    }
}