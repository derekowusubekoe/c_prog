#include <stdio.h>

int areaOfRec(int length, int breadth)
{
	int area;
	area = length * breadth;
	return area;
}

int addNum(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}

int main()
{
	int l = 10, b = 5;
	int area = areaOfRec(l, b);
	printf("%d\n", area);

	int a = 3, c = 4;
	int sum = addNum(a, c);
	printf("%d\n", sum);

	return 0;
}
