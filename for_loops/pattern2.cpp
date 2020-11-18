#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int numberOfRows;
    scanf("%d", &numberOfRows);
    int row, col;

    for(row = 1; row <= numberOfRows; row++)
    {
        for(col = 1; col <= numberOfRows - (row - 1); col++)
        {
            printf("*\t");
        }
        printf("\n");
    }

    /*
    int numberOfColumnsToPrint = numberOfRows;

    for(row = 1; row <= numberOfRows; row++)
    {
        for(col = 1; col <= numberOfColumnsToPrint; col++)
        {
            printf("*\t");
        }
        printf("\n");
        numberOfColumnsToPrint--;
    }
    */
    return 0;
}