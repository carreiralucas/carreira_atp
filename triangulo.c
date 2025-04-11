#include <stdio.h>
#include <stdlib.h>

int main () {

     int a, b, c;

     printf("Digite os 3 lados do triangulo:  ");
     printf("\nPrimeiro:  ");
     scanf("%d",&a);

     printf("Segundo:  ");
     scanf("%d",&b);

     printf("Terceiro: ");
     scanf("%d",&c);

     if (!((a < b+c) && (b < a+c) && (c < a+b)))
          printf("Os lados nao correspondem a um trangulo");
     else if ((a == b) && (b == c))
               printf("O triangulo e equilatero");
          else if (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a)))
                    printf("O triangulo e isoceles");
               else printf("O triangulo e escaleno");

}
