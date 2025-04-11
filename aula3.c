#include <stdio.h>
#include <stdlib.h>

int main () {

     int n1, n2;
     float media, ne;

     printf("  Digite a primeira nota:  ");
     scanf("%d",&n1);

     printf("  Digite a segunda nota:  ");
     scanf("%d",&n2);

     media = (n1 + n2) / 2;

     printf("Media = %.2f", media);

     if (media < 3)
       printf("\nReprovado");
       else if (media <5)
            {
               printf("\nExame");
               ne = 10 - media;
               printf("\nDeve tirar nota %.2f para ser aprovado", ne);
            }
           else printf("\nAprovado");

     }
      

       