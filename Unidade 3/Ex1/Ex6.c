#include<stdio.h>
int main()
{
 int numero, guarda_maior;
 int i;

 printf("Entre com o 1o numero inteiro: ");
 scanf("%i", &numero);

 for(i=1; i<5; i++)
 {
 printf("\nEntre com o %do numero inteiro: ",i+1);
 scanf("%i", &numero);

 if(numero>guarda_maior)
 guarda_maior=numero;
 printf("\nNumeros maior que 15: %d", guarda_maior);
 }

 return();
} 