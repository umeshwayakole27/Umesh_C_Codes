#include <stdio.h>
int main()
{
    int i,j;
    printf("Table of squares for numbers from 1 to 10\n");
    for(i=1,j=1;i<=10;i++,j++)
    {
        printf("%d * %d = %d\n",j,j,j*j);
    }
    return 0;
}