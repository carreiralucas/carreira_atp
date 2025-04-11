#include <stdio.h>
#include <stdlib.h>

int main () {

     float quantidade[10], valores[10], total_prod, total=0;
     int i, j;

     for (i = 0; i <= 9; i++){
          printf("Digite o valor do %d objeto:  ", i+1);
          scanf("%f", &valores[i]);
     }
     printf("\n \n \n");
     for (j = 0; j <= 9; j++){
          printf("Digite a quantidade vendida do %d objeto: ", j+1);
          scanf("%f", &quantidade[j]);
     }
     printf("\n \n \n ");
     for (i=0, j=0; i <= 9; i++, j++){
          total_prod = valores[i]*quantidade[j];
          printf("Valor total do objeto %d: %.2f\n", i + 1, total_prod);

          total = total + total_prod;
     }
     printf("\n \n ");
     printf("\nO total geral das vendas e: %f", total);
     




}