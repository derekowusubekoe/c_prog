#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grades[3];
   int average;

   grades[0] = 80;
   grades[1] = 95;
   grades[2] = 85;

   average = (grades[0] + grades[1] + grades[2]) / 3;
   printf("The average grade of the 3 grades is %d\n", average);
    return 0;
}
