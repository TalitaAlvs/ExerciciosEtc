/* Modifique o programa anterior de forma que o usuário digite o início e o fim da
tabuada, ao invés de começar com 1 e 10. 

    int n, x = 1;
    printf("Tabuada de: ");
    scanf("%d", &n);
    while (x <= 10){
        printf("\n%d x %d = %d",n, x, n*x);
        x = x + 1;
    }
    
*/
#include <stdio.h>

int main()
{
    int n, inicio, fim, x;
    printf("Tabuada de: ");
    scanf("%d", &n);
    
    printf("De: ");
    scanf("%d", &inicio);
    
    printf("Até: ");
    scanf("%d", &fim);
    
    x = inicio;
    
    while (x <= fim){
        printf("\n%d x %d = %d",n, x, n*x);
        x = x + 1;
    }

    return 0;
}