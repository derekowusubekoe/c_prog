#include <stdio.h>

void retirement_age();
int get_number_of_years_left(int assumed_retired_age, int current_age);
int main()
{
	retirement_age();
    return 0;
}

void retirement_age()
{
	int final_retirement_age = 65; // int t = 65;
	int current_age; // int k;

	printf("How old are you? ");
	scanf("%d", &current_age);

	int number_of_years_left = get_number_of_years_left(final_retirement_age, current_age);
	printf("You have %d years left until retirement.\n", number_of_years_left);
}

int get_number_of_years_left(int assumed_retired_age, int current_age)
{
	return ( assumed_retired_age - current_age );
}