void drawTopBow();
void drawBottomBow();
void drawLineWithPlus();
void drawVerticalLinesWithStop();
void printNewLine();
#include <stdio.h>
//   ____-__
//  /      \
// /        \
// \        /
//  \______/
 
// \        /
//  \______/
// +--------+

//   ______
//  /      \
// /        \
// |  STOP  |
// \        /
//  \______/

//   ______
//  /      \
// /        \
// +--------+

int main()
{
    drawTopBow();
    drawBottomBow();
    printNewLine();
    drawBottomBow();
    drawLineWithPlus();
    printNewLine();
    drawTopBow();
    drawVerticalLinesWithStop();
    drawBottomBow();
    printNewLine();
    drawTopBow();
    drawLineWithPlus();

    return 0;
}

void drawTopBow()
{
    printf("  ______\n");
    printf(" /      \\\n");
    printf("/        \\\n");
}
void drawBottomBow()
{
    
    printf("\\        /\n");
    printf(" \\______/\n");
   
}
void drawLineWithPlus()
{
    printf("+--------+\n");
}
void drawVerticalLinesWithStop()
{
    printf("|  STOP  |\n");
}
void printNewLine()
{
    printf("\n");
}

