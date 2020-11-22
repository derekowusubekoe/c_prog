#include <stdio.h>
void message1();
void message2();
int main()
{
    message1();
    message2();
    printf("Done with main.\n");

    return 0; 

}

void message1()
{
    printf("This is message1.\n");
    
}
void message2()
{
    printf("This is message2.\n");
    message1();
    printf("Done with message2.\n");
}
