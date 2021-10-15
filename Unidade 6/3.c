#include <stdio.h>


int main( ) {
    int soma = 0, media = 0 ,matriz[3][3] = {
            {9,4,8},
            {5,14,12},
            {0,18,3}
    };


    int linha, coluna;
    for (linha=0; linha<3; linha++)
        for (coluna=0;coluna<3;coluna++)
            printf("%d\n", matriz[linha][coluna]);

    int linha1, coluna1;
    for (linha1=0; linha1<3; linha1++)
        for (coluna1=0;coluna1<3;coluna1++)
            soma += matriz[linha1][coluna1];

    printf("\nA soma é %d", soma);

    media = soma / 9;

    printf("\nA média é %d", media);
}