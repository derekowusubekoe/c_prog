#include <stdio.h>

int x, y;
int main()
{
    /*Input the values to  be tested*/
    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("Enter the value for y: ");
    scanf("%d", &y);

    if(x == y)
        printf("x is equal to y\n");
    else
        if(x > y)
            printf("x is greater than y\n");
    else
        if(x < y)
            printf("x is less than y\n");

    return 0;
}
