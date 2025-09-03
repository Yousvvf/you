#include <stdio.h>

int main() 
{
    int n;
    printf(entrez 4 nombre : ");
    scanf("%d", &n);

    int a = n % 10;          
    int b = (n / 10) % 10;    
    int c = (n / 100) % 10;   
    int d = n / 1000;         

    int resultat = a * 1000 + b * 100 + c * 10 + d;

    printf("resultat : %d \n", resultat);

    return 0;
}


