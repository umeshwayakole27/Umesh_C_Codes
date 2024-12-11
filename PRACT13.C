/*
Practical No. - 13
Title - Write a Program to demostrate call by reference parameter pasing technique.
Name - Umesh Wayakole
*/ 

#include <stdio.h>
void swap(int* x, int* y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x=%d y=%d\n", *x, *y);
}
int main()
{
    int a = 10, b = 20;
    clrscr();
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    getch();
    return 0;
}

/*
OUTPUT:
x=20 y=10
a=20 b=10
*/