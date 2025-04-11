#include <stdio.h>
#include <stdlib.h>

int main (){

  int ano;

  printf("Digite um ano e descubra se ele e bissexto:  ");
  scanf("%d",&ano);

  if (ano%400 == 0)
    printf("O ano %d e bissexto. ",ano);
  else if ( (ano%4 == 0) && !(ano%100 == 0))
           printf("O ano %d e bissexto", ano);
        else printf("O ano %d nao e bissexto",ano); 
        
        

}