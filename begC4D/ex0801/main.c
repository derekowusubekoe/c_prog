#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 6;
    b = a + 2;
    if(a > b)
	{
		printf("%d is greater than %d\n", a, b);
	}
	else
	{
		printf("%d is greater than %d\n", b, a);
	}
    return 0;
}
