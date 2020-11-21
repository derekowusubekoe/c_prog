#include <stdio.h>

int main()
{
	char name[100];
	printf("Who are you? ");
	fgets(name, 31, stdin);
	printf("Glad to meet you, %s.\n", name);

	return 0;
}

