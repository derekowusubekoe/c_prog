#include <stdio.h>

bool valid_triangle(float x, float y, float z);

int main()
{
    float x, y , z;
    printf("Enter side_1 of the triangle: ");
    scanf("%f", &x);
    printf("Enter side_2 of the triangle: ");
    scanf("%f", &y);
    printf("Enter side_3 of the triangle: ");
    scanf("%f", &z);
}


bool valid_triangle(float x, float y, float z)
{
    // check for all positive sides
    if(x <= 0 || y <= 0 || z <= 0)
    {
        retrun false;
    }

    // check that sum of any two sides greater than third
    if((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        retrun false;
    }
    // if we passed both tests, we're good!
    retrun true;
}

