#include <stdio.h>

int retirement_age(int setRetireAge, int usersAge);
int main()
{
    int ageLeftToRetire;
    int a;
    int b = 65;
  
    printf("How old are you? ");
    scanf("%d", &a);
    
    ageLeftToRetire = retirement_age(b, a);

    printf("You have %d years left until retirement.\n", ageLeftToRetire);
    
    return 0;
}

int retirement_age(int setRetireAge, int usersAge)
{
  int finalAge;
  finalAge = setRetireAge - usersAge;
  return(finalAge);
}