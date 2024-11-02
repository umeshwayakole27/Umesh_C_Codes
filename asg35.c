/*Write a program to check whether the given string is palindrome using function.*/
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    clrscr();
    printf("Enter the string: ");
    scanf("%s", str);
    if (isPalindrome(str))
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }
    getch();
    return 0;
}

/*
Enter the string: madam
madam is a palindrome
*/