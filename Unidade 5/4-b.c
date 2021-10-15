// b)  Um programa principal que deverá solicitar ao usuário o número e a função deverá ser acionada e o retorno mostrado na tela.
// falar vdd entendi isso aqui nao em vou tentar fazer oq entendi, acho que e pra retornar toda logica dentro da funcao isso e facill ate
// teclado americano professor por isso nao uso acento aqui maravilha ne

#include <stdio.h>
#include <stdlib.h>

int ParOuImpar(int n) {
    int n;
        printf("Digita o numero parça");
            scanf("%d", &n);
                if(n%2==0)
                {
                printf("2");
                }
                    else
                    {
                    printf("1");
                    }
}


int main() {

    ParOuImpar(n);

    return 0;
}