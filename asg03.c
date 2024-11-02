/*Write a c program to check whether a number is strong or not. (The number is strong if
sum of the factorials of digits of a number is equal to the original number. Ex: n=145=>
1! + 4! + 5! = 1 + 24 + 120 = 145)*/
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