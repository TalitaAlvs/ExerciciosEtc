/* Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a
distância a percorrer e a velocidade média esperada para a viagem. */

#include <stdio.h>

int main()
{

    float distancia, velocidade_media;
    float tempo;
    printf("Digite a distância em km: ");
    scanf("%f",&distancia);
    
    printf("Digite a velocidade média em km/h: ");
    scanf("%f",&velocidade_media);
    
    tempo = distancia / velocidade_media;
    
    printf("O tempo estimado é de %.2f horas.",tempo);

    return 0;
}