//write a program to read a number and test that whether it is a prime number or not.
#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
    return 0;
}