#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
        if ((sum > 9) && (n == 0))
        {
            n = sum;
            sum = 0;
        }
    }
    printf("The sum of digits of the number is %d\n", sum);
    return 0;
}