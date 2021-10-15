#include <stdio.h>

int main()
{
    int i = 0;
    int quadrado = 0;
    for (i = 1; i <= 20; i++)
    {
        quadrado = i * i;
        printf("%d ", quadrado);
    }
    return 0;
}