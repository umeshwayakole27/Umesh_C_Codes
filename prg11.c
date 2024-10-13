//write a program to find largest of three numbers using nested if statement.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Greater number is a\n");
        }
        else
        {
            printf("Greater number is c\n");
        }
    }
    else
    {
        if (c > b)
        {
            printf("Greater number is c\n");
        }
        else
        {
            printf("Greater number is b\n");
        }
    }
    return 0;
}