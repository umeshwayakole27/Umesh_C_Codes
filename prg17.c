//write a program to find factorial of a number using for loop.
#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter a number (less than 8):\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}