/* Escreva um programa que leia dois números e que pergunte qual operação você
deseja realizar. Você deve pode calcular a soma (+), subtração (-), multiplicação(*) e
divisão(/). Exiba o resultado da operação solicitada. */

#include <stdio.h>

int main()
{
    float a, b, resultado;
    int operacao;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    printf("Escolha entre as seguintes operações \n1. +\n2. -\n3. *\n4. /\n: ");
    scanf("%d", &operacao);
    
    if(operacao == 1){
        resultado = a + b;
    }else if(operacao == 2){
        resultado = a - b;
    }else if(operacao == 3){
        resultado = a * b;
    }else if(operacao == 4){
        resultado = a / b;
    }else{
        printf("Operação inválida!");
        resultado = 0;
    }
    
    printf("Resultado: %.1f",resultado);

    return 0;
}
