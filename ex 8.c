#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, moyenne;
    
    printf("entrez la premier nombre :");
    scanf("%lf", &a);

    printf("entrez la deuxieme nombre : ");
    scanf("%lf", &b);

    printf("entrez la troisieme nombre : ");
    scanf("%lf", &c);

    moyenne = cbrt(a * b * c);

    printf("la moyenne geometrique est : %lf \n ", moyenne);

    return 0;
}    