#include <stdio.h>

int main( ) {
    float area, base, altura;

    printf("\n Informe a base do Triângulo \n");
    scanf("%f",&base);
    printf("\n Informe a altura do Triângulo \n");
    scanf("%f",&altura);

    area = (base * altura) / 2;

    printf("\n Area do triângulo = %f", area);
}