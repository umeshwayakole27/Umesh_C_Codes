//add digits of a number
#include <stdio.h>
int main()
{
    int num,rem,sum = 0,n;
    printf("Enter a number: ");
    scanf("%d",&num);
    n = num;
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of %d is: %d",n,sum);
    return 0;
}