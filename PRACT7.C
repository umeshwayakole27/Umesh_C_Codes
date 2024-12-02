/*
Practical No - 07
Title - Write a program to test whether given number is an Armstrong number using if and goto statement.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    // clrscr();
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    originalNum = num;

    check:
    if (originalNum != 0) {
	remainder = originalNum % 10;
	result += remainder * remainder * remainder;
	originalNum /= 10;
	goto check;
    }

    if (result == num)
	printf("%d is an Armstrong number.", num);
    else
	printf("%d is not an Armstrong number.", num);
    // getch();
    return 0;
}

/*
Enter a three-digit integer: 153
153 is an Armstrong number.
*/