/*
Practical Number 2
Title- Write a program to find largest of three numbers
	   using nested if statement.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    // clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
	if (num1 > num3)
	{
	    printf("The largest number is: %d\n", num1);
	}
	else
	{
	    printf("The largest number is: %d\n", num3);
	}
    }
    else
    {
	if (num3 > num2)
	{
	    printf("The largest number is: %d\n", num3);
	}
	else
	{
	    printf("The largest number is: %d\n", num2);
	}
    }
    // getch();
    return 0;
}
/*

Enter three numbers: 4 5 6
The largest number is: 6

*/