Examples of how to declare and initialize Pointers in C

1. int *ptr <---- Points to integer value
2. char *ptr <---- Points to character value
3. float *ptr <--- Points to float value

Need of Address of Operator
1. Simply declaring a pointer is not enough.
2. It is important to initialize pointer before use
3. One way to initialize a pointer is to assign address of some variable

int x = 5;
the base address of the variable x is let say 1000

int *ptr;
the base address of the *ptr variable is let say 2000

ptr = &x;
this ask the control to assign the address of variable x to the pointer variable ptr

int x = 5, *ptr = &x;

Value of Operator
