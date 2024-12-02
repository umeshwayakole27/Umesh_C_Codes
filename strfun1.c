#include <stdio.h>
struct number
{
        int n1,n2,n3;

};
void sum(int a,int b,int c)
{
    printf("sum of the numbers: %d",a+b+c);
}
int main()
{
    struct number num={10,20,30};
    sum(num.n1,num.n2,num.n3);
    return 0;
}