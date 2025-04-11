#include <stdio.h>
#include <stdlib.h>

int main()
{
     int B, H, A;

     printf("Digite a altura do triangulo em cm: ");
     scanf("%d",&H);

     printf("Digite o tamanho da base em cm: ");
     scanf("%d",&B);

     A = (B*H)/2;

     printf("O area do triangulo e: %d", A);

     return(0);

}