#include <stdio.h>
#include <stdlib.h>

int main (){

     int m,a;

     printf("Digite o mes:  ");
     scanf("%d",&m);

     if (m == 2){
          printf("Digite o ano:  ");
          scanf("%d",&a);
          if (a%400 == 0)
               printf("Esse mes tem 29 dias ");
          else if ( (a%4 == 0) && !(a%100 == 0))
                    printf("Esse mes tem 29 dias");
               else printf("Esse mes tem 28 dias");
          }
     else if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
               printf("Esse mes tem 31 dias");
          else if ((m > 12) || (m < 1))
                    printf ("Mes invalido");
               else printf("Esse mes tem 30 dias");
}