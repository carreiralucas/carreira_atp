#include <stdio.h>
#include <stdlib.h>

int main (){
     int vet1[10], vet2[10], vet3[20], i, j, k;

     printf("Primeiro vetor:\n");
     for (i = 0; i < 10; i++){
          printf("Digite o %d numero:  ", i+1);
          scanf("%d", &vet1[i]);
     }
     printf("\n \n \n");
     printf("\nSegundo vetor:\n");
     for (j = 0; j < 10; j++){
          printf("Digite o %d numero:  ", j+1);
          scanf("%d", &vet2[j]);
     }
     printf("\n \n \n ");
     for(i = 0, j= 0, k = 0; i < 10; i++, j ++){
          vet3[k] = vet1[i];
          printf("%d, ", vet3[k]);
          k++;
          vet3[k] = vet2[j];
          printf("%d, ", vet3[k]);
          k++;   
     }




}