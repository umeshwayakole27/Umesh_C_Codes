#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    printf("The value of a and b is %d and %d\n",a,b);
}