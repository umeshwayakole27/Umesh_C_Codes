#include <stdarg.h>
#include <stdio.h>
int sum(int n,...)
{
    int i,sum=0;
    va_list valst;
    va_start(valst,n);
    for(i=0;i<n;i++)
    {
        sum = sum+va_arg(valst,int);
    }
    return sum;
}
int main()
{
    printf("Sum = %d\n",sum(5,1,2,3,4,5));
    printf("Sum = %d\n",sum(7,10,20,30,40,50,60,70));
    printf("Sum = %d\n",sum(3,20,40,60));
    return 0;
}