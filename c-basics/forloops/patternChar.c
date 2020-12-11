#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userInput, alphabet = 'A';
    printf("enter an uppercase character: ");
    scanf("%c", &userInput);

    for(int rowNumber = 1; rowNumber <= (userInput - 'A' + 1); ++rowNumber)
    {
        for(int colNumber = 1; colNumber <= rowNumber; ++colNumber)
        {
            printf("%c", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
}