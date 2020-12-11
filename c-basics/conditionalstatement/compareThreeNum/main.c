#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter a value for A: ");
  scanf("%d", &a);
  printf("Enter a value for B: ");
  scanf("%d", &b);
  printf("Enter a value for C: ");
  scanf("%d", &c);

  if(a > b && a > c)
     printf("%d id the largest.\n", a);
  else if(b > a && b > c)
     printf("%d is the largest.\n", b);
  else if(c > a && c > b)
     printf("%d is the largest.\n", c);
  else
     printf("Values entered are not unique\n");

   return 0;

}