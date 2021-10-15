#include <stdio.h>

int main()
{
    int i, n = 0;
    int lista[40];
    for (i = 1; i <= 200; i++)
    {
        if (i % 5 == 0)
        {
            lista[n] = i;
            printf("%d ", lista[n]);
            n++;
        }
    }
    return 0;
}