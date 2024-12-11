/*
Practical Number 3
Title- Write a program to find factorial of a number.
*/

#include <stdio.h>

int main() {
    int num, i,factorial = 1;
    // clrscr();
    printf("Enter a number (Natural number less than 8): ");
    scanf("%d", &num);

    if (num < 0 || num > 7) 
    {
        printf("Improper Input.\n");
        // getch();
        return 0;
    } 
    for (i = 1; i <= num; i++) 
    {
        factorial *= i;
    }
        printf("Factorial of %d = %d\n", num, factorial);
    // getch();
    return 0;
}

/*

Enter a number (Natural number less than 8): 5
Factorial of 5 = 120

*/