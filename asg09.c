/*
Question: 09
Write a program to display the sum of the series  1+ 1/2+1/3+......+1/n*/

#include <stdio.h>
int main()
{
    int i,n;
    float sum=0;
    clrscr();
    printf("Enter the lenght of the series -> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + 1.0/i;
    }
    printf("The total sum for up to nth elements of the series is -> %f",sum);
    getch();
    return 0;
}

/*
Enter the lenght of the series -> 5
The total sum for up to nth elements of the series is -> 2.283333
*/