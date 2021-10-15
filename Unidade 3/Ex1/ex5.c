#include <stdio.h>

int main(void)
{
int i,n;

printf("Informe um numero inteiro");
scanf ("%i",&n);

for (i=0;i<=n;i++)
{
    if(i%7==0)
    {
    printf("\n %i -numero multiplo de 7", i);
    }
}
return 0;
}