#include <stdio.h>
#include <stdlib.h>

int main()
{
   float d, j, r, t;

   printf("Digite o valor do deposito: ");
   scanf("%f",&d);

   printf("Digite o valor da taxa de juros em decimal: ");
   scanf("%f",&j);

   r = d*j;
   t = d + r;

   printf("O valor do rendimento e %.2f e o valor total e %.2f", r, t);
   
}