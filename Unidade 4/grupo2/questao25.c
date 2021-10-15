#include <stdio.h>

int main()
{
    int i;
    int somapositivo = 0, somanegativo = 0;
    int entrada = 0;
    for (i = 0; i < 20; i++)
    {
        printf("Entre com o número desejado: ");
        scanf("%d", &entrada);
        if (entrada > 0)
        {
            somapositivo = somapositivo + entrada;
        }
        else
        {
            somanegativo = somanegativo + entrada;
        }
    }
    printf("Soma dos positivos: %d\nSoma dos negativos: %d", somapositivo, somanegativo);
    return 0;
}