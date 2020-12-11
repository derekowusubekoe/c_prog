#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    int N;
    int i, j;
    scanf("%d", &N);

   for (i = 0; i < N; i++)
   {
       for (j = 0; j <= i; ++j)
       {
           printf("*	");
       }
       printf("\n");
   }

}