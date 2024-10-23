
/*
Practical No - 10
Title - Write a program to multiply matrix A with B.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    clrscr();
    randomize();
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	     a[i][j] = random(100);
	}
    }
    printf("First Matrix is: \n");
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%5d",a[i][j]);
	}
	printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    b[i][j] = random(100);
	}
    }
    printf("Second Matrix is: \n");
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%5d",b[i][j]);
	}
	printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    c[i][j] = 0;
	    for (k = 0; k < 3; k++)
	    {
		c[i][j] += a[i][k] * b[k][j];
	    }
	}
    }
    printf("Product of matrices A and B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

/*
First Matrix is:
   43   25   95
   66   37   41
    6    3   66
Second Matrix is:
   80    9   78
   39   24   83
   99   75   44
Product of matrices A and B:
13820 8112 9609
10782 4557 10023
7131 5076 3621

*/