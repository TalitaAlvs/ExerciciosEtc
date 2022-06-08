// Escreva um programa que leia três números e que imprima o maior e o menor.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    
    int maior = a;
    int menor;
    
    if(b>a && b>c){
        maior = b;
    }if(c>a && c>b){
        maior = c;
        menor = a;
    }if(b < c && b < a){
        menor = b;
    }if(c < b && c < a){
        menor = c;
    }
    
    printf("\nO menor número digitado foi: %d", menor);
    printf("\nO maior número digitado foi: %d", maior);

    return 0;
}
