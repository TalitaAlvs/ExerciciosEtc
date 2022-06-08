// Escreva um programa que leia um valor em metros e o exiba convertido em milímetros.

#include <stdio.h>

int main()
{

    float metros,milimetros;
    printf("Informe o valor em metros: ");
    scanf("%f",&metros);

    milimetros=metros*1000;

    printf("O valor em milimetros é: %.2f",milimetros);

    return 0;
}