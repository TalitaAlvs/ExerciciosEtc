/* Escreva um programa para calcular a redução do tempo de vida de um fumante.
Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou.
Considere que um fumante perde 10 minutos de vida a cada cigarro, calcule quantos
dias de vida um fumante perderá. Exiba o total em dias. */

#include <stdio.h>

int main()
{

    int cigarros_por_dia;
    float anos_fumando;
    float reducao_em_minutos, reducao_em_dias;
    printf("Quantidade de cigarros por dia: ");
    scanf("%d", &cigarros_por_dia);
    printf("Quantidade de anos fumando: ");
    scanf("%f", &anos_fumando);
    
    reducao_em_minutos = anos_fumando * 365 * cigarros_por_dia * 10;
    reducao_em_dias = reducao_em_minutos / (24 * 60);
    
    printf("Redução do tempo de vida %.2f dias.",reducao_em_dias);

    return 0;
}