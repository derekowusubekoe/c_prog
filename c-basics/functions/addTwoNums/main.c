#include <stdio.h>

int add_two_num(int a, int b);

int main()
{
    int num1 = 4;
    int num2 = 3;
    // call the function
    int result = add_two_num(num1, num2);
    printf("%d\n", result);

}
int add_two_num(int a, int b)
{
    int sum = a + b;
    return sum;
}