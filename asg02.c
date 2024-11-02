/*
Question: 02
Write a program in C to find the number and sum of all integers between 100 and 200
which are divisible by 9.*/

#include <stdio.h>
int main()
{
    int i, sum=0;
    clrscr();
    printf("numbers which are divisible by 9 between 100 and 200: \n");
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            printf("%4d",i);
            sum +=i;
        }
    }
    printf("\nsum of the numbers is: %d",sum);
    getch();
    return 0;
}

/*
numbers which are divisible by 9 between 100 and 200:
 108 117 126 135 144 153 162 171 180 189 198
sum of the numbers is: 1662
*/