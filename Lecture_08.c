/*
 * Logic Building with C Language | Free Course
 * Lecture 8
 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

//* Write a program to print English alphabet in lower case
void lower_case()
{
    char x;
    for (x = 'a'; x < 'z'; x++)
    {
        printf("%c ", x);
    }
}

//* Write a program to calculate sum of first n natural number
void sum()
{
    int n;
    int sum = 0;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);
}

//* Write a program to print first N term of the series: 1 3 6 10 15
void series1()
{
    int s = 1;
    int n;
    printf("\nEnter number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        s += i;
        printf("%d ", s);
    }
}

//* 2 5 10 17 26 37...
void series2()
{
    int n;
    printf("\nEnter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * i + 1);
    }
}

int main()
{
    system("CLS");
    // lower_case();
    // sum();
    series2();
    getch();
    return 0;
}