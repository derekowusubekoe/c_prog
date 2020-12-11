#include <stdio.h>

int main()
{
   int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    while (scanf("%d", &a) != 1) {
    printf("Please enter a valid number: ");
    scanf("%*[^\n]");
}
     if(a % 2 == 0)
        printf("%d is even\n", a);
     else if(a % 2 != 0)
        printf("%d is odd\n", a);

     return 0;
}