#include <stdio.h>

   void main() 
{
     int num1;
     int num2;
     char op;

     printf("enter num1: ");
     scanf("%d", &num1);

     printf("enter operation: ");
     scanf("%s", &op);

     printf("enter num2: ");
     scanf("%d", &num2);

     if (op == '+')
     {
          printf("num1 + num2 = %i \n", num1 + num2);
     }
     else if (op == '-')
     {
          printf("num1 - num2 = %i \n", num1 - num2);
     }
     else if (op == '*')
     {
          printf("num1 * num2 = %i \n", num1 * num2);
     }
     else if (op == '/')
     {
          printf("num1 / num2 = %i \n", num1 / num2);
     }
     else
     {
          printf("invalid operation \n");
     }
}

  
}
