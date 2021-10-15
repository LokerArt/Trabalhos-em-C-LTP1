#include <stdio.h>

int main() {
    float valor, desconto, vfinal;
    printf("Digite o preco do produto:");
    scanf("%f" , &valor);
    desconto =  valor * 0.15;
    vfinal = valor - desconto;
    printf("\nO valor Inicial: %.2f" ,Valor);
    printf("\ndesconto e: 15%");
    printf("\nO valor com desconto e: %.2f" ,vfinal);


    printf("\n\n");
    system("pause");
    return 0;
}