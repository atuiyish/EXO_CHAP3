#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float res,amp,time,tens,puiss,ener;
    int oper;

    system("clear");
    printf("Indiquer la résitance (Ohms) :\n");
    scanf("%f",&res);
    system("clear");
    printf("Indiquer l'ampères (A) :\n");
    scanf("%f",&amp);
    system("clear");
    printf("Indiquer le temp (s) :\n");
    scanf("%f",&time);
    system("clear");
    printf("1 : Dfférence de potentiel\n2 : La puissance\n3 : L'énergie\n");
    scanf("%d",&oper);
    system("clear");

    switch (oper)
    {
    case 1:
        tens = res * amp;
        printf("%g * %g = %g V\n",res,amp,tens);
        break;
    case 2:
        puiss = res * pow(amp,2);
        printf("%g * %g²= %g W\n",res,amp,puiss);
        break;
    case 3:
        ener = res * pow(amp,2) * time;
        printf("%g * %g² * %g = %g J\n",res,amp,time,ener);
        break;
    default:
        break;
    }
}