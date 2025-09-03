#include <stdio.h>
#include <math.h>

int main() 
{
    double rayon, volume;
    double PI = 3.14159;

    printf("Entrez le rayon de la sphere : ");
    scanf("%lf", &rayon);

    volume = (4.0 / 3.0) * PI * pow(rayon, 3);

    printf("Le volume de la sphere est : %f \n", volume);

    return 0;
}
