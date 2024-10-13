// write a program to find the largest number among two integers using conditional operator.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    a > b ? printf("The value of a is greater than b\n") : printf("The value of b is greater than a\n");
    return 0;
}