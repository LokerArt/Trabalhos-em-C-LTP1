#include <stdio.h>

int main( ) {
    int matriz[3][3] = {
            {9,4,8},
            {5,14,12},
            {0,18,3}
    };

    int linha, coluna;
    for (linha=0; linha<3; linha++)
        for (coluna=0;coluna<3;coluna++)
            printf("%d\n", matriz[linha][coluna]);
}