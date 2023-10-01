#include <stdio.h>
#include <stdlib.h>
#define A 6
#define B 21
#define C 25

int main()
{
    float pht;
    char code;

    system("clear");
    printf("Indiquer le prix hors taxe :\n");
    scanf("%f",&pht);
    system("clear");
    printf("Indiquer le code TVA :\nA : 6%%\nB : 21%%\nC : 25%%\n");
    fflush(stdin);
    scanf("%c",&code);
    system("clear");

    switch (code)
    {
    case 'A':
        printf("Pour 6%% de TVA, le prix TTC est de %g\n",(pht * A / 100) + pht);
        break;
    case 'B':
        printf("Pour 21%% de TVA, le prix TTC est de %g\n",(pht * B / 100) + pht);
        break;
    case 'C':
        printf("Pour 25%% de TVA, le prix TTC est de %g\n",(pht * C / 100) + pht);
        break;  
    default:
        printf("Pour 21%% de TVA, le prix TTC est de %g\n\v",(pht * B / 100) + pht);
        printf("Le code indiquer n'étais pas bon donc TVA 21%% par defaut\n");
        break;
    }
    return 0;
}