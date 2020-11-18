#include <stdio.h>
#include <stdlib.h>

int main()
{
   int userInput = 5;
   char alphabet = 'A';
   char userCharInput = 'A';
   int setSpace = 0;
   
    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        printf(" * ");
    }
    printf("\n\n");

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        printf("*\n");
    }
    printf("\n");

   for(int rowNumber = 0; rowNumber < userInput; rowNumber++)
   {
       for(int colNumber = 0; colNumber < userInput; colNumber++)
       {
           printf(" * ");
       }
       printf("\n");
   }
   printf("\n");

   for(int rowNumber = 0; rowNumber < userInput; rowNumber++)
   {
       for(int colNumber = 0; colNumber <= rowNumber; colNumber++)
       {
           printf(" * ");
       }
       printf("\n");
   }
   printf("\n");

   for(int rowNumber = 1; rowNumber <= userInput; ++rowNumber)
   {
       for(int colNumber = 1; colNumber <= rowNumber; ++colNumber)
       {
           printf(" %d ", colNumber);
       }
       printf("\n");
   }
   printf("\n");

    for(int rowNumber = 1; rowNumber <= (userCharInput - 'A' + 1); ++rowNumber)
    {
        for(int colNumber = 1; colNumber <= rowNumber; ++colNumber)
        {
            printf(" %c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    printf("\n");

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colSpaces = 1; colSpaces <= (userInput - rowNumber); colSpaces++)
        {
            printf("   ");
        }
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");

    for(int rowNumber = userInput; rowNumber >= 1; --rowNumber)
    {
        for(int colNumber = 1; colNumber <= rowNumber; ++colNumber)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colSpaces = setSpace; colSpaces < userInput; colSpaces++)
        {
            printf(" ");
        }
        for(int colNumber = 0; colNumber < rowNumber; colNumber++)
        {
            printf("  *  ");
            setSpace=+1;
        }
        printf("\n");
    }
    printf("\n");

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput; colNumber++)
        {
            printf(" *\t\t ");
        }
        printf("\n");
    }
    printf("\n");

}
