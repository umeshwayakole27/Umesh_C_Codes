/*
Question: 17
Write a program using loops and switch statement to print word equivalent of a number
of 3 digits (i.e. 365 – three six five)*/
#include <stdio.h>
int main()
{
    int n, rem, digits[3],i=0;
    clrscr();
    printf("Enter a three-digit number -> ");
    scanf("%d", &n);

    while (n != 0 && i < 3)
    {
        rem = n % 10;
        digits[i] = rem;
        n = n / 10;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        switch (digits[j])
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
    }
    getch();
    return 0;
}

/*
Enter a three-digit number -> 365
Three Six Five
*/