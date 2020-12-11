#include <stdio.h>

int x, y;
int main()
{
    /*Input the two values to be tested*/
    printf("\nInput an integer value for x: ");
    scanf("%d", &x);
    printf("\nInput an integer value for y: ");
    scanf("%d", &y);

    /*Test values and print results*/
    if(x == y)
        printf("x is equal to y\n");
    if(x > y)
        printf("x is greater than y\n");
    if(x < y)
    printf("x is less than y\n");

    return 0;

}
