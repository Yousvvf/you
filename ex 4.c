#include <stdio.h>

int main() 
{
    double kmh, ms;

    printf("Entrez la vitesse en km/h : ");
    scanf("%lf", &kmh);

    ms = kmh * 0.27778;

    printf("%.2f km/h = %.2f m/s \n", kmh, ms);

    return 0;
}
