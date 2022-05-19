// Faça um programa que peça dois números inteiros. Imprima a soma desses dois números na tela.

#include <stdio.h>

int main()
{
    int A, B;
    printf("SOMA SIMPLES\n");
    printf("\nPrimeiro número: ");
    scanf("%d", &A);
    printf("Segundo número: ");
    scanf("%d", &B);
    int SOMA = A + B;
    printf("\nSOMA = %d", SOMA);

    return 0;
}