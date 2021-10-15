#include <stdio.h>
#include <stdlib.h>

void fazAsterico(int Quant) {
    int i;
    for (i = 1; i <= Quant; i++){
        printf("*");
    }
}

int main() {
    int cont;
    printf("digita os asteriscos ai meu bom");
    scanf("%d", &cont);
    fazAsterico(cont);

    return 0;
}