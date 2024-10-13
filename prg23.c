//write a program to add digits of a number using while loop.
#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum of digits of the number is %d\n", sum);
    return 0;
}