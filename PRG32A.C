/*
Title - Write a Program to copy one string to another string.
*/
#include <stdio.h>
int main()
{
    char *a,*b,*t;
    clrscr();
    puts("Enter a string: ");
    gets(a);
    t=b;
    while(*a != '\0')
    {
        *b = *a;
        a++,b++;
    }
    *b = '\0';
    b = t;
    printf("Copied String is: %s",b);
    getch();
    return 0;
}