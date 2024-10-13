//write a program to swap values of two variables without using third variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a and b before swapping is %d and %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a and b after swapping is %d and %d\n", a, b);
    return 0;
}