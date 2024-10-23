/*
Practical No - 9
Title - Write a program to search a number in the given array.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>
int main()
{
    int arr[10], i, num, flag = 0;
    clrscr();
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
	printf("%d is present in the array at index %d\n", num, i);
    }
    else
    {
        printf("%d is not present in the array\n", num);
    }
    getch();
    return 0;
}

/*

Enter 10 numbers:
0 1 2 3 4 5 6 7 8 9
Enter a number to search: 7
7 is present in the array at index 7

*/
