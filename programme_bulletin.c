#include <stdio.h>

int main()
{
    int cote;
    printf("Entrez votre cote sur 10.\n");
    printf("Votre cote doit être un nombre entier compris entre 0 et 10.\n");
    scanf("%d",&cote);
    switch (cote)
    {
    case 10:
        printf("Magnifique, je vous félicite !\n");
        break;
    case 9:
    case 8:
        printf("Vous avez très bien travaillé.\n");
        break;
    case 7:
    case 6:
        printf("Vous avez sastisfait aux exigences du professeur.\n");
        break;
    case 5:
        printf("Vous avez réussi mais il s'en est fallu de peu.\n");
        break;
    case 4:
        printf("Vous avez échoué mais vous êtes proche de la moitié.\n");
        break;
    case 3:
    case 2:
    case 1:
        printf("Vous avez lamentablement échoué.\n");
        break;
    case 0:
        printf("Vous ne sauriez pas faire pire la prochaine fois !\n");
        break;
    default:
        printf("On vous avait demandé un chiffre compris entre 0 et 10 !");
        break;
    }
}