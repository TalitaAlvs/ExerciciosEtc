/* Altere o programa a seguir para exibir os resultados no mesmo formato de uma
tabuada: 2x1 = 2, 2x2 = 4.

n = int(input("Tabuada de: "))
x = 1
while x <= 10:
    print(n+x)
    x = x + 1
*/
#include <stdio.h>

int main()
{
    int n, x = 1;
    printf("Tabuada de: ");
    scanf("%d", &n);
    while (x <= 10){
        printf("\n%d x %d = %d",n, x, n*x);
        x = x + 1;
    }

    return 0;
}