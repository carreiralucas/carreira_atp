#include <stdio.h>
#include <stdlib.h>

int main() 
{
     float horario, partem, m;
     int parteh;
     
     printf("Escreva o horario: ");
     scanf("%f",&horario);

     parteh = (int) horario;
     partem = horario - parteh;

     m = ((parteh*60) + (partem*100));

     printf("Esse horario corresponde a %.0f minutos", m);


}