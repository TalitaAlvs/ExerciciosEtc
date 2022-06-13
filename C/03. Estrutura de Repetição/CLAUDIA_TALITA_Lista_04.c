/* Modifique o programa abaixo para exibir os números ímpares de 1 até o número
digitado pelo usuário. */
#include <stdio.h>

int main()
{
    int fim, x = 1;
    printf("Digite o último número a imprimir: ");
    scanf("%d", &fim);
    while (x <= fim){
        printf("\n%d",x);
        x = x + 2;
    }

    return 0;
}