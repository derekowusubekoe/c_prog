#include <stdio.h>

int main()
{
    // &&, ||, ! (AND, OR, NOT)
    // && and || (AND and OR) are used to combine two conditions
    // && returns TRUE when all the conditins under consideration are true
    // and return FALSE when any other condition is false

    int a = 5;
    int b = 5;
    if(a == 5 && a != 6 && a <= 56 && a > 4)
    {
        printf("\nWelcome to this beautiful world of operators\n");
    }

    // || (OR) returns TRUE when one or more than one condition under consideration is true
    // returns FALSE when all conditions are false.

    if(b != 5 || b == 6 || b >= 56 || b > 4)
    {
        printf("\nWelcome to another world of operators\n");
    }
        return 0;

}