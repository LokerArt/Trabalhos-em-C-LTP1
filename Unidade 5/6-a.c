#include <stdio.h>

int main( ) {
    int fat, numero;

    for(fat = 1; numero > 1; numero = numero -1)
        fat *= numero;

    printf("\n O fatorial é %d", fat);
}