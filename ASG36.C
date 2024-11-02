/*Write a program to generate a two dimensional array of size 3 x 3 and find sum of all the
array elements using function.*/
#include <stdio.h>
#include <stdlib.h>

int sum(int arr[3][3])
{
    int i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}
int main()
{
    int arr[3][3], i, j;
    clrscr();
    randomize();
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    arr[i][j] = random(100);
	}
    }
    printf("The elements of 3 x 3 array are: \n");
    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%d ", arr[i][j]);
	}
	printf("\n");
    }asg
    printf("Sum of all the elements of 3 x 3 array is: %d\n", sum(arr));
    getch();
    return 0;
}

/*
The elements of 3 x 3 array are:
4 77 70
66 92 9
78 3 59
Sum of all the elements of 3 x 3 array is: 458
*/