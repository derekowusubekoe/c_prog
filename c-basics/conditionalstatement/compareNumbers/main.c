#include <stdio.h>

int main()
{
  int a, b;
   printf("Enter value for A: ");
   scanf("%d", &a);
   printf("Enter the value for B: ");
   scanf("%d", &b);

   if(a > b)
   printf("a is greater than b\n");
   else
   {
    printf("a is not greater than b\n");
   }

   return 0;
}