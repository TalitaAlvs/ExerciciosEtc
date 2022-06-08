/* Escreva um programa que pergunte uma quantidade de km percorridos por um carro
alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado.
Calcule o preço a pagar, sabendo que o carro custa R$ 60 por dia e R$ 0,15 por km
rodado. */

#include <stdio.h>

int main()
{

    int km, dias;
    float preco_por_dia = 60, preco_por_km = 0.15;
    printf("Digite a quantidade de quilometros percorridos: ");
    scanf("%d", &km);
    printf("Digite quantos dias você ficou com o carro: ");
    scanf("%d", &dias);

    float preco_a_pagar = km * preco_por_km + dias * preco_por_dia;

    printf("\nTotal a pagar: R$%.2f", preco_a_pagar);

    return 0;
}