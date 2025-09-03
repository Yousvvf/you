#include <stdio.h>

void afficherBinaire(int n) 
{
    int i;
    printf("binaire : ");
    for (i = sizeof(int) * 8 - 1; i >= 0; i--) 
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() 
{
    int nombre;

    printf("Entrez un entier decimal : ");
    scanf("%d", &nombre);

    printf("Hexadecimal : %x \n", nombre);

    afficherBinaire(nombre);

    return 0;
}
