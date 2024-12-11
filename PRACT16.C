/*
Practical No – 16
Title - Write a program to sort an array using pointer.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>
#include <conio.h>
void sort(int *arr, int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                t = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = t;
            }
        }
    }
}
int main()
{
    int arr[5] = {4, 3, 5, 1, 2};
    int i;
    clrscr();
    sort(arr, 5);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    getch();
    return 0;
}

/*
OUTPUT:
1 2 3 4 5
*/
