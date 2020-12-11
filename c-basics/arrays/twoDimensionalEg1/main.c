#include <stdio.h>

int main()
{
  int a[3][4] = {
   {0,1,2},
   {3,4,5},
   {6,7,8},
   };
  int val = a[2][3];
  printf("%d\n", val);
}