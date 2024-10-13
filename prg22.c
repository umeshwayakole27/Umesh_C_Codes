// write a program to display the multilication table of a number using for loop.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}