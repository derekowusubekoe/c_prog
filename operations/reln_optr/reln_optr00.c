#include <stdio.h>

int main()
{
    // Relational Operators are used to compare two values
    // All Relational operators will return either TRUE or FALSE
    // ==, !=, <=, >=, <, >

    // 4 == 5 is equivalent to 4 == 5? Answer will be False
    // 4 != 5 is equivalent to is 4 != 5? Answer will be True

    int a = 300, b = 2090;
    if( b >= a )
    {
        printf("Bingo! You are in\n");
    }
    else
    {
        printf("OOPS! You are out\n");
    }

    return 0;

}