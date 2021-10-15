#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float nota1, nota2, nota3, nota4, media;
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota3);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota4);

  media = (nota1 + nota2 + nota3 + nota4) / 2;
  
       if (media >= 7) {
        printf("Aprovado = %.1f\n",media);
       }
       else if (media > 5) {
        printf("Exame = %.1f\n",media);
       }
       if (media < 5) {
        printf("Reprovado = %.1f\n",media);
       }
  
  return 0;//retorno da função main  
}