//write a program to find largest number among three numbers using simple if statement.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("The value of a is greater than b and c\n");
    }
    if (b > a && b > c)
    {
        printf("The value of b is greater than a and c\n");
    }
    if (c > a && c > b)
    {
        printf("The value of c is greater than a and b\n");
    }
    return 0;
}