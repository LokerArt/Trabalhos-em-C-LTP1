#include <stdio.h>

int main()
{
    int fat, n;
    printf("Entre com o número desejado: ");
    scanf("%d", &n);
    for (fat = 1; n > 1; n = n - 1)
        fat = fat * n;
    printf("Resultado: %d", fat);
    return 0;
}