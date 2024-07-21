/*
 * Logic Building with C Language | Free Course
 * Lecture 2
 */

//*
// main(){
//     getch();
//     printf("Hello");
//     getch();
// }

//* write a program to print "MySirG" on the screen
// void main()
// {
//     system("CLS");
//     printf("\"MySirG\"");
//     int x = 5;
//     int y = 6;
//     printf("\nvalue of %d and %d is %d", x, y, x + y);
//     getch();
//     // String - Start & end with double quite("")
//     // \ - Escape sequence
// }

//* Write a program which takes one character from keyboard using getch() function and display its ASCII code
void main()
{
    system("CLS");
    char ch;
    ch = getch();
    printf("ASCII code of %c: %d", ch, ch);
    getch();
}