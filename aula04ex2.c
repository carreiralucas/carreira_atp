#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

     int x, y;
     float z;
     setlocale (LC_ALL, "");

     printf("Digite 2 números:  ");
     scanf("%d, %d", &x, &y);

     if ((x%2 == 0) && (y%2 == 0)) {
               z = x + y;
               printf("Os dois números são pares e a soma dele é: %f", z);
     }
          else if ((x%2 != 0) && (y%2 != 0)){
                    z = x - y;
                    printf ("Os dois números são ímpares e a substração deles é: %f", z);
          }
               else if ((x%2 == 0) && (y%2 != 0)){
                         z = x * y;
                         printf("O primeiro número é par e o segundo ímpar, a multiplicação entre eles é: %f",z);
               }
                    else {
                         z = x / (float) y;
                         printf("O primeiro número é ímpar e o segundo par, a divisão entre eles é: %.2f", z);
                    }




}