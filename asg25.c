/*Write a C program to print all Perfect numbers between 1 to n.
(Perfect number is a positive integer which is equal to the sum of its proper positive
divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.*/

#include <stdio.h>
int main()
{
    int i, j, n, sum;
    clrscr();
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Perfect numbers between 1 to %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    getch();
    return 0;
}

/*
Enter the number: 100
Perfect numbers between 1 to 100 are: 6 28
*/