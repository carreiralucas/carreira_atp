#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

     char opcao;
     int x, y, z;
     setlocale (LC_ALL, "");

     printf("Escolha uma opção: \n + para soma \n - para subtração \n * para multiplicação\n / para divisão \n @ para raiz quadrada.\n");
     scanf("%c", & opcao);

     switch (opcao) {
          case '+':
               printf("Digite os dois números que deseja somar: ");
               scanf("%d, %d", &x, &y);
               z = x + y;
               printf("A soma dos dois valores é = %d", z);
               break;
          case '-':
               printf("Digite os dois números que deseja subtrair: ");
               scanf("%d, %d", &x, &y);
               z = x - y;
               printf("A subtração dos dois valores é = %d", z);
               break;
          case '*':
               printf("Digite os números que deseja multiplicar: ");
               scanf("%d, %d", &x, &y);
               z = x * y;
               printf("A multiplicação dos dois valores é = %d", z);
               break;
          case '/':
               printf("Digite os números que deseja dividir: ");
               scanf("%d, %d", &x, &y);
               z = x / y;
               printf("A divisão dos dois valores é = %d", z);
               break;
          case '@':
               printf("Digite o número que deseja tirar a raiz quadrada: ");
               scanf("%d", &x);
               z = sqrt(x);
               printf("A raiz quadrada desse número é = %d", z);
               break;
          default:
               printf("Operação inválida");
     }

     
     


}