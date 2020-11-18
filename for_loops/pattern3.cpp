#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    int rowNumber, columnSpaces, columns;
  int userInput = 5;
  scanf("%d", &userInput);
  for(rowNumber = 1; rowNumber <= userInput; rowNumber++)
  {

  for(columnSpaces = 1; columnSpaces <= (userInput - rowNumber); columnSpaces++)
      {
        printf(" ");
      }

  for(int columns = 1; columns <= rowNumber; columns++)
      {
        printf("*");
      }
  printf("\n");

  }

  return 0;

}