//write a program to find sum of number from 1 to 20 using for loop.
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        sum = sum + i;
    }
    printf("The sum of numbers from 1 to 20 is %d\n", sum);
    return 0;
}