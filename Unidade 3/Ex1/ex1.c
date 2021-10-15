#include <stdio.h>

int main() {
    float base = 100, num;
    printf("Digite o Numero:");
    scanf("%f" , &num);
       if (base < num) {
        printf("Numero maior que 100");
       }
       else if (base > num) {
        printf("numero menor que 100");
       }
    }
