/* Escreva um programa que pergunte o salário do funcionário e calcule o valor do
aumento. Para salários superiores a R$ 1250,00, calcule um aumento de 10%, para os
inferiores ou iguais, um aumento de 15%. */

#include <stdio.h>

int main()
{
    float salario;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    
    float pc_aumento = 0.15;
    
    if(salario > 1250){
        pc_aumento = 0.10;
    }
    
    float aumento = salario * pc_aumento;
    
    printf("Seu aumento será de R$%.2f.",aumento);

    return 0;
}
