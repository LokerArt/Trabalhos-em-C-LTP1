#include <stdio.h>

int main()
{
    int i = 0;
    int lista[31];
    for (i = 0; i <= 30; i++)
    {
        lista[i] = i;
        printf("%d;", lista[i]);
    }
    return 0;
}