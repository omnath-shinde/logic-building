/*
 * Logic Building with C Language | Free Course
 * Lecture 9 - Dry Run
 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

void dryRun()
{
    int i, j;
    for (i = 1; i <= 5; i++)
        for (j = i + 1; j <= 4; j++)
            printf("%d ", 2 * j - 1);
}

void dryRun1()
{
    int i = 5, j = 1;
    while (i)
    {
        j = i * j;
        i--;
    }
    printf("%d %d", i, j);
}

void dryRun2()
{
    int x = 1, y = 10;
    while (x < y)
    {
        x++;
        y--;
    }
    printf("%d %d", x, y);
}

void dryRun3()
{
    int i = 2, x = 36;
    while (x > 1)
    {
        while (x % i == 0)
        {
            x /= i;
            printf("%d ", i);
        }
        i++;
    }
}

int main()
{
    system("CLS");
    // dryRun();
    // dryRun1();
    // dryRun2();
    dryRun3();
    getch();
    return 0;
}