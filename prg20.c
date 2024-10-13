// write a program to evaluate 1+1/1!+1/2!+1/3!+1/4!+1/5!+...+1/7! .
#include <stdio.h>
int main()
{
    int i, fact = 1;
    float sum = 1;
    for (i = 1; i <= 7; i++)
    {
        fact = fact * i;
        sum = sum + 1.0 / fact;
    }
    printf("The sum is %f\n", sum);
    return 0;
}