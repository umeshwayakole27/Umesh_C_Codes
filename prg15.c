//write a program to display first 10 odd numbers using for loop.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
