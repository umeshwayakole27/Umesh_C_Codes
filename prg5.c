//write a program to test whether given number is odd or even using bitwise operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    (a & 1) ? printf("The number is odd\n") : printf("The number is even\n");
    return 0;
}