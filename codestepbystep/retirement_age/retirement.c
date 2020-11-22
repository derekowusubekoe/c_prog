#include <stdio.h>

int main()
{
    int usersAge;
    int setRetireAge = 65;
    int retirement_age;
    printf("How old are you? ");
    scanf("%d", &usersAge);

    printf("You have %d years left until retirement.\n", (retirement_age = setRetireAge - usersAge));
 
}
