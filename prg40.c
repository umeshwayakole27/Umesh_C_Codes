#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,j,temp;
    printf("Enter a string: ");
    gets(str);
    j = strlen(str) - 1;
    for(i = 0;i<j;i++,j++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse of the string is : %s\n",str);
    return 0;
}