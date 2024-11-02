/* Write a program to display odd and even numbers separately, stored in an array using
function.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int odd_even(int arr[10])
{
    int i;
    printf("Odd numbers are: ");
    for (i = 0; i < 10; i++)
    {
    if (arr[i] % 2 != 0)
    {
        printf("%d ", arr[i]);
    }
    }
    printf("\nEven numbers are: ");
    for (i = 0; i < 10; i++)
    {
    if (arr[i] % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
    }
}
int main()
{
    int arr[10], i;
    clrscr();
    randomize();
    for (i = 0; i < 10; i++)
    {
    arr[i] = random(100);
    }
    printf("The elements of array are: \n");
    for (i = 0; i < 10; i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n");
    odd_even(arr);
    getch();
    return 0;
}
/*
The elements of array are:
4 77 70 66 92 9 78 3 59 2
Odd numbers are: 77 9 3 59
Even numbers are: 4 70 66 92 78 2
*/