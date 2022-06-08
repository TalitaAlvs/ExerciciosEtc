/* Escreva um programa que leia a quantidade de dias, horas, minutos e segundos do
usuário. Calcule o total em segundos. */

#include <stdio.h>

int main()
{

    int dias, horas, minutos, segundos;
    int total_em_segundos;
    printf("Informe o valor em dias: ");
    scanf("%d",&dias);
    
    printf("Informe o valor em horas: ");
    scanf("%d",&horas);
    
    printf("Informe o valor em minutos: ");
    scanf("%d",&minutos);
    
    printf("Informe o valor em segundos: ");
    scanf("%d",&segundos);
    
    /* Um minuto tem 60 segundos;
    Uma hora tem 3600 (60 * 60) segundos;
    Um dia tem 24 horas, logo 24 * 3600 segundos */

    total_em_segundos = dias * 24 * 3600 + horas * 3600 + minutos * 60 + segundos;
    
    printf("Convertido em segundos, o valor total indicado pelo usuário é %d", total_em_segundos);

    return 0;
}