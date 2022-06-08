/* Escreva um programa para aprovar o empréstimo bancário para comprar de uma casa.
O programa deve perguntar o valor da casa a comprar, o salário e quantidade de anos
a pagar. O valor da prestação mensal não pode ser superior a 30% do salário. Calcule o
valor da prestação como sendo o valor da casa a comprar dividido pelo número de
meses a pagar. */

#include <stdio.h>

int main()
{
    float valor, salario, prestacao;
    int anos, meses;
    printf("Digite o valor da casa: ");
    scanf("%f", &valor);
    printf("Digite o salário: ");
    scanf("%f", &salario);
    printf("Quantos anos para pagar: ");
    scanf("%d", &anos);
    
    meses = anos * 12;
    prestacao = valor / meses;
    
    if(prestacao > salario * 0.3){
    printf("Infelizmente você não pode obter o empréstimo.");
    }else{
    printf("\nValor da prestação: R$%.2f \nEmpréstimo OK!",prestacao);
    }

    return 0;
}
