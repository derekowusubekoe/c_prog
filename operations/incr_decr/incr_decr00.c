#include <stdio.h>
int main()
{
    // Pre:- means first increment/decrement then assign it to another variable

    //pre-decrement operator
    // --a
    int d = 4;
    int y = --d;
    printf("pre-decrement of %d is %d\n", y, d);

     //pre-increment operator ++a
    int c = 5;
    int g = ++c;
    printf("pre-increment of %d is %d\n", g, c);

    // Post:- means first assign it to another variable then increment/decrement

    //increment/post-increment operator is used to increase the value of a variable by one
    // They are both unary operators because they are applied on single operands
    // a++
    int a = 6;
    int u = a++;
    printf("increment of post-increment of %d is %d\n", u, a);

    //decrement/post-decrement operator is used to decrease the value of a variable by one
    // a--
    int b = 5;
    int v = b--;
    printf("decrement or post-decrement of %d is %d\n", v, b);

    // You cannot use rvalue before or after increment/decrement operator
    // (a + b)++;   error!
    // ++(a + b); error!

    //lvalue points to a memory location ie. having an address
    //rvalue has no identifiable location in memory

    //lexical operator and lexemes
    // a+++b is not an error
    // |a| |++| |+| |b|
    //operand, unary operator, addition, operand
    int q = 4;
    int p = 3;
    int t = q+++p;
    int h = q+ ++p;
    printf("answer is %d\n", t);
    printf("answer is %d\n", h);
    
    //Homework
    // printf("%d\n", a+++++b); will produce an error

   
    return 0;
}