//write a program to find largest of two numbers using if else statement.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("The value of a is greater than b\n");
    }
    else
    {
        printf("The value of b is greater than a\n");
    }
    return 0;
}