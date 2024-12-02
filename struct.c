#include<stdio.h>
struct number
{
    int n1;
    int n2;
    int n3;
}num;
int main()
{
    num.n1=10;
    num.n2=20;
    num.n3=30;
    printf("Sum of the three numbers is %d", num.n1+num.n2+num.n3);
    return 0;
}