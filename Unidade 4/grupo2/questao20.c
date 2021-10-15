#include <stdio.h>

int main()
{
    int i = 1;
    int resultado = 0;
    for (i = 1; i <= 10; i++)
    {
        resultado = 7 * i;
        printf("7 x %d = %d\n", i, resultado);
    }
    return 0;
}