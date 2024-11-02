/* Question: 40
Write a program to find the sum of the right diagonals of a matrix
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3], i, j, sum = 0;
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
    }
    for (i = 0; i < 3; i++)
    {
        sum = sum + arr[i][i];
    }
    printf("Sum of the right diagonals of 3 x 3 array is: %d\n", sum);
    getch();
    return 0;
}
/*
The elements of 3 x 3 array are:
4 77 70
66 92 9
78 3 59
Sum of the right diagonals of 3 x 3 array is: 155
*/