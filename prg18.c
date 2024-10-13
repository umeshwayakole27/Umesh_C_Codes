//write a program to print first 10 terms of fibonacci series.
#include <stdio.h>
int main()
{
    int i,  a = 0, b = 1, c;
    printf("The first 10 terms of fibonacci series are:\n");
    printf("%d %d ", a, b);
    for (i = 1; i <= 8; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}