#include <stdio.h>
#include <stdlib.h>

void fazLinha(char f[]) {
    FILE *file = fopen(f, "r");

    if(file) {
        printf("----------------------------------------");
    } else
        printf("\nArquivo não existe não meu bom\n");
}

void fazBorda(char f[]) {
    FILE *file = fopen(f, "w");

    if(file) {
        printf("||||||||||||||||||||||||||||");
    } else
        printf("\nArquivo não existe não meu bom\n");
}

int main() {

    char nome[] = {"conto.txt"};

    fazBarra(nome);
    fazBarra(nome);
    fazLinha(nome);
    fazBarra(nome);
    fazBarra(nome);
    fazBarra(nome);

    return 0;
}