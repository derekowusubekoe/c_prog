#include <stdio.h>

char fun() // function definition
{
	return 'a';
}

int main() // main function
{
	char c = fun();
	printf("character is: %c\n", c);
}

