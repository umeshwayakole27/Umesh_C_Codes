//write a program to swap values of two variables using third variable
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a and b before swapping is %d and %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("The value of a and b after swapping is %d and %d\n", a, b);
    return 0;
}