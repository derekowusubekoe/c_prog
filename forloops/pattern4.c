#include <iostream>
using namespace std;

int main(int argc, char **argv){
   int userInput;
   scanf("%d", &userInput);
   int rowNumber, colNumber, colSpaces;

  for(rowNumber = 1; rowNumber <= userInput; rowNumber++)
    {
        for(colSpaces = 1; colSpaces < rowNumber; colSpaces++)
        {
            printf("	");
        }
        for(colNumber = rowNumber; colNumber <= userInput; colNumber++)
        {
            printf("*	");
        }
        printf("
");
    }
    //write your code here

}