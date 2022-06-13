// Escreva um programa para exibir os 10 primeiros múltiplos de 3.
#include <stdio.h>

int main()
{
    int fim = 30, x = 3;
    while (x <= fim){
        printf("%d\n",x);
        x = x + 3;
    }

    return 0;
}