/*write a c program to check if the given number is armstrong or not*/

#include <stdio.h>
int main()
{
    int n, original, digits, rem, sum = 0;
   printf("Enter a number -> ");
    scanf("%d", &n);
    original = n;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    while (original != 0)
    {
        rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }
    if (sum == n)
        printf("The number is an Armstrong number\n");
    else
        printf("The number is not an Armstrong number\n");
    return 0;
    
}
