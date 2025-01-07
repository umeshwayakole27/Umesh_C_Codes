//sum of 2d array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i,j;
    //clrscr()
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j] = random(100);
        }
    }
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j] = random(100);
        }
    }
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;

}