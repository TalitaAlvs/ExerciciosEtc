/* Escreva um programa que pergunte o valor de um depósito inicial e taxa de juros de
uma poupança. Exiba os valores mês a mês para os primeiros 24 meses. Escreva o total
ganho com juros no período. */
#include <stdio.h>

int main()
{
    float deposito, taxa, ganho, saldo;
    printf("Depósito inicial: ");
    scanf("%f", &deposito);
    
    printf("Taxa de juros (Ex.: 3 para 3%): ");
    scanf("%f", &taxa);
    
    int mes = 1;
    saldo = deposito;
    
    while (mes <= 24){
        saldo = saldo + (saldo*(taxa/100));
        printf("\nSaldo do mês %d é de R$%.2f.",mes, saldo);
        mes = mes + 1;
    }
    ganho = saldo - deposito;
    printf("\n\nO ganho obtido com os juros foi de R$%.2f.",ganho);

    return 0;
}