/* Escreva um programa que pergunte a velocidade do carro de um usuário. Caso
ultrapasse 80km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse
caso, exiba o valor da multa, cobrando R$ 5 por km acima de 80km/h. */

#include <stdio.h>

int main()
{
    float velocidade, multa;
    printf("Digite a velocidade do seu carro: ");
    scanf("%f", &velocidade);
    
    if(velocidade > 80){
        multa = (velocidade - 80) * 5;
        printf("\nVocê foi multado em R$%.2f!",multa);
    }if(velocidade <= 80){
        printf("\nSua velocidade está okay, boa viagem!");
    }

    return 0;
}
