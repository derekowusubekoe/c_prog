#include <iostream>

using namespace std;
void print(int n, int m, int total);


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
    printTabs(m);
    printStars(2 * n - 1);
    printf("\n");

}








void printMiddle(int n, int m, int total)
{
    print(n + 1, m - 1, total);
}



// print (3)
// stars, tab
void print(int n, int m, int total)
{
    if (2 * n - 1 == total)
    {
        printOneLine(n, m);
        return;
    }

    printOneLine(n, m);

    printMiddle(n, m, total);

    printOneLine(n, m);
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    // number of stars = 1

    // total => final number of stars are there in the last row
    print(1, n / 2, n);

}