#include <stdio.h>

void Categoria(int idade){
    if(idade >= 5 && idade <= 8){
        printf("Infantil A\n");
    }
    else if(idade >= 9 && idade <= 11){
        printf("Infantil B\n");
    }
    else if(idade >= 12 && idade <= 14){
        printf("Juvenil A\n");
    }
    else if(idade >= 15 && idade <= 17){
        printf("Juvenil B\n");
    }
    else if(idade >= 18 && idade <= 60){
        printf("Adulto\n");
    }
    else if(idade > 60){
    printf("Senior\n");
    }
    else{
        printf("Sem categoria\n");
    }
}

int main(){
    int Idade;

    printf("Digite a sua idade:");
    scanf("%d",&Idade);

    Categoria(Idade);

    return 0;