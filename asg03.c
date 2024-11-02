/*
Question: 03
Write a c program to check whether a number is strong or not.*/
#include <stdio.h>
int main()
{
    int fact,i,sum=0,num,rem,n;
    clrscr();
    printf("Enter a number: ");
    scanf("%d",&num);
    n = num;
    while(num > 0)
    {
        rem = num % 10;
        fact = 1;
        for(i=1;i<=rem;i++)
        {
            fact *= i;
        }
        sum += fact;
        num = num / 10;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
    getch();
    return 0;
}

/*
Enter a number: 145
The number 145 is a strong number
*/