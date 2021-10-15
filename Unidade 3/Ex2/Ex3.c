#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, num1, num2;

    do {
        printf("\n1 - tu vai Somar\n2 - tu vai subtrair\n3 - tu vai multiplicar\n4 - tu vai dividir\n0 - pede pra sair\n\n");
        scanf("%d", &opcao);

        if(opcao =< 4) {
        if else (opcao = 0)
            printf("to vazando\n");
            break;
        if else (opcao = 1):
            printf("Somando mano: %d\n", num1 + num2);
            break;
        if else (opcao = 2):
            printf("Subtraindo mano: %d\n", num1 - num2);
            break;
        if else (opcao = 3):
            printf("Multiplicando mano: %d\n", num1 * num2);
            break;
        if else (opcao = 4):
            while(num2 == 0) {
                printf("Cara divisão com 0 não existe para com isso\nDigita outro numero vai: ");
                scanf("%d", &num2);
            }
            printf("Dividindo meu bom: %d\n", num1 / num2);
            break;
        default:
            printf("Cara ta me zoando né me ajuda ai.\nDigita outra opção fazendo favor cara. ");
        }
    } while(opcao != 0);
}