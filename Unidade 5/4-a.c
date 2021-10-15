#include <stdio.h>
#include <stdlib.h>

int ParOuImpar(int n) {
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
    int n;
    printf("Digita o numero parça");
    scanf("%d", &n);
    ParOuImpar(n);

    return 0;
}