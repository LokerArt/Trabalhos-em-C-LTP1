#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Entre com o valor de N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d; ", i);
        }
    }
    return 0;
}