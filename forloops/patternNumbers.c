#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // row: 1
    // col: 1
    // col: 2
    // col: 3
    // col: 4
    // col: 5


    // row: 2
    // col: 1
    // col: 2
    // col: 3
    // col: 4
    // col: 5

    // row: 3
    // col: 1
    // col: 2
    // col: 3
    // col: 4
    // col: 5 (col: 6 wont go inside the inner loop)

    // row: 4
    // col: 1
    // col: 2
    // col: 3
    // col: 4
    // col: 5 (col is and it is inreased by 1, making it 6, condition becomes false)

    // row: 5
    // col: 1
    // col: 2
    // col: 3
    // col: 4
    // col: 5

    int userInput = 5;

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= userInput; colNumber++)
        {
            printf("%d", colNumber); //inner loop variable will be printed
        }
        printf("\n");
    }

    // 1
    // 12
    // 123
    // 1234
    // 12345



    // row: 1
    // (col: 1 will exit the loop because the condition is false 1 < 1 [false])

    // row: 2
    // col: 1
    // (col: 2 control will exit the loop because col = 2 is not less than row = 2)

    // row: 3
    // col: 1
    // col: 2
    // (col: 3 control will exit the loop since 3 < 3 is false)

    // row: 4
    // col: 1
    // col: 2
    // col: 3
    // (col: 4 will exit the inner loop because 4 < 4 is false)

    // row: 5
    // col: 1
    // col: 2
    // col: 3
    // col: 4
    // (col: 5 condition is false since 5 < 5 is not true)

    printf("\n");

    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf("%d", colNumber);
        }
        printf("\n");
    }

    printf("\n");


    for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");

    // 4321 | 1
    // 432 | 12
    // 43 | 123
    // 4 | 1234
    //  | 12345

     for(int rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(int colSpaces = 4; colSpaces <= userInput; colSpaces++) // HINT: look at condition, look at the = 4 can you change it become more general
        {
            printf(" ");
        }
        for(int colNumber = 1; colNumber <= rowNumber; colNumber++)

        {
            printf("%d", colNumber);
        }
        printf("\n");

    }



    // 1234 | 1
    // 123 | 12
    // 12 | 123
    // 1 | 1234
    //  | 12345





}