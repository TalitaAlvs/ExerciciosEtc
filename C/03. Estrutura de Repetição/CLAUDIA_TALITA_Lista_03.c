/*Faça um programa para escrever a contagem regressiva do lançamento de um
foguete. O programa deve imprimir “10, 9, 8, ..., 1 e Fogo!” na tela.*/
#include <stdio.h>

int main()
{
    int limite, i;
    for (i = 10; i >= 1; i--)
        printf("%d\n", i);
    printf("\nFogo!");

    return 0;
}