#include <stdio.h>

int main()
{
    int i = 0, n = 0;
    int lista[100];
    while (n != 100)
    {
        if (i % 2 == 1)
        {
            lista[n] = i;
            printf("%d ", lista[n]);
            n++;
        }
        i++;
    }
    return 0;
}