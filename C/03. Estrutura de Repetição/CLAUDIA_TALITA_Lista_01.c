/* Modifique o programa abaixo para exibir os números de 1 a 100.

x = 1
while x <= 3:
    print (x)
    x = x + 1
*/
#include <stdio.h>

int main()
{
    int limite, i;
    limite = 100;
    for (i = 1; i <= limite; i++)
        printf("%d\n", i);

    return 0;
}