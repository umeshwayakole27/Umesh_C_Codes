//reverse a string in c without using strrev() function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i, j, temp;
    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse of the string: %s\n", str);
    return 0;
}