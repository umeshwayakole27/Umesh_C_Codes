//write a program to test whether the given number is divisible by 2 or not using shift operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer number\n");
    scanf("%d", &a);
    (a >> 1)<<1==a ? printf("The number is divisible by 2\n") : printf("The number is not divisible by 2\n");
    return 0;
}