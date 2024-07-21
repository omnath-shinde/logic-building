/*
 * Logic Building with C Language | Free Course
 * Lecture 6
 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

//* Write a program to print greatest number among 3 given numbers
void gretest_among_3()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // if (a >= b && a >= c)
    //     printf("%d", a);
    // else if (b >= a && b >= c)
    //     printf("%d", b);
    // else if (c >= a && c >= b)
    //     printf("%d", c);

    //* improve efficiency
    // if (a >= b && a >= c)
    //     printf("%d", a);
    // else if (b > c)
    //     printf("%d", b);
    // else
    //     printf("%d", c);

    //* improve efficiency
    // if (a > b)
    // {
    //     if (a > c)
    //         printf("%d", a);
    //     else
    //         printf("%d", c);
    // }
    // else
    // {
    //     if (b > c)
    //         printf("%d", b);
    //     else
    //         printf("%d", c);
    // }

    //* conditional operator
    // if (a > b)
    // {
    //     a > c ? printf("%d", a) : printf("%d", c);
    // }
    // else
    // {
    //     b > c ? printf("%d", b) : printf("%d", c);
    // }

    //* conditional operator
    // (a > b) ? a > c ? printf("%d", a) : printf("%d", c) : b > c ? printf("%d", b)
    //                                                             : printf("%d", c);

    //*
    printf("%d", (a > b) ? a > c ? a : c : b > c ? b
                                                 : c);

    // int max = a;
    // if (b > max)
    //     max = b;
    // if (c > max)
    //     max = c;
}

int main()
{
    system("CLS");
    gretest_among_3();
    getch();
    return 0;
}