#include <iostream>

using namespace std;
void print(int n, int m);


void printStars(int n)
{
    for (int i = 1; i <= n; i++)
        printf("*\t");
}

void printTabs(int m)
{
    for (int i = 1; i <= m; i++)
        printf("\t");
}

void printOneLine(int n, int m)
{
    printStars(n);
    printTabs(2 * m - 1);
    printStars(n);
    printf("\n");

}








void printMiddle(int n, int m)
{
    print(n - 1, m + 1);
}



// print (3)
void print(int n, int m)
{
    if (n == 1)
    {
        printOneLine(n, m);
        return;
    }

    printOneLine(n, m);

    printMiddle(n, m);

    printOneLine(n, m);
}

int main(int argc, char **argv){
    int n;
    cin >> n;

    print(n / 2 + 1, 1);


}