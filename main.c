#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     float n1, n2, n3, media;
     int p1, p2, p3;

     printf("Digite a primeira nota: ");
     scanf("%f",&n1);

     printf("Digite a segunda nota: ");
     scanf("%f",&n2);

     printf("Digite a terceira nota: ");
     scanf("%f",&n3);

     printf("Digite o primeiro peso: ");
     scanf("%d",&p1);

     printf("Digite o segundo peso: ");
     scanf("%d",&p2);

     printf("Digite o terceiro peso: ");
     scanf("%d",&p3);

     media = ((n1*p1) + (n2*p2) + (n3*p3)) / (p1+p2+p3);

     printf("A media final e: %.2f",media);
    
}