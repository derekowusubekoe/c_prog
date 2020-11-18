C Programming Lectures: https://goo.gl/7Eh2SS
Deliberate Official Support

https://www.codestepbystep.com/problem/list
https://www.hackerrank.com
https://www.hackerearth.com
https://leetcode.com
https://interviewbit.com

Why Difference Files
Basic types
1. Header files
Contains prototypes or declaration of functions like <stdio.h> and <stdlib.h>
2. C Standard library
Contains the actual definitiond of functions like "printf" and "scanf"
3. Linker
Maps the header files(function declaration) to the C standard library(function definition)

Here's a table containing commonly used types in C programming for quick access.
Type	                    Size (bytes)	                            Format Specifier
int	                      at least 2, usually 4	                    %d, %i
char	                    1	                                        %c
float	                    4	                                        %f
double	                  8	                                        %lf
short int	                2 usually	                                %hd
unsigned int	            at least 2, usually 4	                    %u
long int	                at least 4, usually 8	                    %ld, %li
long long int	            at least 8	                              %lld, %lli
unsigned long int	        at least 4	                              %lu
unsigned long long int	  at least 8	                              %llu
signed char	              1	                                        %c
unsigned char	            1	                                        %c
long double	              at least 10, usually 12 or 16	            %Lf


Fundamental Data Types - Integer
Size of Integer
  The "int" variable has a value of 2 bytes or 4 bytes, depending on the machine type.

  2 bytes = 16 bits
  4 bytes = 32 bits

  The "sizeof" opertor is used to find the value of an integer type.
  Note: "sizeof" is a unary operator and not a function.
  ```cs
      #include <stdio.h>
      int main()
      {
        printf("%d", sizeof(int));
        return 0;
      }
  ```
  Range
    Range is the upper or lower limit of some set of data. E.g {0, 1, 2, 3}
    Decimal number system = base 10 numbers = 0 to 9 (human understandable number system) HUNS
  *** Binary number system = base 2 numbers = 0 to 1 (machine understandable number system) MUNS ***
  Range of 4 Bit Data
    4 bit data    0 0 0 0   Minimum Value = 0
                  1 1 1 1   Maximum Value = 15
    therefore range = 0 0 0 0 to 1 1 1 1 = 0 to 15
  Formular for calculating the max value: 2^n - 1
```cs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n;
   printf("Enter number in bytes: ");
   scanf("%i", &n);
   printf("%i", (int)pow(2,n)-1);
    return 0;
}
```
Modifiers
Note: by default int some_variable_name;
      is "signed integer" value.
```cs
      #include <stdio.h>
      #include <stdlib.h>
      #include <limits.h>
int main()
{
   int var_1 = INT_MIN;
   int var_2 = INT_MAX;
   printf("range of signed integer is from: %d to %d", var_1, var_1);
    return 0;
}
```
      Unsigned int some_variable_name;
      allows only positive values
```cs
#include <stdio.h>
#include <limits.h>
int main()
{
   unsigned int var_1 = 0;
   unsigned int var_2 = UINT_MAX;
   printf("range of unsigned integer is from: %u to %u", var_1, var_2);
    return 0;
}
```
Summary
1. sizeof (short) <= sizeof(int) <= sizeof(long)
2. Writing signed int some_variable_name is equivalent to writing int some_variable_name
3. %d is used to print "signed integer"
4. %u is used to print "unsigned integer"
5. %ld is used to print "long integer" equivalent to "signed long integer"
6. %lu is used to print "unsigned long integer"
7. %lld is used to print "long long integer"
8. %llu is used to print "unsigned long long integer"


Scope
Scope = Lifetime
The area under which a variable is applicable or alive
A block or a region where a variable is declared, defined and used and when a block or
a region ends, variable is automatically destroyed.

Basic Principle of Scoping
```cs
int main()
{
  /* some code */
  /* Content of outer block upto this point are visible to the internal block
  {
    /* some code */
    /* Content of internal block are not visible to outer block
  }
}
```
```cs
#include <stdio.h>
int main()
{
  // scope of variable "var" is within main() function only. There it is called local to the main()function
  int var = 34;
  printf("%d", var);
  return 0;
}

int fun()
{
   // Trying to access variable 'var' outside the main()function
  printf("%d", var);
}
```

Derived Data Types
Data types that are derived from fundamental data types are derived types. For example: arrays, pointers, function types, structures, etc.

C Assignment/Arithmethic Operators
Operator	      Example	      Same as
=	              a = b	        a = b
+=	            a += b	      a = a+b
-=	            a -= b	      a = a-b
*=	            a *= b	      a = a*b
/=	            a /= b	      a = a/b
%=	            a %= b	      a = a%b


C Relational Operators
A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.
Relational operators are used in decision making and loops.

Operator	          Meaning of Operator	          Example
==	                Equal to	                    5 == 3 is evaluated to 0
>	                  Greater than	                5 > 3 is evaluated to 1
<	                  Less than	                    5 < 3 is evaluated to 0
!=	                Not equal to	                5 != 3 is evaluated to 1
>=	                Greater than or equal to	    5 >= 3 is evaluated to 1
<=	                Less than or equal to	        5 <= 3 is evaluated to 0


C Logical Operators
An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.

Operator	    Meaning	Example
&&	Logical AND. True only if all operands are true
||	Logical OR.  True only if either one operand is true
!	  Logical NOT. True only if the operand is 0


Basic Input Function - scanf
SCANF: Stands for Scan Formatted string and accepts character, string and numeric data from the user using standard input - Keyboard
```cs
int var;
scanf("%d", &var);
```
The & is also called "address-of" operator


BIT Presentation of Unsigned Range Exeeding Condition
4BIT                  3BIT
 0 <----  0 0 0 0 ----> 0
 0 <----  0 0 0 1 ----> 1
 0 <----  0 0 1 0 ----> 2
 0 <----  0 0 1 1 ----> 3
 0 <----  0 1 0 0 ----> 4
 0 <----  0 1 0 1 ----> 5
 0 <----  0 1 1 0 ----> 6
 0 <----  0 1 1 1 ----> 7
 0 <----  1 0 0 0
 MOD 8/MOD 2^3
 1mod8 = 1
 2mod8 = 2
 3mod8 = 3
 8mod8 = 0
 9mod8 = 1
 For a 32bit unsigned data -> Mod 3^32
 For n bit unsigned data -> Mod 2^n


 Summary on Fundamental Data Types
 1. Size of charater = 1byte
 2. Signed character range -128 to +127
 3. Unsigned charater range 0 to 255
 4. Negative values won't buy you any additional powers
 5. In traditional ASCII table, each character requires 7 bits
 6. In extended ASCII table, each character utilize all 8 bits


 Variable Modifiers − Auto & Extern
 1. Auto Modifiers
```cs
 #include <stdio.h>
int var; //Global variable by default get initialized by zero (0)
int main()
{
  printf("%d\n", var);
  return 0;
}
```
2. Extern Modifiers
- Declaration means you are telling the compiler about the data type.
- Definition means you are telling the compiler to allocate a memory for the variable.

Example of Extern Modifier
```cs
    extern int var; // Using the extern only uses Declaration but no Definition
```
* Extern is short name for external
* Used when a particular file needs to access a variable from another file.


Register Modifiers
Register keyword hints the compiler to store a variable in register memory. It is done to reduce access time greatly for most frequently referred variables.

Syntax:
```cs
    #include <stdio.h>
    int main()
    {
      register int var;
      return 0;
    }
```
Increasing order of access time ratio
Register Memory
Cache Memory
Main Memory (Primary Memory)
Magnetic Disks (Auxillary Memory)
Magnetic Tapes (Auxillary Memory)

Summary on Variable Modifiers
1. Static variable remains in memory even if it is declared within a block; on the other hand automatic variable is destroyed after the completion of function in which it was declared
2. Static variable is declared outside the scope of any fucntion will act like global variable but only within the file in which it is declared
3. You can only assign a constant literal (or value) to a static variable.

Constant
A variable that never changes. Once defined, it cannot be modified later in the code.
Constants can be defined in two ways;
  - using #define ***(Do not use semi-colon at the end)***
  - using const

Using #Define
  Syntax:
  ```cs
      #define NAME/macro value
  ```
Job of preprocessor (not compiler) to replace NAME with value
```cs
    #include <stdio.h>
    #define PI 3.14159

    int main()
    {
      printf("%.5f\n", PI);
      return 0;
    }
```
Using Macros like functions
```cs
    #include <stdio.h>

    #define add(x, y) x + y
    int main()
    {
      printf("addition of two numbers: %d\n", add(4, 3));
      return 0;
    }
```
Writing multiple lines using \
```cs
    #include <stdio.h>
    #define greater(x, y) if(x > y) \
                  printf("%d is grater than %d", x, y); \
                  else \
                    printf("%d is lesser than %d", x, y);
    int main()
    {
      greater(5, 6);
      return 0;
    }
```
Expansion then Evaluation
```cs
  #include <stdio.h>
  #include <stdlib.h>

  #define add(x, y) x + y
int main()
{
    printf("result of expression a * b + c is: %d\n", 5 * add(4, 3));
    return 0;
}
```
Predefined Macros like __DATE__ & __TIME__
```cs
    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
```
Using Const
Syntax:
```cs
    const some_data_type some_variable_name
```

Inputs, Buffering and Flushing
