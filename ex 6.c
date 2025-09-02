#include <stdio.h>

int main() 
{
    float a, b, c;
    float moyenne;
    
    printf("num 1 (a): ");
    scanf("%f", &a);

    printf("num 2 (b): ");
    scanf("%f", &b);

    printf("num 3 (c): ");
    scanf("%f", &c);
    
    moyenne = (a * 2 + b * 3 + c * 5) / 10;

    printf(" moyenne : %.2f \n", moyenne);

    return 0;
}
