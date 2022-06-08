/* Faça um programa que solicite o preço de uma mercadoria e o percentual de desconto.
Exiba o valor desconto e o preço a pagar. */

#include <stdio.h>

int main()
{

    float preco, desconto;
    float valor_do_desconto, a_pagar;
    printf("Digite o preço da mercadoria: ");
    scanf("%f",&preco);
    
    printf("Digite o percentual de desconto: ");
    scanf("%f",&desconto);
    
    valor_do_desconto = preco * desconto / 100;
    a_pagar = preco - valor_do_desconto;
    
    printf("\n\nUm desconto de %.2f em uma mercadoria de R$%.2f",desconto, preco);
    printf(" vale R$%.2f.",valor_do_desconto);
    printf("\nO valor a pagar é de R$%.2f",a_pagar);

    return 0;
}