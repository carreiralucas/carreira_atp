#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

     int a;
     setlocale (LC_ALL, "");

     printf("Escolha um animal entre: \nleão \ncavalo \nhomem \nmacaco \nmorcego \nbaleia \navestruz \npinguim \npato \náguia \ntartaruga \ncrocodilo \ncobra.\n");
     printf("Agora se o animal que escolheu for um Mamífero digite 1, se for uma Ave 2 e se for um réptil 3 \n");
     scanf("%d", &a);
     
     switch (a) {
     case 1:
          printf("O Mamífero que escolheu é um quadrúpede (1), um bípede (2), um voador (3) ou aquático (4)?\n");
          scanf("%d", &a);
          switch (a) {
               case 1:
                    printf("O quadrúpede que escolheu é um carnívoro (1) ou um herbívoro (2)?\n");
                    scanf("%d", &a);
                    switch (a){
                    case 1:
                         printf("O animal que você escolheu é o leão.");
                         break;
                    case 2:
                         printf("O animal que você escolheu é o cavalo.");
                         break;
                    default: 
                         printf("Opção inválida.");
                         break;
                    }
               break;


               case 2:
                    printf("O bípede que escolheu é um onívoro (1) ou um frutífero (2)?\n");
                    scanf("%d", &a);
                    switch(a) {
                    case 1:
                         printf("O animal que você escolheu é o homem.");
                         break;
                    case 2:
                         printf("O animal que você escolheu é o macaco.");
                         break;
                    default:
                         printf("Opção inválida.");
                         break;
                    }
               break;

               case 3:
                    printf("O animal que você escolheu é o morcego.");
                    break;
               
               case 4:
                    printf("O animal que você escolheu é a baleia.");
                    break;
               default: 
                    printf("Opção inválida");
                    break;
               
               }
          break;
     case 2:
          printf("A ave que escolheu é não-voadora (1), nadadora (2) ou de rapina (3)?\n");
          scanf("%d", &a);
          switch (a) {
               case 1: 
                    printf("A ave não-voadora que escolheu é tropical (1) ou polar (2)?\n");
                    scanf("%d", &a);
                    switch (a){
                         case 1: 
                              printf("o animal que você escolheu é o avestruz.");
                              break;
                         case 2:
                              printf("O animal que escolheu é o pinguim.");
                              break;
                         default:
                              printf("Opção inválida");
                              break;
                    }
               break;
               case 2:
                    printf("O animal que você escolheu é o pato.");
                    break;
               case 3:
                    printf("O animal que você escolheu é a águia.");
                    break;
               default:
                    printf("Opção inválida.");
                    break;
               }
     break;
     case 3:
          printf("O réptil que escolheu possui casco (1), é carnívoro (2) ou sem patas (3)?\n");
          scanf("%d", &a);
          switch (a){
               case 1:
                    printf("o animal que você escolheu é a tartaruga.");
                    break;
               case 2:
                    printf("O animal que escolheu é o crocodilo.");
                    break;
               case 3:
                    printf("O animal que você escolheu é a cobra.");
                    break;
               default:
                    printf("Opção inválida");
                    break;
          }
          break;
     }

}