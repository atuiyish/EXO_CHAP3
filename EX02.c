#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,op;
    int d;

    system("clear");
    printf("Indiquer les deux valeurs :\n");
    scanf("%f",&a);
    scanf("%f",&b);
    system("clear");
    printf("Indiquer l'opération :\n1 : +\n2 : -\n3 : *\n4 : /\n");
    scanf("%d",&d);
    system("clear");

    switch (d)
    {
    case 1:
        op = a + b;
        printf("%g + %g = %g\n",a,b,op);
        break;
    case 2:
        op = a - b;
        printf("%g - %g = %g\n",a,b,op);
        break;
    case 3:
        op = a * b;
        printf("%g * %g = %g\n",a,b,op);
        break;
    case 4:
        op = a / b;
        printf("%g / %g = %g\n",a,b,op);
        break;
    default:
        printf("Code non reconnu !\n");
        break;
    }
    return 0;    
}