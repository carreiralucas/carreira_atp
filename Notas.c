#include <stdio.h>
#include <stdlib.h>

int main () {

    int x = 0, i, nota, aprovados = 0;
    float porcentagem;
    char gab[8], resp[8];

    gab[1] = 'a';
    gab[2] = 'b';
    gab[3] = 'c';
    gab[4] = 'd';
    gab[5] = 'a';
    gab[6] = 'b';
    gab[7] = 'c';
    gab[8] = 'd';

    do{
    
    x++;
    nota = 0;
    
    for (i = 1; i <= 8; i++){
    printf("Insira a %d resposta do aluno(a):  \n", i);
    scanf(" %c", &resp[i]);
    if (resp[i] == gab[i]){
        nota++;
        }
    }

    printf("\nA nota desse aluno foi %d \n\n", nota);
    if (nota >= 6){
        aprovados++;
    }

    }while (x < 10);

    porcentagem = aprovados / 10.00;
    printf("A porcentagem de aprovados é %.2f", porcentagem);

}