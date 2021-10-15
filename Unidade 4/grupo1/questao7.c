#include <stdio.h>

int main()
{
    int i, n = 0;
    int lista[47];
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            lista[n] = i;
            printf("%d ", lista[n]);
            n++;
        }
    }
    return 0;
}