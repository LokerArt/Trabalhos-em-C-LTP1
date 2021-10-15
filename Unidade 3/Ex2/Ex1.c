#include <stdio.h>

void main() {
  int peso;
  float altura, imc, mulher, homem;

  printf("Informe o peso (em kgs):\n");
  scanf("%d", &peso);

  printf("\nInforme a altura (em metros):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);
  homem = 72,7 / (altura * altura)
  mulher = 62,1 / (altura * altura)

  printf("\n\nIdeal mulher =  58 ");
  printf("\n\nIdeal Homem = 44,7 ");
  printf("\n------------------------------");
  printf("\n\nIMC mulher = %.2f", mulher);
  printf("\n\nIMC homem = %.2f", homem);
  printf("\n------------------------------");
  printf("\nSeu IMC = %.2f", imc);
}