//write a program to evaluate the series 1!+2!+3!+4!+5!+...up to +7! .
#include <stdio.h>
int main()
{
    int i, fact = 1, sum = 0;
    for (i = 1; i <= 7; i++)
    {
        fact = fact * i;
        printf("Fact of %d is %d\n",i,fact);
        sum = sum + fact;
    }
    printf("The sum is %d\n",sum);
    return 0;
}