#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

     float n1, n2, media;
     setlocale (LC_ALL, "");

     printf("Digite a primeira nota:  ");
     scanf("%f", &n1);
     printf("Digite a segunda nota:  ");
     scanf("%f", &n2);

     if (!((n1 >= 0) && (n1 <= 10) && (n2 >= 0) && (n2 <=10)))
          printf("Notas inválidas.");
          else {
               media = ((0.4*n1) + (0.6*n2));
               printf("A média ponderada das notas é: %.1f", media);
          }
}