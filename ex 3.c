#include <stdio.h>

int main() 
{
    double kilometres, yards;

    printf("Entrez la distance en kilometres : ");
    scanf("%lf", &kilometres);

    yards = kilometres * 1093.61;

    printf("%.2f kilometres = %.2f yards\n", kilometres, yards);

    return 0;
}
