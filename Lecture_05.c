/*
 * Logic Building with C Language | Free Course
 * Lecture 5
 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

//* Write a program to check whether a given number is positive or non positive
void check_positive()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Non-Positive number");
    }
}

//* if-else block
// Bye
void if_else_block()
{
    if (5 < 4)
    {
        printf("Hello");
        printf("Welcome");
    }
    else
        printf("Bye");
}

//*
// num
void check()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (3 != 2)
        ;
    printf("%d", num);
}

//* Write a program to check whether a given number is even or odd
void even_odd()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i % 2)
        printf("Odd number");
    else
        printf("Even number");

    // * Without using modules operator
    printf("\nWithout using modules operator: ");
    if (i / 2 * 2 == i)
        printf("Even number");
    else
        printf("Odd number");

    //* Using bitwise operator
    // even - last significant bit is always 0
    // odd - last significant bit is always 1
    printf("\nUsing Bitwise operator: ");
    if (i & 1)
        printf("Odd number");
    else
        printf("Even number");
}

//* add two number without + operator
void add()
{
    int a = 2;
    int b = 5;
    int c = a - (-b);
    printf("%d %d", a - (-b), c);
}

int main()
{
    system("CLS");
    add();
    getch();
    return 0;
}