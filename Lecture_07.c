/*
 * Logic Building with C Language | Free Course
 * Lecture 7
 *
 * Loop
 * Multiple Logics
 * Three Steps Rule -
 * 1) Uderstand Problem
 * 2) Test Cases
 * 3) Dry Run
 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

//* Write a program to print first 10 natural numbers
void first_10_natural_numbers()
{
    int i = 0;
    while (i < 10)
    {
        i++;
        printf("%d ", i);
    }
}

//* Write a program to print first 10 natural numbers in reverse order
void first_10_natural_numbers_reverse()
{
    //*
    // int i = 10;
    // while (i >= 1)
    // {
    //     printf("%d ", i);
    //     i--;
    // }

    //*
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", 11 - i);
        i++;
    }
}

//* Write a program to print first N odd natural numbers
void first_n_odd_natural_numbers()
{
    int N;
    printf("Enter a Number: ");
    scanf("%d", &N);

    //*
    // for (int i = 1; i <= N * 2; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    //*
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", i * 2 - 1);
    }
}

int main()
{
    system("CLS");
    // first_10_natural_numbers();
    // first_10_natural_numbers_reverse();
    first_n_odd_natural_numbers();
    getch();
    return 0;
}