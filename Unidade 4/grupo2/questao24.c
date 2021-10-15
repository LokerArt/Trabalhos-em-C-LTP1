#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("Entre com o número desejado: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d; ", i);
        }
    }
    return 0;
}