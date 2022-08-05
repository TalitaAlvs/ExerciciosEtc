/* Escreva um programa que leia dois números. Imprima então o resultado da
multiplicação do primeiro pelo segundo. Utiliza apenas operadores de soma e
subtração para calcular o resultar. Lembre-se de que podemos entender a
multiplicação de dois números como somas sucessivas de um deles. Assim 4x5 = 5 + 5
+ 5 + 5 = 20. */
#include <stdio.h>

int main()
{
    int p, s, x = 1, r = 0;
    printf("Primeiro número: ");
    scanf("%d", &p);
    
    printf("Segundo número: ");
    scanf("%d", &s);
    
    while (x <= s){
        r = r + p;
        x = x + 1;
    }
    printf("\n%d x %d = %d",p, s, r);

    return 0;
}