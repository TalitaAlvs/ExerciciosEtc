/* Escreva um programa que converta uma temperatura digitada em Celsius para
Fahrenheit. A fórmula de conversão é:

     9 × C
 F = ----- + 32
       5
       
*/

#include <stdio.h>

int main()
{

    float C;
    printf("Digite a temperatura em °C: ");
    scanf("%f", &C);
    
    float F = (9 * C / 5) + 32;
    
    printf("\n%.1f°C é igual á %.1f°F.",C,F);

    return 0;
}