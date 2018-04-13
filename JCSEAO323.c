#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void isTriangle(int, int, int);
int numAbsolute(int, int);

int main()
{
    int l1, l2, l3, num[3], i;

    for (i = 0; i < (sizeof(num)/4); ++i)
    {
        do{
            printf("Digite o %dº lado do triangulo: \n", i+1);
            scanf("%d", &num[i]);
            if(num[i] < 0)
                printf("Numero negativo! Favor, digite um numero positivo!\n");
        }while(num[i] < 0);
    }

    int l1l2 = numAbsolute(num[0], num[1]), l1l3 = numAbsolute(num[0], num[2]), l2l1 = numAbsolute(num[1], num[0]), l2l3 = numAbsolute(num[1], num[2]), l3l1 = numAbsolute(num[2], num[0]), l3l2 = numAbsolute(num[2], num[1]);

    if ((num[0] < (num[1]+num[2])) || (num[1] < (num[0]+num[2])) || (num[2] < (num[1]+num[0])) )
    {
        isTriangle(num[0], num[1], num[2]);
    }else if (((num[0] > l3l2) || (num[0] > l2l3)) || ((num[1] > l1l3) || (num[1] > l3l1)) || ((num[2] > l1l2) || (num[2] > l2l1)))
    {
        isTriangle(num[0], num[1], num[2]);
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