#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

     setlocale (LC_ALL, "");
     char nome [50], sexo, nacionalidade;
     int idade;

     printf("Digite seu nome:  ");
     gets(nome);
     
     printf("Digite seu sexo M ou F   ");
     scanf("%c", &sexo);
     if (!((sexo == 'M') || (sexo == 'F')))
          printf("sexo inválido");
          else {
               printf("Digite sua idade:  ");
               scanf("%d", &idade);
               if (!((idade >= 0) && (idade <=150)))
                    printf("Idade inválida");
                    else {
                         printf("Digite sua nacionalidade: brasileiro(a) (b) ou estrangeiro(a) (e): ");
                         scanf(" %c", &nacionalidade);
                    }
                         if (!((nacionalidade == 'b') || (nacionalidade = 'e')))
                              printf("nacionalidade inválida");
                              else if ((sexo == 'M') && (idade > 18) && (nacionalidade = 'b'))
                                   printf("%s, brasileiro do sexo masculino e maior de idade, está habilitado a dirigir", nome); 
                                   else if ((sexo == 'M') && (idade > 18) && (nacionalidade = 'e'))
                                             printf("%s, estrangeiro do sexo masculino e maior de idade, está habilitado a dirigir", nome);
                                        else if ((sexo == 'M') && (idade < 18) && (nacionalidade = 'b'))   
                                             printf("%s, brasileiro do sexo masculino e menor de idade, não está habilitado a dirigir", nome);
                                             else if ((sexo == 'M') && (idade < 18) && (nacionalidade = 'e')) 
                                             printf("%s, estrangeiro do sexo masculino e menor de idade, não está habilitado a dirigir", nome);
                                                  else if ((sexo == 'F') && (idade > 18) && (nacionalidade = 'b')) 
                                                       printf("%s, brasileira do sexo feminino e maior de idade, está habilitada a dirigir", nome); 
                                                       else if ((sexo == 'F') && (idade > 18) && (nacionalidade = 'e'))
                                                            printf("%s, estrangeira do sexo feminino e maior de idade, está habilitada a dirigir", nome);
                                                            else if ((sexo == 'F') && (idade < 18) && (nacionalidade = 'b'))  
                                                                 printf("%s, brasileira do sexo feminino e menor de idade, não está habilitada a dirigir", nome);
                                                                 else
                                                                      printf("%s, estrangeira do sexo feminino e menor de idade, não está habilitada a dirigir", nome);                  


                    }
          }
               

          
          




