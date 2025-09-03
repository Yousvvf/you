#include <stdio.h>
#include <stdio.h>

int main()
{
    double longueur, largeur;
    double surface;

    printf("entrez longueur : ");
    scanf("%lf", &longueur);

    printf("entrez largeur : ");
    scanf("%lf", &largeur);

    surface = longueur * largeur;

   printf(" la surface de rectangle : %f \n", surface);

   return 0;
}