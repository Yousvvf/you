#include <stdio.h>

int main() 
{
    float tmp;

    printf("Entrez la temperature : ");
    scanf("%f", &tmp);

    if (tmp < 0) 
    {
        printf("L'eau est solide \n");
    } 
    else if (tmp >= 0 && tmp < 100) 
    {
        printf("L'eau est liquide \n");
    }
    else 
    {
        printf("L'eau est gaz \n");
    }

    return 0;
}
