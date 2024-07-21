/*
 * Logic Building with C Language | Free Course
 * Lecture 4
 */

//* Swapping of values of two int type variables
main()
{
    int a = 10;
    int b = 20;
    printf("Before swap\na = %d\nb = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("After swap\na = %d\nb = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap again\na = %d\nb = %d\n", a, b);

    a = a * b;
    b = a / b;
    a = a / b;
    printf("Swap again\na = %d\nb = %d\n", a, b);

    // 10 = 01010
    // 20 = 10100
    //      ------
    //  01010(10) ^ 10100(20) = 11110(30)
    //  11110(30) ^ 10100(20) = 01010(10)
    //  11110(30) ^ 01010(10) = 10100(20)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Swap again\na = %d\nb = %d\n", a, b);

    b = (a + b) - (a = b);
    printf("Swap again\na = %d\nb = %d\n", a, b);
}