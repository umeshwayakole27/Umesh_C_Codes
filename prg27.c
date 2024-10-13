//write a program to read the first character of the class student has passed and display the full class of it.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the first character of the class student has passed\n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    switch (ch)
    {
        case 'D':
            printf("Distinction\n");
            break;
        case 'F':
            printf("First class\n");
            break;
        case 'S':
            printf("Second class\n");
            break;
        case 'P':
            printf("Passed\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}