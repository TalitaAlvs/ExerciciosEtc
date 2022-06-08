/* Escreva um programa que pergunte a distância que um passageiro deseja percorrer
em km. Calcule o preço da passagem, cobrando R$ 0,50 por km para viagens de até
200km, e R$ 0,45 para viagens mais longas. */

#include <stdio.h>

int main()
{
    float distancia, passagem;
    printf("Digite a distância a percorrer em km: ");
    scanf("%f", &distancia);
    
    if(distancia<=200){
        passagem = 0.5 * distancia;
    }else{
        passagem = 0.45 * distancia;
    }
    
    printf("Preço da passagem: R$%.2f",passagem);

    return 0;
}
