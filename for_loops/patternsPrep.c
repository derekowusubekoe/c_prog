#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userInput_1 = 2;
    int userInput_2 = 3;
    int userInput_3 = 4;
    int userInput_4 = 5;
    int Num = 1;
    char strInput[10];
    
    for(int rowNumber = 0; rowNumber < 10; rowNumber++)
    {
        printf("Hello World\n"); //loop will start from 0 - 50 so the total is 50 iterations
    }
    printf("\n");

    for(int rowNumber = 1; rowNumber <= userInput_1; rowNumber++)
    {
        printf("%d", rowNumber);
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        printf("%d", rowNumber);
    }
    printf("\n");


    for(int rowNumber = 0; rowNumber < userInput_1; rowNumber++)
    {
        printf(" * \n");
    }
    printf("\n");


    for(int rowNumber = 0; rowNumber < userInput_2; rowNumber++)
    {
        printf(" * \n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_3; colNumber++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 0; colNumber < userInput_4; colNumber++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_2; colNumber++)
        {
            if(rowNumber == 1 || rowNumber == userInput_2 || colNumber == 1 || colNumber == userInput_2) //the use of OR
            printf("*");
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");


     for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", colNumber);
        }
        printf("\n");
    }
    printf("\n");


     for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", colNumber);
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", rowNumber);
        }
        printf("\n");
    }
    printf("\n");


     for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", rowNumber);
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", colNumber);
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", colNumber);
        }
        printf("\n"); 
    }
    printf("\n");

    // for(int rowNumber = 1; rowNumber <= userInput_2; rowNumber++)
    // {
    //     for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
    //     {
    //         printf("%d ", Num++);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", Num++);
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colSpaces = rowNumber; colSpaces < userInput_4; colSpaces++)
        {
            printf("  "); //two spaces
        }
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("* "); // one space after character
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colSpaces = rowNumber; colSpaces < userInput_4; colSpaces++)
        {
            printf("  ");
        }
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d ", colNumber);
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = rowNumber; colNumber < userInput_3; colNumber++)
        {
            printf("   ");
        }
        for(int colSpaces = 1; colSpaces <= (2 * rowNumber - 1); colSpaces++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = userInput_3; rowNumber >= 1; rowNumber--)
    {
        for(int colNumber = rowNumber; colNumber < userInput_3; colNumber++)
        {
            printf("   ");
        }
        for(int colSpaces = 1; colSpaces <= (2 * rowNumber - 1); colSpaces++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");

// Diamond pattern upper pyramid
    for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = rowNumber; colNumber < userInput_3; colNumber++)
        {
            printf("   ");
        }
        for(int colSpaces = 1; colSpaces <= (2 * rowNumber - 1); colSpaces++)
        {
            printf(" * ");
        }
        printf("\n");
    }

// Diamond pattern upper pyramid
   for(int rowNumber = userInput_3 - 1; rowNumber >= 1; rowNumber--)
    {
        for(int colNumber = rowNumber; colNumber < userInput_3; colNumber++)
        {
            printf("   ");
        }
        for(int colSpaces = 1; colSpaces <= (2 * rowNumber - 1); colSpaces++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");

    //Program to print string patterns or diagonal
    for(int rowNumber = 0; rowNumber < userInput_3; rowNumber++)
    {
        for(int colNumber = 0; colNumber < userInput_3; colNumber++)
        {
            if((rowNumber == colNumber)|| (rowNumber + colNumber)== userInput_3 + 1)
            {
            printf("*");
            }
            else
            {
                printf("   ");
            } 
        }
        printf("\n");
    }
    printf("\n\n");


     for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_3; colNumber++)
        {
            if  (rowNumber == colNumber)//|| (rowNumber + colNumber)== userInput_3 + 1)
            {
            printf("*");
            }
            else
            {
                printf("   ");
            } 
        }
        printf("\n");
    }
    printf("\n");

    
    for(int rowNumber = userInput_4; rowNumber >= 1; rowNumber--)
    {
        for(int colNumber = 1; colNumber <= rowNumber - 1; colNumber++)
        {
             if  (rowNumber == colNumber)
             {
                  printf("   ");
             }
              else
        // for(int colSpaces = 1; colSpaces <= rowNumber; colSpaces++)
            {
                printf("*");
            }
           
        }
        printf("\n");
    }


      for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            if  (rowNumber >= 2 && colNumber <= rowNumber - 1)
            {
            printf("  ");
            }
            else
            {
                printf(" * ");
            } 
        }
        printf("\n");
    }
    printf("\n");


     for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = userInput_3; colNumber > rowNumber; colNumber--)
        {
           printf("  ");
        }
        for(int colSpaces = 1; colSpaces <= rowNumber; colSpaces++)
        {
            if(rowNumber >= 2 && colSpaces > 1)
            {
                printf("  ");
            }
            else
            {
                printf(" * ");
            }
            
        }
        printf("\n");
        
    }
    printf("\n");

    int totalStars;
    totalStars = userInput_4 * 2 - 1;

    for(int rowNumber = 1; rowNumber <= totalStars; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= totalStars; colNumber++)
        {
            if(colNumber == rowNumber || (colNumber == totalStars - rowNumber + 1))
            {
                printf("*");
            }
            else
            {
                printf("  ");
            } 
        }
        printf("\n");
    }
    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_4; colNumber++)
        {
            if(colNumber == rowNumber || (colNumber == userInput_4 - rowNumber + 1))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            } 
        }
        printf("\n");
    }
    printf("\n");

// print the stars for the upper triangle   
     for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_3 - rowNumber; colNumber++)
        {
            printf(" ");
            
        }
        for(int colNumber = 1; colNumber <= 2 * rowNumber - 1; colNumber++)
        {
            if(rowNumber  == 1 || colNumber == 1 || colNumber == 2 * rowNumber - 1)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

// print the stars for the lower triangle    
    for(int rowNumber = userInput_3 - 1; rowNumber >= 1; rowNumber--)
    {
        for(int colNumber = 1; colNumber <= userInput_3 -1; colNumber++)
        {
            printf(" ");
        }
        for(int colNumber = 1; colNumber <= 2 * rowNumber - 1; colNumber++)
        {
            if(rowNumber  == 1 || colNumber == 1 || colNumber == 2 * rowNumber - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

     for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_4; colNumber++)
        {
            if(rowNumber == colNumber)
            {
            printf("*");
            }
            else
            {
                printf("\t");
            } 
        }
        printf("\n");
    }
    printf("\n");


     for(int rowNumber = 1; rowNumber <= userInput_3; rowNumber++)
    {
        for(int colNumber = userInput_3; colNumber > rowNumber; colNumber--)
        {
           printf("\t");
        }
        for(int colSpaces = 1; colSpaces <= rowNumber; colSpaces++)
        {
            if(rowNumber >= 2 && colSpaces > 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
        
    }
    printf("\n");

     for(int rowNumber = 1; rowNumber <= userInput_4; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput_4; colNumber++)
        {
            if(colNumber == rowNumber || (colNumber == userInput_4 - rowNumber + 1))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            } 
        }
        printf("\n");
    }


 
} 