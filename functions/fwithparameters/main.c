#include <stdio.h>

char fun(); // function prototype or function declaration

int main()
{
    char c = fun();
    printf("Character is: %c\n", c);
}

char fun() // function definition
{
	return 'a';
}
