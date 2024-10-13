/*
Practical 4:
Title - Write a program to add digits of a number.
*/

#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
	rem = num % 10;
	sum = sum + rem;
	num = num / 10;
    }
    printf("Sum of digits of the number is: %d", sum);
    getch();
    return 0;
}

/*

Enter a number: 3345
Sum of digits of the number is: 15

*/















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
