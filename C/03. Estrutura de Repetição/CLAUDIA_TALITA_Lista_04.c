/* Modifique o programa abaixo para exibir os números ímpares de 1 até o número
digitado pelo usuário. 

fim = int(input("Digite o último número a imprimir:"))
x = 0
while x <= fim:
    print (x)
    x = x + 2
*/
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