#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, a, i;

     printf("Digite o ano do seu nascimento: ");
     scanf("%d",&n);

     printf("Digite o ano atual: ");
     scanf("%d",&a);

     i = a-n;

     printf("A sua idade e: %d anos",i);
}