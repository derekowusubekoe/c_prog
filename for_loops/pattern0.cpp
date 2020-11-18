#include <iostream>
#include <stdio.h>


int main()
{
    int userInput;
    scanf("%d", &userInput);
    int userInput_1 = 2;
    int userInput_2 = 3;
    int userInput_3 = 4;
    int userInput_4 = 5;



    // n number of stars in a single row
    for (int i = 1; i <= userInput; i++)
    {
        printf("*");
    }
    printf("\n\n");

    // n number of stars linewise (1 star per line)
    for (int i = 1; i <= userInput; i++)
    {
        printf("*\n");
    }
    printf("\n");

    // n*n square like a n*n chessboard ...
    // * * *
    // * * *
    // * * *

    for (int rowNumber = 1; rowNumber <= userInput; rowNumber++) //iterated rows
    {
        for (int columNumber = 1; columNumber <= userInput; columNumber++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // for n = 3
    // *
    // * *
    // * * *
    for (int rowNumber = 1; rowNumber <= userInput; rowNumber++) //iterated rows
    {
        for (int columNumber = 1; columNumber <= rowNumber; columNumber++)
        {
            printf("*");

        }
        printf("\n");
    }
    printf("\n");

    // for n = 3
    // * * *
    // * *
    // *

    for (int rowNumber = userInput; rowNumber >= 1; rowNumber--) //iterated rows
    {
        for (int columNumber = 1; columNumber <= rowNumber; columNumber++)
        {
            printf("*");

        }
        printf("\n");
    }

    printf("\n");

    // for n = 3
    //     *
    //   * *
    // * * *
    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
   {
       for(int columnSpaces = 1; columnSpaces <= (userInput - rowNumber); columnSpaces++)
       {
           printf(" ");
       }
       for(int columNumber = 1; columNumber <= rowNumber; columNumber++)
       {
           printf("*");
       }
       printf("\n");
   }

    printf("\n");


   // for n = 3
    // * * *
    //   * *
    //     *
    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colSpaces = 1; colSpaces < rowNumber; colSpaces++)
        {
            printf(" ");
        }
        for(int colNumber = rowNumber; colNumber <= userInput; colNumber++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    
    
     for(int rowNumber = 1; rowNumber <= userInput; rowNumber+=2)
   {
       for(int columnSpaces = 1; columnSpaces <= (userInput - rowNumber); columnSpaces++)
       {
           printf(" ");
       }
       for(int columNumber = 1; columNumber <= rowNumber; columNumber++)
       {
           printf("*");
       }
       
       printf("\n");
       
   }

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber+=2)
    {
        for(int colSpaces = 1; colSpaces < rowNumber; colSpaces++)
        {
            printf(" ");
        }
        for(int colNumber = rowNumber; colNumber <= userInput; colNumber++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");



    int userInput = 5;
    int rowNumber, colNumber;
    for(int rowNumber = 1; rowNumber < userInput; rowNumber+=2)
   {
       for(int columnSpaces = 1; columnSpaces <= (userInput - rowNumber); columnSpaces++)
       {
           printf("    ");
       }
       for(int columNumber = 1; columNumber <= rowNumber; columNumber++)
       {
           printf("*     ");
       }
       
       printf("\n");
       
   }

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber+=2)
    {
        for(int colSpaces = 1; colSpaces < rowNumber; colSpaces++)
        {
            printf("    ");
        }
        for(int colNumber = rowNumber; colNumber <= userInput; colNumber++)
        {
            printf("*     ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    
    for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_2; colNumber++)
        {
            
            
        }
        printf("\n");
    }
}

}
