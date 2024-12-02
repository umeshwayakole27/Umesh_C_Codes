/*
Practical No - 6
Title - Write a program to test whether given number is palindrome number using do while statement.
Name - Umesh Madhukar Wayakole
*/

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;
    // clrscr();
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    do {
	remainder = num % 10;
	reversedNum = reversedNum * 10 + remainder;
	num /= 10;
    } while (num != 0);
    if (originalNum == reversedNum) {
	printf("%d is a palindrome.\n", originalNum);
    } else {
	printf("%d is not a palindrome.\n", originalNum);
    }
    // getch();
    return 0;
}

/*

Enter an integer: 323
323 is a palindrome.

*/